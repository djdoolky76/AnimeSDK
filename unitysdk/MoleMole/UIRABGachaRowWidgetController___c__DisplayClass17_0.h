#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKCGIDMHJIA;
namespace MoleMole { class UIRABAutoBattleBase3DModelController; }
namespace MoleMole { class UIRABGachaRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168E3B10)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONPULLSUCCESSHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x168E3B20)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONPULLSUCCESSHANDLE_B__1_OFFSET UNITYSDK_OFFSET(0x168E3BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaRowWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 54800;

	class UIRABGachaRowWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::FKCGIDMHJIA* rsp; // 0x10
		::MoleMole::UIRABGachaRowWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20
		::MoleMole::UIRABAutoBattleBase3DModelController* baseCtrl3D; // 0x28
		::System::Int32 maxRarity; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPullSuccessHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONPULLSUCCESSHANDLE_B__0_OFFSET))(this);
		}

		::System::Void _OnPullSuccessHandle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONPULLSUCCESSHANDLE_B__1_OFFSET))(this);
		}
	};
}
