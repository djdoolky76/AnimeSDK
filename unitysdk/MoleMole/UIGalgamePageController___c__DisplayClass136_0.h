#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199B7330)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__PLAYNOAVATARSTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0x199B7340)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__PLAYNOAVATARSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x199B7390)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__PLAYNOAVATARSTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0x199B73F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__PLAYNOAVATARSTORYNODE_B__3_OFFSET UNITYSDK_OFFSET(0x199B7370)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass136_0_TypeDefinitionIndex = 44818;

	class UIGalgamePageController___c__DisplayClass136_0 : public ::System::Object
	{
	public:
		::System::String* avatarName; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__PLAYNOAVATARSTORYNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__PLAYNOAVATARSTORYNODE_B__3_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__PLAYNOAVATARSTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_0__PLAYNOAVATARSTORYNODE_B__2_OFFSET))(this);
		}
	};
}
