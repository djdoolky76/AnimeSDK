#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACDFB0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 41585;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _diffuseTexturePath; // 0x10
		::System::String* _layerName; // 0x18
		::System::String* _maskTexturePath; // 0x20
		::System::String* _normalTexturePath; // 0x28
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x30
		::System::String* _layerPath; // 0x38
		::HoudiniEngineUnity::HFLayerType _layerType; // 0x40
		::UnityEngine::Color _specularColor; // 0x44
		::UnityEngine::Vector2 _tileOffset; // 0x54
		::System::Single _terrainSizeX; // 0x5C
		::System::Int32 _heightMapHeight; // 0x60
		::System::Boolean _uiExpanded; // 0x64
		::System::Boolean _hasLayerAttributes; // 0x65
		::System::Byte _padding0[0x2];
		::System::Single _smoothness; // 0x68
		::System::Single _maxHeight; // 0x6C
		::UnityEngine::Vector3 _minBounds; // 0x70
		::System::Single _strength; // 0x7C
		::System::Int32 _partID; // 0x80
		::System::Int32 _tile; // 0x84
		::UnityEngine::Vector2 _tileSize; // 0x88
		::System::Single _minHeight; // 0x90
		::System::Single _metallic; // 0x94
		::UnityEngine::Vector3 _position; // 0x98
		::System::Int32 _heightMapWidth; // 0xA4
		::UnityEngine::Vector3 _center; // 0xA8
		::UnityEngine::Vector3 _maxBounds; // 0xB4
		::System::Single _heightRange; // 0xC0
		::System::Single _normalScale; // 0xC4
		::System::Single _terrainSizeY; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER_CTOR_OFFSET))(this);
		}

	};
}
