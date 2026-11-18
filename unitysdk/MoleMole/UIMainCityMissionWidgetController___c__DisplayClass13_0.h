#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityMissionWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19618F10)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS13_0__PLAYQUESTTRACKSWITCHANIM_B__0_OFFSET UNITYSDK_OFFSET(0x19618F20)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS13_0__PLAYQUESTTRACKSWITCHANIM_B__1_OFFSET UNITYSDK_OFFSET(0x19619180)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 65736;

	class UIMainCityMissionWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityMissionWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Action* callback; // 0x20
		::System::Boolean playSound; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 questId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayQuestTrackSwitchAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS13_0__PLAYQUESTTRACKSWITCHANIM_B__0_OFFSET))(this);
		}

		::System::Void _PlayQuestTrackSwitchAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS13_0__PLAYQUESTTRACKSWITCHANIM_B__1_OFFSET))(this);
		}
	};
}
