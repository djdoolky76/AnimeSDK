#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57BE30)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E57B890)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicMesh_Split_TypeDefinitionIndex = 46885;

	class AlembicMesh_Split : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* host; // 0x10
		::UnityEngine::Mesh* mesh; // 0x18
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> uv0; // 0x20
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> normals; // 0x30
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Color> rgb; // 0x40
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> tangents; // 0x50
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> points; // 0x60
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> uv1; // 0x70
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> velocities; // 0x80
		::System::Byte _padding6[0x8];
		::UnityEngine::Vector3 size; // 0x90
		::System::Boolean disposed; // 0x9C
		::System::Boolean velocitiesSet; // 0x9D
		::System::Boolean active; // 0x9E
		::System::Byte _padding7[0x1];
		::UnityEngine::Vector3 center; // 0xA0
		::System::Byte _padding8[0x4];
		::Unity::Collections::NativeArray_1<::UnityEngine::Color> rgba; // 0xB0
		::System::Byte _padding9[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> zeroVelocities; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT_DISPOSE_OFFSET))(this);
		}

	};
}
