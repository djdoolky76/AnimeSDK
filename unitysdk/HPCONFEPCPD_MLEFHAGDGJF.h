#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPCONFEPCPD_MLEFHAGDGJF_BHHKMBIAOKO_OFFSET UNITYSDK_OFFSET(0x12E94F80)
#define HPCONFEPCPD_MLEFHAGDGJF_GIMHECDJIDB_OFFSET UNITYSDK_OFFSET(0x12E94F90)
#define HPCONFEPCPD_MLEFHAGDGJF__CTOR_OFFSET UNITYSDK_OFFSET(0x12E94F70)

inline static constexpr unsigned int HPCONFEPCPD_MLEFHAGDGJF_TypeDefinitionIndex = 90923;

class HPCONFEPCPD_MLEFHAGDGJF : public ::System::Object
{
public:
	::System::Single AAFNBJCJCMD; // 0x10
	::System::Single MMLFNNMFEOB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_MLEFHAGDGJF__CTOR_OFFSET))(this);
	}

	::System::Single BHHKMBIAOKO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_MLEFHAGDGJF_BHHKMBIAOKO_OFFSET))(this);
	}

	::System::Single GIMHECDJIDB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_MLEFHAGDGJF_GIMHECDJIDB_OFFSET))(this);
	}
};
