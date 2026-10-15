#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/VersusBarQuestStatus.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NotifyVersusBarQuestChange; }

#define RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DB370)
#define RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DB380)
#define RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DB340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyVersusBarQuestChange_TypeDefinitionIndex = 23148;

	class NotifyVersusBarQuestChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::VersusBarQuestStatus NewStatus; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID QuestTipText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyVersusBarQuestChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyVersusBarQuestChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyVersusBarQuestChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyVersusBarQuestChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYVERSUSBARQUESTCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
