#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphIdentifyDisplayType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SwitchPhotoGraphMode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB44DC0)
#define RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB44DD0)
#define RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB44D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchPhotoGraphMode_TypeDefinitionIndex = 20522;

	class SwitchPhotoGraphMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PhotoGraphModeType PhotoGraphMode; // 0x18
		::System::Boolean ExitWhenPreViewDialogFinish; // 0x1C
		::System::Boolean SkipPhotoPreviewDialog; // 0x1D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::DynamicFloat* IdentifyRadiusOverride; // 0x20
		::System::Single IdentifyMaxExitDistance; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* IdentifyLookAt; // 0x30
		::System::Single InitFov; // 0x38
		::RPG::GameCore::PhotoGraphIdentifyDisplayType IdentifyDisplayType; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchPhotoGraphMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchPhotoGraphMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchPhotoGraphMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchPhotoGraphMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
