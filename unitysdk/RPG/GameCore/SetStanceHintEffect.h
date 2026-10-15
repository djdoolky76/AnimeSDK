#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetStanceHintEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSTANCEHINTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC2EC0)
#define RPG_GAMECORE_SETSTANCEHINTEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC2F00)
#define RPG_GAMECORE_SETSTANCEHINTEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC2E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStanceHintEffect_TypeDefinitionIndex = 23657;

	class SetStanceHintEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsActive; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* PrefabPath; // 0x28
		::System::String* BossPrefabPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCEHINTEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStanceHintEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStanceHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCEHINTEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStanceHintEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStanceHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCEHINTEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
