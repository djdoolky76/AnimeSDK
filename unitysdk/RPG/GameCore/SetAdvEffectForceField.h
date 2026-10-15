#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAdvEffectForceField; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETADVEFFECTFORCEFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA933A0)
#define RPG_GAMECORE_SETADVEFFECTFORCEFIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA933B0)
#define RPG_GAMECORE_SETADVEFFECTFORCEFIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93370)

namespace RPG::GameCore
{
	class SetAdvEffectForceField : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* EmitterTargetType; // 0x18
		::System::String* EmitterConfigName; // 0x20
		::RPG::GameCore::TargetEvaluator* ForceFieldTargetType; // 0x28
		::System::String* ForceFieldConfigName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTFORCEFIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvEffectForceField* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvEffectForceField*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTFORCEFIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvEffectForceField* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvEffectForceField*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTFORCEFIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
