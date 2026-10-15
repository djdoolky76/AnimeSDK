#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAbilityConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesItemAbilityConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55F040)
#define RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55F050)
#define RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D560800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesItemAbilityConfig_TypeDefinitionIndex = 18446;

	class ChenLingFesItemAbilityConfig : public ::RPG::GameCore::ChenLingFesAbilityConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoopTrigger; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDayStart; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDayEnd; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMoveItem; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPutdownItem; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterItem; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnJumpTrigger; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLeaveItem; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterFever; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitFever; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesItemAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesItemAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesItemAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesItemAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
