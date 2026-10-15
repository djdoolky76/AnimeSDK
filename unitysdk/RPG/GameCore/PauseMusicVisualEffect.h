#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MusicVisualizeSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PauseMusicVisualEffect; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C5600)
#define RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C5630)
#define RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C55B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseMusicVisualEffect_TypeDefinitionIndex = 22311;

	class PauseMusicVisualEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MusicVisualizeSourceType SourceType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseMusicVisualEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseMusicVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseMusicVisualEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseMusicVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEMUSICVISUALEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
