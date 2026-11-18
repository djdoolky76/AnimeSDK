#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x104255A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10425510)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatChangeActorsNode_TypeDefinitionIndex = 79662;

	class MainCityChatChangeActorsNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* Params; // 0x18
		::System::String* TransformKey; // 0x20
		::System::UInt32 CameraY; // 0x28
		::System::Boolean ResetCamera; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 TargetTag; // 0x30
		::System::UInt32 CameraX; // 0x34
		::System::Int32 TransitionID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
