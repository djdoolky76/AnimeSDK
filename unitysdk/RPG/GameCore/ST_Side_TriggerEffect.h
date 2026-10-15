#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_TriggerEffect; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA872F0)
#define RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA87310)
#define RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA872A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_TriggerEffect_TypeDefinitionIndex = 20147;

	class ST_Side_TriggerEffect : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean TriggerOnEnter; // 0x18
		::System::Boolean TriggerOnExit; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* EffectPath; // 0x20
		::System::String* AttachPoint; // 0x28
		::RPG::MVector3 PositionOffset; // 0x30
		::RPG::MVector3 RotationOffset; // 0x3C
		::RPG::MVector3 Scale; // 0x48
		::System::Single Delay; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_TriggerEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_TriggerEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGEREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
