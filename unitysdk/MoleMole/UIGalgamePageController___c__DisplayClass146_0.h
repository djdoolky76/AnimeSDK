#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFPCPPDJOJ;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS146_0__ADDMULTISPEAKERPOSEPLAYABLES_B__0_OFFSET UNITYSDK_OFFSET(0x199B7420)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS146_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199B7410)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass146_0_TypeDefinitionIndex = 44803;

	class UIGalgamePageController___c__DisplayClass146_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x10
		::System::String* facialKey; // 0x18
		::CAFPCPPDJOJ* avatarSetting; // 0x20
		::System::String* poseKey; // 0x28
		::MoleMole::UIGalgamePageController* __4__this; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS146_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddMultiSpeakerPosePlayables_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS146_0__ADDMULTISPEAKERPOSEPLAYABLES_B__0_OFFSET))(this);
		}
	};
}
