#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace RPG::GameCore { class FiveDimCameraObserveConfig; }
namespace RPG::GameCore { class FiveDimDefaultCameraConfig; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }

#define RPG_GAMECORE_FIVEDIMDEFAULTCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68AF00)
#define RPG_GAMECORE_FIVEDIMDEFAULTCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68AD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDefaultCameraConfig_TypeDefinitionIndex = 16671;

	class FiveDimDefaultCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimCameraLensConfig* Lens; // 0x10
		::RPG::GameCore::FiveDimCameraFollowConfig* Follow; // 0x18
		::RPG::GameCore::FiveDimVCameraBlendConfig* DefaultBlend; // 0x20
		::RPG::GameCore::FiveDimVCameraBlendConfig* InBlend; // 0x28
		::RPG::GameCore::FiveDimVCameraBlendConfig* OutBlend; // 0x30
		::RPG::GameCore::FiveDimCameraDOFConfig* DOFConfig; // 0x38
		::RPG::GameCore::FiveDimCameraObserveConfig* ObserveConfig; // 0x40
		::RPG::GameCore::FiveDimCameraObserveConfig* MinimalObserveConfig; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEFAULTCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDefaultCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDefaultCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEFAULTCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
