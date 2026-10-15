#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarIntensityEffect; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_AVATARINTENSITYEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D417CF0)
#define RPG_GAMECORE_AVATARINTENSITYEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D417D00)
#define RPG_GAMECORE_AVATARINTENSITYEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D417CC0)

namespace RPG::GameCore
{
	class AvatarIntensityEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TargetIntensity; // 0x20
		::System::Single FadeDuration; // 0x24
		::System::Boolean IsSyncGlobalMainIntensity; // 0x28
		::System::Boolean IsGlobalMainIntensityEnable; // 0x29
		::System::Boolean Reset; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINTENSITYEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarIntensityEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarIntensityEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINTENSITYEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarIntensityEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarIntensityEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINTENSITYEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
