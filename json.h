#ifndef JSON_H
#define JSON_H

#include <variant>
#include <vector>
#include <map>
#include <string>
#include <ostream>

using JsonValue = std::variant<std::nullptr_t, bool, int, double, std::string, std::vector<JsonValue>, std::map<std::string, JsonValue>>;

void serialize(const JsonValue& val, std::ostream& out, int indent = 0);

JsonoValue deserialize(const std::string& json);

#endif
