#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAKPPPHIOCN_ModuleCustomData.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define OAKPPPHIOCN_MODULEDATA_GET_MAT_OFFSET UNITYSDK_OFFSET(0x22A30)
#define OAKPPPHIOCN_MODULEDATA_GET_MESH_OFFSET UNITYSDK_OFFSET(0x22A00)
#define OAKPPPHIOCN_MODULEDATA_GET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x22A10)
#define OAKPPPHIOCN_MODULEDATA_GGHBHGIICEF_OFFSET UNITYSDK_OFFSET(0x22A40)
#define OAKPPPHIOCN_MODULEDATA_SET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x22A20)

inline static constexpr unsigned int OAKPPPHIOCN_ModuleData_TypeDefinitionIndex = 48867;

	struct alignas(8) OAKPPPHIOCN_ModuleData
	{
		::UnityEngine::GameObject* TargetModule; // 0x10
		::UnityEngine::Vector3 ModuleSize; // 0x18
		::OAKPPPHIOCN_ModuleCustomData ModuleCustomData; // 0x24
		::System::Boolean IfNeedStartModule; // 0x9C
		::System::Byte _padding0[0x3];
		::UnityEngine::GameObject* StartModule; // 0xA0
		::System::Boolean IfNeedEndModule; // 0xA8
		::System::Byte _padding1[0x7];
		::UnityEngine::GameObject* EndModule; // 0xB0
		::System::Int32 _SubMeshIndex_k__BackingField; // 0xB8
		::UnityEngine::Mesh* get_Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_MODULEDATA_GET_MESH_OFFSET))(this);
		}

		::System::Int32 get_SubMeshIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_MODULEDATA_GET_SUBMESHINDEX_OFFSET))(this);
		}

		::System::Void set_SubMeshIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_MODULEDATA_SET_SUBMESHINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_Mat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_MODULEDATA_GET_MAT_OFFSET))(this);
		}

		::System::Void GGHBHGIICEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_MODULEDATA_GGHBHGIICEF_OFFSET))(this);
		}

	};
