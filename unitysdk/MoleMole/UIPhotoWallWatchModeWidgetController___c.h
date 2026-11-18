#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1676A3E0)
#define MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1676A420)
#define MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__ONCLICK_B__11_0_OFFSET UNITYSDK_OFFSET(0x1676A430)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallWatchModeWidgetController___c_TypeDefinitionIndex = 41021;

	class UIPhotoWallWatchModeWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoWallWatchModeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4FB80);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoWallWatchModeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4FB88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClick_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__ONCLICK_B__11_0_OFFSET))(this);
		}
	};
}
