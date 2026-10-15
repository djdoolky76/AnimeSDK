#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingAISmoothConfig; }

#define RPG_GAMECORE_CHENLINGAISMOOTHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D550360)
#define RPG_GAMECORE_CHENLINGAISMOOTHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5500F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingAISmoothConfig_TypeDefinitionIndex = 15697;

	class ChenLingAISmoothConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MinVelocityThreshold; // 0x10
		::System::Single VelocitySmoothness; // 0x14
		::System::Single RotationSmoothness; // 0x18
		::System::Single MaxAngularSpeed; // 0x1C
		::System::Single AlignmentRadius; // 0x20
		::System::Single SeparationRadius; // 0x24
		::System::Single ArriveSlowingDistance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAISMOOTHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingAISmoothConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingAISmoothConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAISMOOTHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
