#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongGridIndex; }
namespace RPG::GameCore { class PingPongTransformCmptConfig; }

#define RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EB3D0)
#define RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8EB3E0)
#define RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EB380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongTransformCmptConfig_TypeDefinitionIndex = 18932;

	class PingPongTransformCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::PingPongGridIndex* GridIndex; // 0x10
		::System::Single Angle; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongTransformCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongTransformCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongTransformCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongTransformCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGTRANSFORMCMPTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
