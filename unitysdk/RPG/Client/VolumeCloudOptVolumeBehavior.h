#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class VolumeCloudOptVolumeMonoPlugin; }
namespace RPG::CustomRP { class VolumetricCloudLayer; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE44EB50)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE44E800)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE44E460)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_GHDILMPKAEA_OFFSET UNITYSDK_OFFSET(0xE44E280)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_JMMMDANKFLP_OFFSET UNITYSDK_OFFSET(0xE44E4A0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE44E860)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE44E8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeCloudOptVolumeBehavior_TypeDefinitionIndex = 70837;

	class VolumeCloudOptVolumeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::CustomRP::VolumetricCloudLayer* _CloudLayer; // 0x38
		::UnityEngine::Material* _CloudMat; // 0x40
		::System::Single _OriginDensity; // 0x48
		::System::Byte _padding0[0x4];
		::UnityEngine::Camera* _MainCamera; // 0x50
		::System::Single _FadeDuration; // 0x58
		::System::Int32 _DensityMultiplyID; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void GHDILMPKAEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_GHDILMPKAEA_OFFSET))(this);
		}

		::System::Boolean JMMMDANKFLP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_JMMMDANKFLP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::VolumeCloudOptVolumeMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::VolumeCloudOptVolumeMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
