#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFF150)
#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS47_0__ONSTRATEGYBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x13AFF160)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyDetailPageController___c__DisplayClass47_0_TypeDefinitionIndex = 77811;

	class UIStrategyDetailPageController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::UInt32>* callback; // 0x10
		::System::UInt32 avatarId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStrategyBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS47_0__ONSTRATEGYBTNCLICK_B__0_OFFSET))(this);
		}
	};
}
