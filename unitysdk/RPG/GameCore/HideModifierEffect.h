#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideModifierEffect; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_HIDEMODIFIEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73B610)
#define RPG_GAMECORE_HIDEMODIFIEREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73B620)
#define RPG_GAMECORE_HIDEMODIFIEREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73B5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideModifierEffect_TypeDefinitionIndex = 23631;

	class HideModifierEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* EventType; // 0x20
		::System::Boolean IsHide; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* ReplaceEffectName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMODIFIEREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideModifierEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideModifierEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMODIFIEREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideModifierEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideModifierEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMODIFIEREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
