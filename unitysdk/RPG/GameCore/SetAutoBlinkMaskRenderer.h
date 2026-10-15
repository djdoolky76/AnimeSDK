#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAutoBlinkMaskRenderer; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA957D0)
#define RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA957E0)
#define RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA957A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAutoBlinkMaskRenderer_TypeDefinitionIndex = 22379;

	class SetAutoBlinkMaskRenderer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* MaskPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAutoBlinkMaskRenderer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAutoBlinkMaskRenderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAutoBlinkMaskRenderer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAutoBlinkMaskRenderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUTOBLINKMASKRENDERER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
