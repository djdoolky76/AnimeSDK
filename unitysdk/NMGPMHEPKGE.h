#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class GCIMMDDIFBJ;
namespace System { class String; }

#define NMGPMHEPKGE__CTOR_OFFSET UNITYSDK_OFFSET(0x5C5590)

inline static constexpr unsigned int NMGPMHEPKGE_TypeDefinitionIndex = 72598;

struct alignas(8) NMGPMHEPKGE
{
	::GCIMMDDIFBJ* KEHECMCDLFC; // 0x10
	::System::String* DEPBADNPILE; // 0x18

	::System::Void _ctor(::GCIMMDDIFBJ* HODAIDNDKHD, ::System::String* HMJBMNAAGKB)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*, ::System::String*))((::PBYTE)hIl2Cpp + NMGPMHEPKGE__CTOR_OFFSET))(this, HODAIDNDKHD, HMJBMNAAGKB);
	}
};
