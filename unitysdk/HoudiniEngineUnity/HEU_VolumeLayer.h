#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class HEU_DetailPrototype; }
namespace HoudiniEngineUnity { class HEU_PartData; }
namespace HoudiniEngineUnity { class HEU_VolumeLayer; }
namespace System { class String; }
namespace UnityEngine { class TerrainLayer; }

#define HOUDINIENGINEUNITY_HEU_VOLUMELAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1B99A740)
#define HOUDINIENGINEUNITY_HEU_VOLUMELAYER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B99E9E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_VolumeLayer_TypeDefinitionIndex = 40770;

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
		::HoudiniEngineUnity::HFLayerType _layerType; // 0x38
		::System::Byte _padding2[0x4];
		::HoudiniEngineUnity::HEU_DetailPrototype* _detailPrototype; // 0x40
		::HoudiniEngineUnity::HEU_PartData* _part; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMELAYER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeLayer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_VolumeLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMELAYER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
