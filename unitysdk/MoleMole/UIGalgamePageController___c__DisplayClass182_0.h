#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1803D5E0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__0_OFFSET UNITYSDK_OFFSET(0x1803D5F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__12_OFFSET UNITYSDK_OFFSET(0x1803DD30)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__1_OFFSET UNITYSDK_OFFSET(0x1803D880)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__2_OFFSET UNITYSDK_OFFSET(0x1803D9D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__3_OFFSET UNITYSDK_OFFSET(0x1803D860)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__4_OFFSET UNITYSDK_OFFSET(0x1803DA50)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__5_OFFSET UNITYSDK_OFFSET(0x1803DAB0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__6_OFFSET UNITYSDK_OFFSET(0x1803DBE0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__7_OFFSET UNITYSDK_OFFSET(0x1803DCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass182_0_TypeDefinitionIndex = 44805;

	class UIGalgamePageController___c__DisplayClass182_0 : public ::System::Object
	{
	public:
		::System::String* voiceKey; // 0x10
		::LGINJIKKBJA* SwitchSceneNarratorButton; // 0x18
		::UnityEngine::Transform* switchSceneTextPanel; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItemList; // 0x28
		::UnityEngine::GameObject* currSwitchSceneNodeRoot; // 0x30
		::MoleMole::UIGalgamePageController* __4__this; // 0x38
		::UnityEngine::Animation* switchSceneAnimation; // 0x40
		::System::Action* onReadyClosePrevSwitchSceneNode; // 0x48
		::System::Boolean isTypeWritter; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__0_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__3_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__1_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__2_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__4_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__5_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__6_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__7_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_0__PLAYSWITCHSCENENODE_INNER_B__12_OFFSET))(this);
		}
	};
}
