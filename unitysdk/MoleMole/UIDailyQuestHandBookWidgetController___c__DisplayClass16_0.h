#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace System { class Action; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB6760)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__PLAYPROGRESSPOINTDONEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x19FB6770)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__PLAYPROGRESSPOINTDONEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x19FB6B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 45272;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDailyQuestHandBookWidgetController* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::System::Action* __9__1; // 0x20
		::KNLFLMMHALL_1<::System::Object*>* progressPoint; // 0x28
		::System::Int32 level; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayProgressPointDoneEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__PLAYPROGRESSPOINTDONEEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayProgressPointDoneEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__PLAYPROGRESSPOINTDONEEFFECT_B__1_OFFSET))(this);
		}
	};
}
