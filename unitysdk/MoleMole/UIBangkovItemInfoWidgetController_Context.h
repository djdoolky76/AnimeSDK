#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoScenario.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DPBAPDMEIBK;
class FAKLNMJEGOJ;
class FMHDMLBDIJC;
namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19845100)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovItemInfoWidgetController_Context_TypeDefinitionIndex = 69221;

	class UIBangkovItemInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DPBAPDMEIBK* nestHost; // 0x28
		::FMHDMLBDIJC* bagIndex; // 0x30
		::FAKLNMJEGOJ* specificItem; // 0x38
		::System::Action* onClose; // 0x40
		::System::Int32 itemId; // 0x48
		::System::Boolean isSearchMode; // 0x4C
		::System::Byte _padding0[0x3];
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoScenario scenario; // 0x50
		::System::Int32 itemInfoSlotIndex; // 0x54
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Direction; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
