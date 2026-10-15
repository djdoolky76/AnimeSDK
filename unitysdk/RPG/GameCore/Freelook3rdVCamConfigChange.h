#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleVCameraFreelook3rdConfigTemplateEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class Freelook3rdVCamConfigChange; }

#define RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F5C60)
#define RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F5C70)
#define RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F5C30)

namespace RPG::GameCore
{
	class Freelook3rdVCamConfigChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SingleVCameraFreelook3rdConfigTemplateEnum Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Freelook3rdVCamConfigChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Freelook3rdVCamConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Freelook3rdVCamConfigChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Freelook3rdVCamConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
