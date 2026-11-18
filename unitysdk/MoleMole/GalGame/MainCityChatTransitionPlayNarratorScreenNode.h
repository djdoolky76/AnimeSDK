#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEBMDOOMAHD.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONPLAYNARRATORSCREENNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1466C300)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONPLAYNARRATORSCREENNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1466C2F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionPlayNarratorScreenNode_TypeDefinitionIndex = 59818;

	class MainCityChatTransitionPlayNarratorScreenNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* DialogueKey; // 0x18
		::System::Int32 DialogueDelay; // 0x20
		::GEBMDOOMAHD NarratorType; // 0x24
		::System::String* ImgBgPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONPLAYNARRATORSCREENNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONPLAYNARRATORSCREENNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
