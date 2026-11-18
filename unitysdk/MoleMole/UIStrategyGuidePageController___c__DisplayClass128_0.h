#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKFBCIGNNEP;

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS128_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16904400)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS128_0__GETTOPRECOMMENDPROPERTYID_B__0_OFFSET UNITYSDK_OFFSET(0x16904410)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass128_0_TypeDefinitionIndex = 52244;

	class UIStrategyGuidePageController___c__DisplayClass128_0 : public ::System::Object
	{
	public:
		::System::Int32 slot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS128_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTopRecommendPropertyId_b__0(::IKFBCIGNNEP* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKFBCIGNNEP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS128_0__GETTOPRECOMMENDPROPERTYID_B__0_OFFSET))(this, p);
		}
	};
}
