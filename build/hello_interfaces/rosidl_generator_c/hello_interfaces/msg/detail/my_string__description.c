// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hello_interfaces:msg/MyString.idl
// generated code does not contain a copyright notice

#include "hello_interfaces/msg/detail/my_string__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
const rosidl_type_hash_t *
hello_interfaces__msg__MyString__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x41, 0xf1, 0xcb, 0x7e, 0x30, 0xc7, 0xdd,
      0xdf, 0x61, 0x62, 0x86, 0x8e, 0x42, 0x61, 0x10,
      0xcb, 0x3d, 0x59, 0x5c, 0x64, 0x20, 0x71, 0x7b,
      0xfe, 0x63, 0x7a, 0xd6, 0x4d, 0x39, 0x0b, 0x95,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hello_interfaces__msg__MyString__TYPE_NAME[] = "hello_interfaces/msg/MyString";

// Define type names, field names, and default values
static char hello_interfaces__msg__MyString__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field hello_interfaces__msg__MyString__FIELDS[] = {
  {
    {hello_interfaces__msg__MyString__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hello_interfaces__msg__MyString__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hello_interfaces__msg__MyString__TYPE_NAME, 29, 29},
      {hello_interfaces__msg__MyString__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hello_interfaces__msg__MyString__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hello_interfaces__msg__MyString__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 12, 12},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hello_interfaces__msg__MyString__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hello_interfaces__msg__MyString__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
