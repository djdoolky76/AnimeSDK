#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMAFHJODFP_LKCKHPNDOME;

#define FBMAFHJODFP_NHHOBAPIHJK_NLNOIPJPNKI_OFFSET UNITYSDK_OFFSET(0x10F56D10)
#define FBMAFHJODFP_NHHOBAPIHJK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F56D00)

inline static constexpr unsigned int FBMAFHJODFP_NHHOBAPIHJK_TypeDefinitionIndex = 76180;

class FBMAFHJODFP_NHHOBAPIHJK : public ::System::Object
{
public:
	::FBMAFHJODFP_LKCKHPNDOME* FGBNBFHOKAA; // 0x10
	::System::Boolean PILJJPDCLLM; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 ABHBKFJKINO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_NHHOBAPIHJK__CTOR_OFFSET))(this);
	}

	::System::Void NLNOIPJPNKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_NHHOBAPIHJK_NLNOIPJPNKI_OFFSET))(this);
	}
};
