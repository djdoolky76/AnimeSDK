#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB37D0)
#define MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS56_1__ONSELECTCHILD_B__0_OFFSET UNITYSDK_OFFSET(0x14CB37E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallEditModeWidgetController___c__DisplayClass56_1_TypeDefinitionIndex = 54002;

	template <typename T>
	class UIPhotoWallEditModeWidgetController___c__DisplayClass56_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::UnityEngine::Vector3 screenPos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS56_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectChild_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS56_1__ONSELECTCHILD_B__0_OFFSET))(this);
		}
	};
}
