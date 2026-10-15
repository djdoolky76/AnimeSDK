#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEffectAnimSpeed; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETEFFECTANIMSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA80AD0)
#define RPG_GAMECORE_SETEFFECTANIMSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA80AE0)
#define RPG_GAMECORE_SETEFFECTANIMSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA80AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimSpeed_TypeDefinitionIndex = 22884;

	class SetEffectAnimSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single AnimSpeed; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
