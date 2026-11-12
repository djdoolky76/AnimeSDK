#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetBattleBGMToStage; }
namespace System { class String; }

#define RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA29E0)
#define RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBA29F0)
#define RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBA29B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetBattleBGMToStage_TypeDefinitionIndex = 23394;

	class ResetBattleBGMToStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* ResetStateNames; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetBattleBGMToStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetBattleBGMToStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetBattleBGMToStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetBattleBGMToStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
