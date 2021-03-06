

/*
    Copyright 2016 Robert Elder Software Inc.
    
    Licensed under the Apache License, Version 2.0 (the "License"); you may not 
    use this file except in compliance with the License.  You may obtain a copy 
    of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the 
    License for the specific language governing permissions and limitations 
    under the License.
*/

/*GETS_REPLACED_WITH_INCLUDES*/

struct type_engine_state{
	struct scope_level * top_scope;
	struct unsigned_int_list reversible_operations; /*  An array that describes all the operations we've done so we can reverse them */
	struct unsigned_int_list simple_type_specifiers;
	struct unsigned_int_list all_type_specifiers;
	struct unsigned_int_list simple_type_qualifiers;
	struct unsigned_int_list storage_class_specifiers;
	struct unsigned_int_list specifier_or_qualifiers;
	struct unsigned_int_list specifier_or_qualifier_list_items;
	struct unsigned_int_list parameter_lists;
	struct unsigned_int_list declarator_parts;
	struct struct_generic_list_item_list declarator_part_list_items;
	struct unsigned_int_list pointer_parts;
	struct unsigned_int_list function_parts;
	struct unsigned_int_list array_parts;
	struct unsigned_int_list bitfield_or_declarators;
	struct unsigned_int_list general_types;
	struct unsigned_int_list general_type_list_items;
	struct unsigned_int_list struct_or_union_specifiers;
	struct unsigned_int_list scoped_struct_or_union_specifiers;
	struct unsigned_int_list union_specifiers;
	struct unsigned_int_list struct_specifiers;
	struct struct_c_lexer_token_list identifiers;
	struct struct_parser_node_ptr_list constant_expression_parser_nodes;
	struct struct_scope_level_ptr_list scope_levels;
	struct unsigned_int_to_unsigned_int_map simple_type_specifiers_map; /*  Used to determine the index of any existing type specifier */
	struct unsigned_int_to_unsigned_int_map all_type_specifiers_map;
	struct unsigned_int_to_unsigned_int_map simple_type_qualifiers_map;
	struct unsigned_int_to_unsigned_int_map storage_class_specifiers_map;
	struct unsigned_int_to_unsigned_int_map specifier_or_qualifiers_map; /*  type specifier, type qualifier, or storage class specifier */
	struct unsigned_int_to_unsigned_int_map specifier_or_qualifier_list_items_map;
	struct unsigned_int_to_unsigned_int_map parameter_lists_map;
	struct unsigned_int_to_unsigned_int_map declarator_parts_map;
	struct struct_generic_list_item_to_unsigned_int_map declarator_part_list_items_map;
	struct unsigned_int_to_unsigned_int_map pointer_parts_map;
	struct unsigned_int_to_unsigned_int_map function_parts_map;
	struct unsigned_int_to_unsigned_int_map array_parts_map;
	struct unsigned_int_to_unsigned_int_map bitfield_or_declarators_map;
	struct unsigned_int_to_unsigned_int_map general_types_map;
	struct unsigned_int_to_unsigned_int_map general_type_list_items_map;
	struct unsigned_int_to_unsigned_int_map struct_or_union_specifiers_map;
	struct unsigned_int_to_unsigned_int_map scoped_struct_or_union_specifiers_map;
	struct unsigned_int_to_unsigned_int_map union_specifiers_map;
	struct unsigned_int_to_unsigned_int_map struct_specifiers_map;
	struct struct_parser_node_ptr_to_unsigned_int_map constant_expression_parser_nodes_map;
	struct struct_scope_level_ptr_to_unsigned_int_map scope_levels_map;
	struct struct_c_lexer_token_to_unsigned_int_map identifiers_map;
	struct function_definition_collection function_definitions;
	struct void_ptr_list stored_pointers;
	struct struct_parser_node_ptr_to_unsigned_int_map parser_node_scope_associations;
	unsigned int current_scope_depth;
	unsigned int pad;
};
