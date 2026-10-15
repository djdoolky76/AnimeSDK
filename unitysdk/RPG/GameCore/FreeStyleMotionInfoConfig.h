#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }

#define RPG_GAMECORE_FREESTYLEMOTIONINFOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4770)
#define RPG_GAMECORE_FREESTYLEMOTIONINFOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F4620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleMotionInfoConfig_TypeDefinitionIndex = 16302;

	class FreeStyleMotionInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MotionID; // 0x10
		::System::Single ExitTime; // 0x14
		::System::Single TransitionDuration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONINFOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleMotionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONINFOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
