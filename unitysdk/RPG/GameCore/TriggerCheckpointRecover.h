#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TriggerCheckpointRecover; }

#define RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC44F40)
#define RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC44F50)
#define RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC44F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCheckpointRecover_TypeDefinitionIndex = 20455;

	class TriggerCheckpointRecover : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* PropID; // 0x20
		::System::Boolean TargetIsOwner; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCheckpointRecover* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCheckpointRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCheckpointRecover* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCheckpointRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCHECKPOINTRECOVER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
