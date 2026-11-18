#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UILevelResultPageController_RewardItemMeta.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19611440)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19611480)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__REFRESHCHESSBOARDVIEW_B__24_0_OFFSET UNITYSDK_OFFSET(0x19611490)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController___c_TypeDefinitionIndex = 89108;

	class UILevelResultPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__24_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x38F40);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x38F48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshChessboardView_b__24_0(::MoleMole::UILevelResultPageController_RewardItemMeta a, ::MoleMole::UILevelResultPageController_RewardItemMeta b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UILevelResultPageController_RewardItemMeta, ::MoleMole::UILevelResultPageController_RewardItemMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__REFRESHCHESSBOARDVIEW_B__24_0_OFFSET))(this, a, b);
		}
	};
}
