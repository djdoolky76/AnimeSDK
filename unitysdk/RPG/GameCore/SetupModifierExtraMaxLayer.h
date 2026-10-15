#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetupModifierExtraMaxLayer; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACDA90)
#define RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACDAA0)
#define RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACDA60)

namespace RPG::GameCore
{
	class SetupModifierExtraMaxLayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsCancel; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* FromTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* ToTargetType; // 0x30
		::RPG::GameCore::TargetEvaluator* SpecifiedModifierSource; // 0x38
		::RPG::GameCore::DynamicFloat* ExtraMaxLayer; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupModifierExtraMaxLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupModifierExtraMaxLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupModifierExtraMaxLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupModifierExtraMaxLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
