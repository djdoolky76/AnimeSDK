#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPropParameter.h"
#include "unitysdk/RPG/GameCore/TimeRewindObjectCameraMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPropTimeRewindParameter; }

#define RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79D7F0)
#define RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D79D800)
#define RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D79DE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropTimeRewindParameter_TypeDefinitionIndex = 17254;

	class LevelPropTimeRewindParameter : public ::RPG::GameCore::LevelPropParameter
	{
	public:
		::RPG::GameCore::TimeRewindObjectCameraMode Mode; // 0x10
		::System::UInt32 CameraAnchorID; // 0x14
		::System::UInt32 ResetPlayerAnchorID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropTimeRewindParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropTimeRewindParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropTimeRewindParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropTimeRewindParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
