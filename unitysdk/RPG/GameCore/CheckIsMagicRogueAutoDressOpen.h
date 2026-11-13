#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckIsMagicRogueAutoDressOpen; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F34F6A0)
#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F34F6B0)
#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F34F670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckIsMagicRogueAutoDressOpen_TypeDefinitionIndex = 24750;

	class CheckIsMagicRogueAutoDressOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnOpen; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnClose; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
