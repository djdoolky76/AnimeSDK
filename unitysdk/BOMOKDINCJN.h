#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class OFGDEMPMLCD;

#define BOMOKDINCJN_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1509BB40)
#define BOMOKDINCJN_ELLCAJOCCKF_OFFSET UNITYSDK_OFFSET(0x1509BBE0)
#define BOMOKDINCJN_FHCFIAFDAAB_OFFSET UNITYSDK_OFFSET(0x1509BBD0)
#define BOMOKDINCJN_ONSTART_OFFSET UNITYSDK_OFFSET(0x1509BA80)
#define BOMOKDINCJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1509BB30)

inline static constexpr unsigned int BOMOKDINCJN_TypeDefinitionIndex = 69210;

class BOMOKDINCJN : public ::JGELKBLKFHE
{
public:
	// static const ::System::Int32 PNPJFFNBLDO = 0x2; // 0x0
	::OFGDEMPMLCD* _BGMNIBBNNPK_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMOKDINCJN__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMOKDINCJN_ONSTART_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMOKDINCJN_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void FHCFIAFDAAB(::OFGDEMPMLCD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OFGDEMPMLCD*))((::PBYTE)hIl2Cpp + BOMOKDINCJN_FHCFIAFDAAB_OFFSET))(this, EGEGIMGMJHN);
	}

	::OFGDEMPMLCD* ELLCAJOCCKF()
	{
		return ((::OFGDEMPMLCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMOKDINCJN_ELLCAJOCCKF_OFFSET))(this);
	}
};
