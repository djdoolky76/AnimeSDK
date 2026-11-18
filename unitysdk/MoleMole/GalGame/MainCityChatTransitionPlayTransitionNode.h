#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONPLAYTRANSITIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x13EE36B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONPLAYTRANSITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE3570)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionPlayTransitionNode_TypeDefinitionIndex = 64799;

	class MainCityChatTransitionPlayTransitionNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Boolean IsEnd; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 TransitionID; // 0x1C
		::System::String* DialogueKey; // 0x20
		::System::String* soundEvent; // 0x28
		::System::String* TransformKey; // 0x30
		::System::Boolean SetPlayerTransform; // 0x38
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 PlayerPos; // 0x3C
		::UnityEngine::Vector3 PlayerRot; // 0x48
		::System::Boolean SetTagVisible; // 0x54
		::System::Byte _padding2[0x3];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* Params; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>* GroupParams; // 0x60
		::System::Boolean SetDynamicObjectVisible; // 0x68
		::System::Byte _padding3[0x7];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>* DynamicObjectsSubID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONPLAYTRANSITIONNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONPLAYTRANSITIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
