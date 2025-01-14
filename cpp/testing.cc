/*!
 *  Copyright (c) 2024 by Contributors
 * \file xgrammar/testing.cc
 */
#include "testing.h"

#include "grammar_parser.h"
#include "json_schema_converter.h"
#include "regex_converter.h"

namespace xgrammar {

std::string _JSONSchemaToEBNF(
    const std::string& schema,
    bool any_whitespace,
    std::optional<int> indent,
    std::optional<std::pair<std::string, std::string>> separators,
    bool strict_mode
) {
  return JSONSchemaToEBNF(schema, any_whitespace, indent, separators, strict_mode);
}

std::string _RegexToEBNF(const std::string& regex, bool with_rule_name) {
  return RegexToEBNF(regex, with_rule_name);
}

}  // namespace xgrammar
