#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Rendering/Terrain/TerrainGridLoader_NMFJPJEFMGN.h"
namespace RPG::Rendering::Terrain { class TerrainGridData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_AGKPOLAEHLP_OFFSET UNITYSDK_OFFSET(0xE8851C0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_BEGINSTREAMING_OFFSET UNITYSDK_OFFSET(0xE886E90)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_CTOR_OFFSET UNITYSDK_OFFSET(0xE887180)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_DCPINIINIKH_OFFSET UNITYSDK_OFFSET(0xE8870C0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_EOALNCHEIAE_OFFSET UNITYSDK_OFFSET(0xE886D60)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GEMOKCLIGBG_OFFSET UNITYSDK_OFFSET(0xE886BF0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GET_ISSTREAMINGACTIVE_OFFSET UNITYSDK_OFFSET(0xE886E80)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xE886E70)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_LGNMNDBGDPB_OFFSET UNITYSDK_OFFSET(0xE8856F0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_LOADALLBLOCKS_OFFSET UNITYSDK_OFFSET(0xE884990)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_NODKJNMJLIH_OFFSET UNITYSDK_OFFSET(0xE885420)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE885170)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE884930)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_STARTSTREAMINGFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xE886FC0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_STOPSTREAMING_OFFSET UNITYSDK_OFFSET(0xE887070)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE885580)

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainGridLoader_TypeDefinitionIndex = 51801;

	class TerrainGridLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Rendering::Terrain::TerrainGridData* gridData; // 0x18
		::UnityEngine::GameObject* CJLFBMEPOPA; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* CHFNFIPFEON; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OIFHMNNFFIK; // 0x30
		::System::Single terrainLoadRadius; // 0x38
		::System::Single streamCheckThreshold; // 0x3C
		::System::Boolean GFFAGFOJEJE; // 0x40
		::System::Byte _padding0[0x7];
		::RPG::Rendering::Terrain::TerrainGridData* JJGOPAAJJAL; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* GOGEOBGHJJL; // 0x50
		::UnityEngine::Vector3 KOHNBHDKNLM; // 0x58
		::System::Single MMBJHOBPHLB; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_UPDATE_OFFSET))(this);
		}

		::System::Void LoadAllBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_LOADALLBLOCKS_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Root()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GET_ROOT_OFFSET))(this);
		}

		::System::Boolean get_IsStreamingActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GET_ISSTREAMINGACTIVE_OFFSET))(this);
		}

		::System::Void BeginStreaming(::RPG::Rendering::Terrain::TerrainGridData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Rendering::Terrain::TerrainGridData*))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_BEGINSTREAMING_OFFSET))(this, a1);
		}

		::System::Void StartStreamingFromConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_STARTSTREAMINGFROMCONFIG_OFFSET))(this);
		}

		::System::Void StopStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_STOPSTREAMING_OFFSET))(this);
		}

		::System::Void NODKJNMJLIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_NODKJNMJLIH_OFFSET))(this);
		}

		::System::Void LGNMNDBGDPB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_LGNMNDBGDPB_OFFSET))(this, a1);
		}

		::System::Void DCPINIINIKH(::RPG::Rendering::Terrain::TerrainGridLoader_NMFJPJEFMGN a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Rendering::Terrain::TerrainGridLoader_NMFJPJEFMGN))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_DCPINIINIKH_OFFSET))(this, a1);
		}

		static ::System::Void EOALNCHEIAE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_EOALNCHEIAE_OFFSET))(a1);
		}

		static ::System::Void GEMOKCLIGBG(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_GEMOKCLIGBG_OFFSET))(a1);
		}

		::System::Void AGKPOLAEHLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDLOADER_AGKPOLAEHLP_OFFSET))(this);
		}

	};
}
