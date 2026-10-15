#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroSetupCameraAxis; }

#define RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA9190)
#define RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA91A0)
#define RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA9160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroSetupCameraAxis_TypeDefinitionIndex = 21586;

	class WolfBroSetupCameraAxis : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Save; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroSetupCameraAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroSetupCameraAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroSetupCameraAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroSetupCameraAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
