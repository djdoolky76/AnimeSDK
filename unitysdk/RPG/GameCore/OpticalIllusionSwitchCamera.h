#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpticalIllusionSwitchCamera; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B70C0)
#define RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B70F0)
#define RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B7070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionSwitchCamera_TypeDefinitionIndex = 22224;

	class OpticalIllusionSwitchCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Int32 Index; // 0x20
		::System::Boolean Reset; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionSwitchCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionSwitchCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionSwitchCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionSwitchCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
