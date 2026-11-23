#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/EF81676FE3497764.h"
#include "unitysdk/System/Object.h"

class FE5598090317A784;
namespace HoudiniEngineUnity { class HEU_PartData; }
namespace System { class String; }
namespace UnityEngine { class TerrainLayer; }

#define HOUDINIENGINEUNITY_HEU_VOLUMELAYER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x38657F0)
#define HOUDINIENGINEUNITY_HEU_VOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x289FA50)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_VolumeLayer_TypeDefinitionIndex = 17978;

	class HEU_VolumeLayer : public ::System::Object
	{
	public:
		::System::String* _layerName; // 0x10
		::System::Single _strength; // 0x18
		::System::Boolean _uiExpanded; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 _tile; // 0x20
		::System::Int32 _xLength; // 0x24
		::System::Int32 _yLength; // 0x28
		::System::Boolean _hasLayerAttributes; // 0x2C
		::System::Byte _padding1[0x3];
		::UnityEngine::TerrainLayer* _terrainLayer; // 0x30
		::FA78B0257AA80CDE::EF81676FE3497764 _layerType; // 0x38
		::System::Byte _padding2[0x4];
		::FE5598090317A784* _detailPrototype; // 0x40
		::HoudiniEngineUnity::HEU_PartData* _part; // 0x48

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeLayer* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_VolumeLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMELAYER_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
