#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class BranchItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x16247110)
#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x162470D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatConditionNode_TypeDefinitionIndex = 69455;

	class MainCityChatConditionNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		// static const ::System::String* GENDER_COND; // 0x0
		// static const ::System::String* PARTNER_LEVEL_COND; // 0x0
		// static const ::System::String* Check_Resource_Title; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>* conditionList; // 0x18
		::System::String* conditionKey; // 0x20
		::System::Int32 intParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
