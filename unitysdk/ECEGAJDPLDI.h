#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class GCIMMDDIFBJ;
namespace System { class String; }

#define ECEGAJDPLDI__CTOR_OFFSET UNITYSDK_OFFSET(0x706DD0)

inline static constexpr unsigned int ECEGAJDPLDI_TypeDefinitionIndex = 53647;

struct alignas(8) ECEGAJDPLDI
{
	::GCIMMDDIFBJ* KEHECMCDLFC; // 0x10
	::System::String* DEPBADNPILE; // 0x18
	::System::Single DOJNJGJGAMA; // 0x20
	::System::Boolean MLJJIOJEAPG; // 0x24
	::System::Boolean EHMHNEONPNE; // 0x25

	::System::Void _ctor(::GCIMMDDIFBJ* HODAIDNDKHD, ::System::String* HMJBMNAAGKB, ::System::Single BHBPCNPCBNP, ::System::Boolean AHBJFPEFGFO, ::System::Boolean EHNLAOLNPGK)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*, ::System::String*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ECEGAJDPLDI__CTOR_OFFSET))(this, HODAIDNDKHD, HMJBMNAAGKB, BHBPCNPCBNP, AHBJFPEFGFO, EHNLAOLNPGK);
	}
};
