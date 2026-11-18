#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class GCIMMDDIFBJ;
namespace System { class String; }

#define MOFKLDMEJGA__CTOR_OFFSET UNITYSDK_OFFSET(0x795BD0)

inline static constexpr unsigned int MOFKLDMEJGA_TypeDefinitionIndex = 71372;

struct alignas(8) MOFKLDMEJGA
{
	::GCIMMDDIFBJ* KEHECMCDLFC; // 0x10
	::System::String* DEPBADNPILE; // 0x18
	::System::Single EPMNIJOAOOG; // 0x20

	::System::Void _ctor(::GCIMMDDIFBJ* HODAIDNDKHD, ::System::String* HMJBMNAAGKB, ::System::Single AHAFNGEDPLI)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOFKLDMEJGA__CTOR_OFFSET))(this, HODAIDNDKHD, HMJBMNAAGKB, AHAFNGEDPLI);
	}
};
