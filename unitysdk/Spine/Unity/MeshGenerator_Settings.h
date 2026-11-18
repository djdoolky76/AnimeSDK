#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_UNITY_MESHGENERATOR_SETTINGS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1F804A90)
#define SPINE_UNITY_MESHGENERATOR_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F80B710)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGenerator_Settings_TypeDefinitionIndex = 38192;

	class MeshGenerator_Settings : public ::System::Object
	{
	public:
		::System::Boolean useClipping; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single zSpacing; // 0x14
		::System::Boolean tintBlack; // 0x18
		::System::Boolean canvasGroupCompatible; // 0x19
		::System::Boolean pmaVertexColors; // 0x1A
		::System::Boolean addNormals; // 0x1B
		::System::Boolean calculateTangents; // 0x1C
		::System::Boolean immutableTriangles; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SETTINGS__CTOR_OFFSET))(this);
		}

		static ::Spine::Unity::MeshGenerator_Settings* get_Default()
		{
			return ((::Spine::Unity::MeshGenerator_Settings*(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SETTINGS_GET_DEFAULT_OFFSET))();
		}
	};
}
