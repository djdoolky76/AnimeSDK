#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISDKLoginWidgetController; }

#define IOEMDIHFIMC_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13CA0000)
#define IOEMDIHFIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9FFF0)

inline static constexpr unsigned int IOEMDIHFIMC_TypeDefinitionIndex = 45378;

class IOEMDIHFIMC : public ::System::Object
{
public:
	::MoleMole::UISDKLoginWidgetController* CPDLABBAFFD; // 0x10

	::System::Void _ctor(::MoleMole::UISDKLoginWidgetController* CPDLABBAFFD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISDKLoginWidgetController*))((::PBYTE)hIl2Cpp + IOEMDIHFIMC__CTOR_OFFSET))(this, CPDLABBAFFD);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEMDIHFIMC_OKJCHFGIKBH_OFFSET))(this);
	}
};
