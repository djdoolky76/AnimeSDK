#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/A3B17C172EC49C40.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Terrain; }

#define TERRAINCHUNKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x27C9250)

inline static constexpr unsigned int TerrainChunkManager_TypeDefinitionIndex = 16679;

class TerrainChunkManager : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Terrain* targetTerrain; // 0x20
	::System::Int32 chunkSize; // 0x28
	::UnityEngine::A3B17C172EC49C40 chunkNum; // 0x2C
	::System::Boolean FEFB08A20627A261; // 0x34
	::System::Boolean isBackUPAuto; // 0x35
	::System::Boolean isBackUPFinal; // 0x36
	::System::Byte _padding0[0x1];
	::UnityEngine::A3B17C172EC49C40 checkoutChunkStart; // 0x38
	::UnityEngine::A3B17C172EC49C40 checkoutChunkSize; // 0x40
	::UnityEngine::E46B881AA2636190 editableRegionColor; // 0x48
	::System::Boolean alwaysShowEditableRegion; // 0x58
	::System::Boolean showRegionName; // 0x59
	::System::Byte _padding1[0x2];
	::UnityEngine::E46B881AA2636190 holesRegionColor; // 0x5C
	::System::Boolean showHolesRegion; // 0x6C
	::System::Byte _padding2[0x3];
	::System::Single holesHeightOffset; // 0x70
	::System::Single backupInterval; // 0x74
	::System::String* backupFolderName; // 0x78
	::System::Single E54848F7AAAAEA09; // 0x80
	::System::Byte _padding3[0x4];
	::System::Action* OnBeforeExport; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERRAINCHUNKMANAGER__CTOR_OFFSET))(this);
	}
};
