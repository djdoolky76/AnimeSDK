#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HJLKCMIHAAI;
class NBDLJECLJJO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGROCERYITEMICONWIDGETCONTROLLER_ADDITIONALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C32670)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryItemIconWidgetController_AdditionalData_TypeDefinitionIndex = 64655;

	class UIGroceryItemIconWidgetController_AdditionalData : public ::System::Object
	{
	public:
		::HJLKCMIHAAI* IconStyle; // 0x10
		::System::Action_2<::UnityEngine::GameObject*, ::NBDLJECLJJO*>* AdditionalRefreshItemMethod; // 0x18
		::System::Boolean IsShowRedSign; // 0x20
		::System::Boolean IsSetRefreshTimeToText; // 0x21
		::System::Boolean IsShowLimitBuyInfo; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYITEMICONWIDGETCONTROLLER_ADDITIONALDATA__CTOR_OFFSET))(this);
		}
	};
}
