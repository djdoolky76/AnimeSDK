#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LensGlitchEffect; }

#define RPG_GAMECORE_LENSGLITCHEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A3D90)
#define RPG_GAMECORE_LENSGLITCHEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A3DC0)
#define RPG_GAMECORE_LENSGLITCHEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A3D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LensGlitchEffect_TypeDefinitionIndex = 22394;

	class LensGlitchEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Boolean IsAttachMazeMainPage; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::MVector2 RainDropTilling; // 0x1C
		::System::Single RainDropVelocity; // 0x24
		::System::Single RainDropCount; // 0x28
		::System::Single RainDropStrength; // 0x2C
		::RPG::MVector2 RainMaskCenter; // 0x30
		::System::Single RainMaskRadius; // 0x38
		::System::Single RainMaskBlur; // 0x3C
		::System::Single StartRainDropCount; // 0x40
		::System::Single StartRainDropVelocity; // 0x44
		::System::Single FadeDuration; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSGLITCHEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LensGlitchEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LensGlitchEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSGLITCHEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LensGlitchEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LensGlitchEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSGLITCHEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
