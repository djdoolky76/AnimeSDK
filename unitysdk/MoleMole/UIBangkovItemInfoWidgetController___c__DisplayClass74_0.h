#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A351420)
#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS74_0__ONCLICKSPLIT_B__0_OFFSET UNITYSDK_OFFSET(0x1A351430)
#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS74_0__ONCLICKSPLIT_B__1_OFFSET UNITYSDK_OFFSET(0x1A351640)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovItemInfoWidgetController___c__DisplayClass74_0_TypeDefinitionIndex = 69216;

	class UIBangkovItemInfoWidgetController___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::FMHDMLBDIJC* target; // 0x10
		::MoleMole::UIBangkovItemInfoWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Int32 maxSplitNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSplit_b__0(::System::Int32 splitNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS74_0__ONCLICKSPLIT_B__0_OFFSET))(this, splitNum);
		}

		::System::Void _OnClickSplit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS74_0__ONCLICKSPLIT_B__1_OFFSET))(this);
		}
	};
}
