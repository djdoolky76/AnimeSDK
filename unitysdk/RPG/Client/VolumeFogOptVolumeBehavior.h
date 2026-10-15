#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class VolumeFogOptVolumeMonoPlugin; }
namespace RPG::CustomRP { class VolumetricFogController; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE45A4D0)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE459C10)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_GHDILMPKAEA_OFFSET UNITYSDK_OFFSET(0xE459A80)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_JMMMDANKFLP_OFFSET UNITYSDK_OFFSET(0xE459C90)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE45A170)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE45A200)

namespace RPG::Client
{
	class VolumeFogOptVolumeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::CustomRP::VolumetricFogController* _FogLayer; // 0x38
		::System::Single _OriginDensity; // 0x40
		::System::Byte _padding0[0x4];
		::UnityEngine::Camera* _MainCamera; // 0x48
		::System::Single _FadeDuration; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void GHDILMPKAEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_GHDILMPKAEA_OFFSET))(this);
		}

		::System::Boolean JMMMDANKFLP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_JMMMDANKFLP_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::VolumeFogOptVolumeMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::VolumeFogOptVolumeMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
