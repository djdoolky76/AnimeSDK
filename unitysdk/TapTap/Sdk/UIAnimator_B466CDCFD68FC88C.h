#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIAnimator_Action; }

#define TAPTAP_SDK_UIANIMATOR_B466CDCFD68FC88C_E51A9769FC5B0997_OFFSET UNITYSDK_OFFSET(0x2A1C780)
#define TAPTAP_SDK_UIANIMATOR_B466CDCFD68FC88C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator_B466CDCFD68FC88C_TypeDefinitionIndex = 20895;

	class UIAnimator_B466CDCFD68FC88C : public ::System::Object
	{
	public:
		::TapTap::Sdk::UIAnimator_Action* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_B466CDCFD68FC88C__CTOR_OFFSET))(this);
		}

		::System::Void E51A9769FC5B0997()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_B466CDCFD68FC88C_E51A9769FC5B0997_OFFSET))(this);
		}
	};
}
