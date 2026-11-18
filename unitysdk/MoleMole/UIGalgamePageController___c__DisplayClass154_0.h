#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFPCPPDJOJ;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS154_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1893BBF0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS154_0__PLAYSUBSTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0x1893BDC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS154_0__PLAYSUBSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x1893BC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass154_0_TypeDefinitionIndex = 44808;

	class UIGalgamePageController___c__DisplayClass154_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x10
		::CAFPCPPDJOJ* avatarSetting; // 0x18
		::System::String* facialKey; // 0x20
		::MoleMole::UIGalgamePageController* __4__this; // 0x28
		::System::String* poseKey; // 0x30
		::System::Int32 locationKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS154_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS154_0__PLAYSUBSTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS154_0__PLAYSUBSTORYNODE_B__0_OFFSET))(this);
		}
	};
}
