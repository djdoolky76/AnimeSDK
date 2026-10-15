#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/MapRotationEnergyState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitMapRotationEnergyStateChange; }

#define RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9B6B0)
#define RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9B6C0)
#define RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9B670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMapRotationEnergyStateChange_TypeDefinitionIndex = 20923;

	class WaitMapRotationEnergyStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationEnergyState>* FromStates; // 0x20
		::Il2CppArray<::RPG::GameCore::MapRotationEnergyState>* ToStates; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMapRotationEnergyStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMapRotationEnergyStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMapRotationEnergyStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMapRotationEnergyStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
