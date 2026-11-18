#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHIKNHGPAMH;
class ALDOKCCIFNB;
namespace MoleMole { class UILineupSelectContext_BeginBattleDel; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188617E0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS62_0__ONTUTORIALBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x188617F0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS62_0__ONTUTORIALBTNCLICKED_B__1_OFFSET UNITYSDK_OFFSET(0x18861B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c__DisplayClass62_0_TypeDefinitionIndex = 70954;

	class UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectContext_BeginBattleDel* __9__1; // 0x10
		::AHIKNHGPAMH* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTutorialBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS62_0__ONTUTORIALBTNCLICKED_B__0_OFFSET))(this);
		}

		::System::Void _OnTutorialBtnClicked_b__1(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS62_0__ONTUTORIALBTNCLICKED_B__1_OFFSET))(this, data);
		}
	};
}
