#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILKICKDDECB;
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC5A50)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_0__PLAYCHANGETRACKTIPSFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x18FC5A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass148_0_TypeDefinitionIndex = 71123;

	class UIMissionTipsRowWidgetController___c__DisplayClass148_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* tipAni; // 0x10
		::ILKICKDDECB* animResetHelper; // 0x18
		::System::Action* callback; // 0x20
		::MoleMole::UIMissionTipsRowWidgetController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayChangeTrackTipsFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_0__PLAYCHANGETRACKTIPSFADEOUT_B__0_OFFSET))(this);
		}
	};
}
