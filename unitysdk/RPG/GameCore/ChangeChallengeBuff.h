#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeChallengeBuff; }

#define RPG_GAMECORE_CHANGECHALLENGEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D536810)
#define RPG_GAMECORE_CHANGECHALLENGEBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D536820)
#define RPG_GAMECORE_CHANGECHALLENGEBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5367E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeChallengeBuff_TypeDefinitionIndex = 20476;

	class ChangeChallengeBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHALLENGEBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeChallengeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeChallengeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHALLENGEBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeChallengeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeChallengeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHALLENGEBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
