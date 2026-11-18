#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NEIKCKDHAGF_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8CFB00)

inline static constexpr unsigned int NEIKCKDHAGF_TypeDefinitionIndex = 94245;

struct alignas(4) NEIKCKDHAGF
{
	::System::Int32 MGAKCKNHFGN; // 0x10
	::System::Boolean ILHKELCJCAC; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIKCKDHAGF_JGGHNLBNKHA_OFFSET))(this);
	}
};
