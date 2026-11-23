#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E6F71772C4080305_MatcherJson.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int EFDFD8D59E1B8215_LayoutJsonNameAndDescriptorOnly_TypeDefinitionIndex = 14393;

struct alignas(8) EFDFD8D59E1B8215_LayoutJsonNameAndDescriptorOnly
{
	::System::String* name; // 0x10
	::System::String* extend; // 0x18
	::Il2CppArray<::System::String*>* extendMultiple; // 0x20
	::E6F71772C4080305_MatcherJson device; // 0x28
};
