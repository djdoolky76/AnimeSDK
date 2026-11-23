#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/E6F71772C4080305.h"

namespace System { class Object; }
namespace System { class String; }

#define E6F71772C4080305_MATCHERJSON_TOMATCHER_OFFSET UNITYSDK_OFFSET(0x3F54EC0)

inline static constexpr unsigned int E6F71772C4080305_MatcherJson_TypeDefinitionIndex = 14200;

struct alignas(8) E6F71772C4080305_MatcherJson
{
	::System::String* interface; // 0x10
	::Il2CppArray<::System::String*>* interfaces; // 0x18
	::System::String* deviceClass; // 0x20
	::Il2CppArray<::System::String*>* deviceClasses; // 0x28
	::System::String* manufacturer; // 0x30
	::Il2CppArray<::System::String*>* manufacturers; // 0x38
	::System::String* product; // 0x40
	::Il2CppArray<::System::String*>* products; // 0x48
	::System::String* version; // 0x50
	::Il2CppArray<::System::String*>* versions; // 0x58
	::Il2CppArray<::System::Object*>* capabilities; // 0x60

	::E6F71772C4080305 ToMatcher()
	{
		return ((::E6F71772C4080305(*)(::PVOID))((::PBYTE)hIl2Cpp + E6F71772C4080305_MATCHERJSON_TOMATCHER_OFFSET))(this);
	}
};
