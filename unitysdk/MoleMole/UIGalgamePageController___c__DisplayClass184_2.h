#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJEECKFGAPL;
class KOMCOFFIFMD;
namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIGalgameTextRowWidgetController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1783E120)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__10_OFFSET UNITYSDK_OFFSET(0x1783F470)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__11_OFFSET UNITYSDK_OFFSET(0x1783E800)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__14_OFFSET UNITYSDK_OFFSET(0x1783EB60)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__5_OFFSET UNITYSDK_OFFSET(0x1783E130)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__6_OFFSET UNITYSDK_OFFSET(0x1783E300)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__7_OFFSET UNITYSDK_OFFSET(0x1783EC20)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__8_OFFSET UNITYSDK_OFFSET(0x1783EEA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__9_OFFSET UNITYSDK_OFFSET(0x1783F070)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass184_2_TypeDefinitionIndex = 44798;

	template <typename T1, typename T2>
	class UIGalgamePageController___c__DisplayClass184_2 : public ::System::Object
	{
	public:
		::KJEECKFGAPL* voicePlayable; // 0x10
		::UnityEngine::UI::Text* text; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x20
		::System::Object* CS___8__locals2; // 0x28
		::System::Action* __9__11; // 0x30
		::MoleMole::UIGalgameTextRowWidgetController* itemController; // 0x38
		::DG::Tweening::TweenCallback* __9__14; // 0x40
		::System::String* talkText; // 0x48
		::KOMCOFFIFMD* textNode; // 0x50
		::System::Single waitPoptextTime; // 0x58
		::System::Single tweenDuration; // 0x5C
		::System::Boolean isFirstNode; // 0x60
		::System::Boolean hasOneShotSound; // 0x61
		::System::Byte _padding0[0x2];
		::System::Int32 tempIndex; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__5_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__6_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__11_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__14_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__7_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__8_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__9_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__10_OFFSET))(this);
		}
	};
}
