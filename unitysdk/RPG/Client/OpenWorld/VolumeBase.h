#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class String; }

#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_ADGHDKHOMAG_OFFSET UNITYSDK_OFFSET(0xDA0F930)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_1_OFFSET UNITYSDK_OFFSET(0xDA10630)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_2_OFFSET UNITYSDK_OFFSET(0xDA10960)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_OFFSET UNITYSDK_OFFSET(0xDA105B0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA0F880)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_GCBAEEAJNGH_OFFSET UNITYSDK_OFFSET(0xDA0F1D0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_JOKKIBCDDNM_OFFSET UNITYSDK_OFFSET(0xDA116C0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_LBIHMLLGKDG_OFFSET UNITYSDK_OFFSET(0xDA0F890)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_MMDOCMHELNG_OFFSET UNITYSDK_OFFSET(0xDA0F6C0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xDA112B0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_SETREGIONVOLUME_OFFSET UNITYSDK_OFFSET(0xDA10450)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_UPDATEVOLUME_1_OFFSET UNITYSDK_OFFSET(0xDA0E940)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_UPDATEVOLUME_OFFSET UNITYSDK_OFFSET(0xDA0D940)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_WRITEREGIONTOSTAGEVOLUMECONFIGV2_OFFSET UNITYSDK_OFFSET(0xDA0FE50)

namespace RPG::Client::OpenWorld
{
	class VolumeBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::StageVolumeConfigV2* HGHJHAFMFJB; // 0x18
		::System::String* LJJECANBODH; // 0x20
		::UnityEngine::Matrix4x4 HGPFBOLEACI; // 0x28
		::UnityEngine::Matrix4x4 OGDJFPCDAJL; // 0x68
		::RPG::Client::RuntimeRegionVolume* CANMGDCKKGM; // 0xA8
		::System::Int32 Priority; // 0xB0
		::UnityEngine::Vector3 Size; // 0xB4
		::UnityEngine::Bounds LocalBounds; // 0xC0
		::UnityEngine::Bounds WorldBounds; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_CTOR_OFFSET))(this);
		}

		::System::Void UpdateVolume(::RPG::GameCore::StageVolumeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_UPDATEVOLUME_OFFSET))(this, a1);
		}

		::System::Void UpdateVolume_1(::RPG::GameCore::StageVolumeConfigV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfigV2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_UPDATEVOLUME_1_OFFSET))(this, a1);
		}

		::System::Void WriteRegionToStageVolumeConfigV2(::RPG::GameCore::StageVolumeConfigV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfigV2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_WRITEREGIONTOSTAGEVOLUMECONFIGV2_OFFSET))(this, a1);
		}

		::System::Void SetRegionVolume(::RPG::Client::RuntimeRegionVolume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeRegionVolume*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_SETREGIONVOLUME_OFFSET))(this, a1);
		}

		::System::Void ADGHDKHOMAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_ADGHDKHOMAG_OFFSET))(this);
		}

		::UnityEngine::Bounds GCBAEEAJNGH()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_GCBAEEAJNGH_OFFSET))(this);
		}

		::System::Boolean CheckBoundContain(::APLEMBNFLAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_OFFSET))(this, a1);
		}

		::System::Boolean CheckBoundContain_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_1_OFFSET))(this, a1);
		}

		::System::Boolean CheckBoundContain_2(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_2_OFFSET))(this, a1);
		}

		::RPG::Client::RuntimeRegionVolume* MMDOCMHELNG()
		{
			return ((::RPG::Client::RuntimeRegionVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_MMDOCMHELNG_OFFSET))(this);
		}

		::System::Void LBIHMLLGKDG(::RPG::Client::RuntimeRegionVolume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeRegionVolume*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_LBIHMLLGKDG_OFFSET))(this, a1);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void JOKKIBCDDNM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_JOKKIBCDDNM_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
