#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOMCOFFIFMD;
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16EDC7A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_1__PLAYSWITCHSCENENODE_INNER_B__8_OFFSET UNITYSDK_OFFSET(0x16EDC7B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_1__PLAYSWITCHSCENENODE_INNER_B__9_OFFSET UNITYSDK_OFFSET(0x16EDCB80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass182_1_TypeDefinitionIndex = 44811;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass182_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x10
		::KOMCOFFIFMD* textNode; // 0x18
		::System::String* talkText; // 0x20
		::System::Object* CS___8__locals1; // 0x28
		::System::Boolean hasOneShotSound; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_1__PLAYSWITCHSCENENODE_INNER_B__8_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_1__PLAYSWITCHSCENENODE_INNER_B__9_OFFSET))(this);
		}
	};
}
