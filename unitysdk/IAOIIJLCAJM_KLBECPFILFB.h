#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPHPCHPDJPB;
namespace System { class Action; }

#define IAOIIJLCAJM_KLBECPFILFB_BJHKGLJIIAM_OFFSET UNITYSDK_OFFSET(0x12E9D480)
#define IAOIIJLCAJM_KLBECPFILFB_GAKEHCDLGLD_OFFSET UNITYSDK_OFFSET(0x12E9D410)
#define IAOIIJLCAJM_KLBECPFILFB__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9D400)

inline static constexpr unsigned int IAOIIJLCAJM_KLBECPFILFB_TypeDefinitionIndex = 64889;

class IAOIIJLCAJM_KLBECPFILFB : public ::System::Object
{
public:
	::System::Action* DMCEEPGHGLO; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOIIJLCAJM_KLBECPFILFB__CTOR_OFFSET))(this);
	}

	::System::Action* GAKEHCDLGLD(::DPHPCHPDJPB* PIIPCLCCOIG)
	{
		return ((::System::Action*(*)(::PVOID, ::DPHPCHPDJPB*))((::PBYTE)hIl2Cpp + IAOIIJLCAJM_KLBECPFILFB_GAKEHCDLGLD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void BJHKGLJIIAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOIIJLCAJM_KLBECPFILFB_BJHKGLJIIAM_OFFSET))(this);
	}
};
