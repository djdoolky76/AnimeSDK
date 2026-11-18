#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EGOPHPIBPJJ;
class GEILNPBJMFF;
namespace System { class String; }

#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18077EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelUnlockRowWidgetController_Context_TypeDefinitionIndex = 54490;

	class UICoopLevelUnlockRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EGOPHPIBPJJ* QuestTemplate; // 0x28
		::GEILNPBJMFF* CoopQuestTemplate; // 0x30
		::System::String* TextKey; // 0x38
		::System::Boolean ShowNormal; // 0x40
		::System::Boolean ShowChallenge; // 0x41
		::System::Boolean ShowStudy; // 0x42
		::System::Boolean ShowNightmare; // 0x43

		::System::Void _ctor(::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, questId);
		}
	};
}
