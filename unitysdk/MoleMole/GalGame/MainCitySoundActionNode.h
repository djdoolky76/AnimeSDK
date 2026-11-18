#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYSOUNDACTIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x14315E60)
#define MOLEMOLE_GALGAME_MAINCITYSOUNDACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14315DD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCitySoundActionNode_TypeDefinitionIndex = 46595;

	class MainCitySoundActionNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SoundActionKeys; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYSOUNDACTIONNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYSOUNDACTIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
