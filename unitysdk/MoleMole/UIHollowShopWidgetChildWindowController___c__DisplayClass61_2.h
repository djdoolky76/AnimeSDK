#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEOMFHNEOID.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2D380)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__0_OFFSET UNITYSDK_OFFSET(0x18F2D390)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__1_OFFSET UNITYSDK_OFFSET(0x18F2D640)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__2_OFFSET UNITYSDK_OFFSET(0x18F2D770)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__3_OFFSET UNITYSDK_OFFSET(0x18F2D480)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___c__DisplayClass61_2_TypeDefinitionIndex = 61288;

	template <typename T1, typename T2>
	class UIHollowShopWidgetChildWindowController___c__DisplayClass61_2 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UIButtonBase* realBtn; // 0x10
		::UnityEngine::Transform* tran; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		::UnityEngine::UI::Extension::UITabButton* btn; // 0x28
		::UnityEngine::Events::UnityAction* __9__3; // 0x30
		::System::Object* CS___8__locals2; // 0x38
		::GEOMFHNEOID currentPos; // 0x40
		::System::Int32 cardIndex; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__CTOR_OFFSET))(this);
		}

		::System::Void _RealGotoShop_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__0_OFFSET))(this);
		}

		::System::Void _RealGotoShop_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__3_OFFSET))(this);
		}

		::System::Void _RealGotoShop_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__1_OFFSET))(this);
		}

		::System::Void _RealGotoShop_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS61_2__REALGOTOSHOP_B__2_OFFSET))(this);
		}
	};
}
