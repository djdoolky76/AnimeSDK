#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }

#define GPPMPHICDEA_HPKCCLKOIHL_BBDCLOLDAHF_OFFSET UNITYSDK_OFFSET(0x17ADF4D0)
#define GPPMPHICDEA_HPKCCLKOIHL__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADF4C0)

inline static constexpr unsigned int GPPMPHICDEA_HPKCCLKOIHL_TypeDefinitionIndex = 42608;

class GPPMPHICDEA_HPKCCLKOIHL : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* PJCLCLCNDCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HPKCCLKOIHL__CTOR_OFFSET))(this);
	}

	::System::Void BBDCLOLDAHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HPKCCLKOIHL_BBDCLOLDAHF_OFFSET))(this);
	}
};
