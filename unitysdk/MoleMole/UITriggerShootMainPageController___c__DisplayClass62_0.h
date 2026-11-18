#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITriggerShootMainPageController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15638CE0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___C__DISPLAYCLASS62_0__ONCOMBOCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x15638CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerShootMainPageController___c__DisplayClass62_0_TypeDefinitionIndex = 46048;

	class UITriggerShootMainPageController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::MoleMole::UITriggerShootMainPageController* __4__this; // 0x10
		::System::String* fadeinAnim; // 0x18
		::UnityEngine::Transform* newTips; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnComboChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___C__DISPLAYCLASS62_0__ONCOMBOCHANGE_B__0_OFFSET))(this);
		}
	};
}
