#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x126C3240)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 41585;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _maskTexturePath; // 0x10
		::System::String* _layerPath; // 0x18
		::System::String* _normalTexturePath; // 0x20
		::System::String* _layerName; // 0x28
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x30
		::System::String* _diffuseTexturePath; // 0x38
		::System::Int32 _heightMapWidth; // 0x40
		::UnityEngine::Vector3 _minBounds; // 0x44
		::UnityEngine::Vector2 _tileSize; // 0x50
		::System::Int32 _heightMapHeight; // 0x58
		::System::Single _metallic; // 0x5C
		::UnityEngine::Vector3 _center; // 0x60
		::System::Single _maxHeight; // 0x6C
		::System::Single _terrainSizeY; // 0x70
		::UnityEngine::Vector3 _maxBounds; // 0x74
		::System::Single _smoothness; // 0x80
		::System::Single _minHeight; // 0x84
		::System::Int32 _partID; // 0x88
		::UnityEngine::Vector2 _tileOffset; // 0x8C
		::System::Boolean _hasLayerAttributes; // 0x94
		::System::Boolean _uiExpanded; // 0x95
		::System::Byte _padding0[0x2];
		::HoudiniEngineUnity::HFLayerType _layerType; // 0x98
		::System::Single _strength; // 0x9C
		::System::Single _heightRange; // 0xA0
		::UnityEngine::Color _specularColor; // 0xA4
		::UnityEngine::Vector3 _position; // 0xB4
		::System::Int32 _tile; // 0xC0
		::System::Single _terrainSizeX; // 0xC4
		::System::Single _normalScale; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER_CTOR_OFFSET))(this);
		}

	};
}
