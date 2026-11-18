#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRecommendTypeRandPropertyRowWidgetController; }

#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE29B0)
#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_1__REFRESHRANDPROPERTYFILTERITEMS_B__2_OFFSET UNITYSDK_OFFSET(0x17BE29C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopWindowController___c__DisplayClass23_1_TypeDefinitionIndex = 65595;

	template <typename T>
	class UIRoleEquipRecommendPopWindowController___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::MoleMole::UIRecommendTypeRandPropertyRowWidgetController* itemCtrl; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Boolean needSelect; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 itemIdx; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRandPropertyFilterItems_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_1__REFRESHRANDPROPERTYFILTERITEMS_B__2_OFFSET))(this);
		}
	};
}
