#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define DCCEHEFLKHG_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x15A2B920)
#define DCCEHEFLKHG_OAEAGHBALEF_OFFSET UNITYSDK_OFFSET(0x15A2B9A0)
#define DCCEHEFLKHG__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2BB30)

inline static constexpr unsigned int DCCEHEFLKHG_TypeDefinitionIndex = 80273;

class DCCEHEFLKHG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEHEFLKHG__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + DCCEHEFLKHG_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	static ::System::Boolean OAEAGHBALEF(::BPHGNMNLLHF* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + DCCEHEFLKHG_OAEAGHBALEF_OFFSET))(BDHOILPIGKB);
	}
};
