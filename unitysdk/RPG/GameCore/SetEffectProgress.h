#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetEffectProgress; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETEFFECTPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA81B70)
#define RPG_GAMECORE_SETEFFECTPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA81B80)
#define RPG_GAMECORE_SETEFFECTPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA81B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectProgress_TypeDefinitionIndex = 23749;

	class SetEffectProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FormatString UniqueEffectName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* Progress; // 0x28
		::RPG::GameCore::DynamicFloat* TransitionDuration; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
