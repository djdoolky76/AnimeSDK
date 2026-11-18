#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAPAFCMLKEA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OPIEFDJCLDG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x809210)
#define OPIEFDJCLDG_PMJDPHCAKDA_OFFSET UNITYSDK_OFFSET(0x809120)
#define OPIEFDJCLDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x809110)

inline static constexpr unsigned int OPIEFDJCLDG_TypeDefinitionIndex = 72358;

struct alignas(4) OPIEFDJCLDG
{
	::System::Double JPANKNOLLIC; // 0x10
	::System::Double PEJKBNBEKJK; // 0x18
	::System::Double AAOLFKFPODG; // 0x20
	::System::Double HEPFEDMKKEE; // 0x28
	::System::Double FMCFOFNHCJL; // 0x30
	::System::Double MCEKKDCEJFN; // 0x38
	::System::Double CNJDHFCAENF; // 0x40

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIEFDJCLDG_TOSTRING_OFFSET))(this);
	}

	::FAPAFCMLKEA PMJDPHCAKDA(::System::Double EPPCCEEAHLN)
	{
		return ((::FAPAFCMLKEA(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + OPIEFDJCLDG_PMJDPHCAKDA_OFFSET))(this, EPPCCEEAHLN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIEFDJCLDG_DPIHOJBBGLA_OFFSET))(this);
	}
};
