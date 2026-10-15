#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraNoiseChange; }
namespace RPG::GameCore { class VCameraNormalConfig; }
namespace System { class Object; }

#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D544650)
#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D544480)

namespace RPG::GameCore
{
	class CRPVirtualCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* OverrideAimTargetType; // 0x10
		::RPG::GameCore::TargetEvaluator* OverrideAnchorTargetType; // 0x18
		::RPG::GameCore::VCameraNormalConfig* NormalConfig; // 0x20
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x28
		::RPG::GameCore::VCameraNoiseChange* NoiseConfig; // 0x30
		::System::Single StartTime; // 0x38
		::System::Byte _padding0[0x4];
		::System::Object* OverrideAimTarget; // 0x40
		::System::Object* OverrideAnchorTarget; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CRPVirtualCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CRPVirtualCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
