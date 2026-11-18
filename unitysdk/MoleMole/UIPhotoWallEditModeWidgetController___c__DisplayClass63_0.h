#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class NAIJHPCDGKC;
namespace MoleMole { class UIPhotoWallEditModeWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA0D40)
#define MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__STARTDRAGNEWOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x17BA43C0)
#define MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__STARTDRAGNEWOBJECT_B__1_OFFSET UNITYSDK_OFFSET(0x17BA4450)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallEditModeWidgetController___c__DisplayClass63_0_TypeDefinitionIndex = 54000;

	class UIPhotoWallEditModeWidgetController___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPhotoWallEditModeWidgetController* __4__this; // 0x10
		::System::Action_1<::NAIJHPCDGKC*>* __9__1; // 0x18
		::System::Int32 itemConfigId; // 0x20
		::UnityEngine::Vector2 screenPos; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartDragNewObject_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__STARTDRAGNEWOBJECT_B__0_OFFSET))(this);
		}

		::System::Void _StartDragNewObject_b__1(::NAIJHPCDGKC* data)
		{
			return ((::System::Void(*)(::PVOID, ::NAIJHPCDGKC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__STARTDRAGNEWOBJECT_B__1_OFFSET))(this, data);
		}
	};
}
