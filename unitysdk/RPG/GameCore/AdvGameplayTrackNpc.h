#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvGameplayTrackNpc; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PerceiveValueTriggerConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TrackNpcZoneConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A03F0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A04E0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A03B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpc_TypeDefinitionIndex = 22184;

	class AdvGameplayTrackNpc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean HighLightNpc; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single MaxPerceiveValue; // 0x24
		::System::Single MaxAlertValue; // 0x28
		::System::Single MaxTrackValue; // 0x2C
		::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* ZoneConfigs; // 0x30
		::Il2CppArray<::System::String*>* Visions; // 0x38
		::Il2CppArray<::System::String*>* CheckVisionPoints; // 0x40
		::System::Single CheckVisionRadius; // 0x48
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::PerceiveValueTriggerConfig*>* PerceiveValueTriggers; // 0x50
		::RPG::GameCore::DynamicFloat* LeaveAlertTime; // 0x58
		::RPG::GameCore::DynamicFloat* FailAlertValue; // 0x60
		::RPG::GameCore::DynamicFloat* FailLoseTargetTime; // 0x68
		::RPG::GameCore::DynamicString* FoundFailString; // 0x70
		::RPG::GameCore::DynamicString* LoseTargetFailString; // 0x78
		::System::String* StartTrackAIEvent; // 0x80
		::System::String* ResetTrackAIEvent; // 0x88
		::System::String* EndTrackAIEvent; // 0x90
		::System::Boolean ShowDebugInfo; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
