#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class VolumeCloudOptVolumeMonoPlugin; }
namespace RPG::CustomRP { class VolumetricCloudLayer; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xEF18470)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEF18120)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xEF17D80)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_GHDILMPKAEA_OFFSET UNITYSDK_OFFSET(0xEF17BA0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_JMMMDANKFLP_OFFSET UNITYSDK_OFFSET(0xEF17DC0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEF18180)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xEF18210)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeCloudOptVolumeBehavior_TypeDefinitionIndex = 72816;

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
