#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYACTIVEDYNAMICOBJECTNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x10424860)
#define MOLEMOLE_GALGAME_MAINCITYACTIVEDYNAMICOBJECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10424850)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityActiveDynamicObjectNode_TypeDefinitionIndex = 69285;

	class MainCityActiveDynamicObjectNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Boolean IsActive; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 DynamicObjectId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYACTIVEDYNAMICOBJECTNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYACTIVEDYNAMICOBJECTNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
