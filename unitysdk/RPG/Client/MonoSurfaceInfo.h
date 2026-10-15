#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class TerrianSurfaceInfo; }
namespace System { class String; }

#define RPG_CLIENT_MONOSURFACEINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xD866C40)
#define RPG_CLIENT_MONOSURFACEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD867050)
#define RPG_CLIENT_MONOSURFACEINFO_DHEPLEMPCHP_OFFSET UNITYSDK_OFFSET(0xD867010)
#define RPG_CLIENT_MONOSURFACEINFO_GETSURFACETYPE_OFFSET UNITYSDK_OFFSET(0xD8666C0)
#define RPG_CLIENT_MONOSURFACEINFO_GET_ENABLESEALEVELALTITUDE_OFFSET UNITYSDK_OFFSET(0xD866920)
#define RPG_CLIENT_MONOSURFACEINFO_GET_GETSEALEVELALTITUDE_OFFSET UNITYSDK_OFFSET(0xD8669E0)
#define RPG_CLIENT_MONOSURFACEINFO_GET_SEACOLOR_OFFSET UNITYSDK_OFFSET(0xD866AA0)
#define RPG_CLIENT_MONOSURFACEINFO_LAPAFFMCFAD_OFFSET UNITYSDK_OFFSET(0xD8669D0)
#define RPG_CLIENT_MONOSURFACEINFO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD866F40)
#define RPG_CLIENT_MONOSURFACEINFO_START_OFFSET UNITYSDK_OFFSET(0xD866DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSurfaceInfo_TypeDefinitionIndex = 68870;

	class MonoSurfaceInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean forbidStand; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::SurfaceType surfaceType; // 0x1C
		::System::Boolean forceUseCurrentSurfaceType; // 0x20
		::System::Boolean UseSeaLevelAltitude; // 0x21
		::System::Byte _padding1[0x6];
		::System::String* OMMOKBJDLOM; // 0x28
		::System::Single SeaLevelAltitude; // 0x30
		::System::Byte _padding2[0x4];
		::System::String* BENLBHOLJBA; // 0x38
		::UnityEngine::Color WaterColor; // 0x40
		::System::String* ELJGDBLGJLL; // 0x50
		::System::Boolean useTerrainMask; // 0x58
		::System::Byte _padding3[0x7];
		::System::String* terrainTextureName; // 0x60
		::RPG::Client::TerrianSurfaceInfo* terrainChannelR; // 0x68
		::RPG::Client::TerrianSurfaceInfo* terrainChannelG; // 0x70
		::System::Int32 terrainTextureNameHash; // 0x78
		::System::Byte _padding4[0x4];
		::Il2CppArray<::System::Byte>* BGDJGBNONJO; // 0x80
		::Il2CppArray<::RPG::Client::TerrianSurfaceInfo*>* FANALIANIOJ; // 0x88
		::System::Int32 FBGBGMPOHIE; // 0x90
		// static const ::System::Object EJKLOONDBMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::SurfaceType GetSurfaceType(::System::Int32 a1)
		{
			return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_GETSURFACETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableSeaLevelAltitude()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_GET_ENABLESEALEVELALTITUDE_OFFSET))(this);
		}

		::System::Single get_GetSeaLevelAltitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_GET_GETSEALEVELALTITUDE_OFFSET))(this);
		}

		::UnityEngine::Color get_SeaColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_GET_SEACOLOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean LAPAFFMCFAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_LAPAFFMCFAD_OFFSET))(this);
		}

		::System::Void DHEPLEMPCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_DHEPLEMPCHP_OFFSET))(this);
		}

	};
}
