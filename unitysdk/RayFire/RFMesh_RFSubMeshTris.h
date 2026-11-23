#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RAYFIRE_RFMESH_RFSUBMESHTRIS__CTOR_OFFSET UNITYSDK_OFFSET(0x295BB20)

namespace RayFire
{
	inline static constexpr unsigned int RFMesh_RFSubMeshTris_TypeDefinitionIndex = 15417;

	class RFMesh_RFSubMeshTris : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* triangles; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFMESH_RFSUBMESHTRIS__CTOR_OFFSET))(this);
		}
	};
}
