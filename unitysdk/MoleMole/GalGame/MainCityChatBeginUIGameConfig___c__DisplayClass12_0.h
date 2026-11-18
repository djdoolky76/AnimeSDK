#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNOMJDLHAOD;
namespace MoleMole::GalGame { class MainCityChatBeginUIGameConfig; }
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x130DADC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_0__ONOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x130DADD0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_0__ONOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x130DAF70)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBeginUIGameConfig___c__DisplayClass12_0_TypeDefinitionIndex = 60880;

	class MainCityChatBeginUIGameConfig___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose; // 0x18
		::HNOMJDLHAOD* node; // 0x20
		::MoleMole::GalGame::MainCityChatBeginUIGameConfig* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpen_b__0(::System::Boolean success, ::System::Int32 _, ::System::Action* onFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_0__ONOPEN_B__0_OFFSET))(this, success, _, onFadeOut);
		}

		::System::Void _OnOpen_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_0__ONOPEN_B__2_OFFSET))(this);
		}
	};
}
