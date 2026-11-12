#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAKPPPHIOCN_DeformMode.h"
#include "unitysdk/OAKPPPHIOCN_ModuleCustomData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IRI_DeformModuleCustomData;
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_CLIILIMFMHK_OFFSET UNITYSDK_OFFSET(0x11FE0)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x11FF0)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_DEFORMMODE_OFFSET UNITYSDK_OFFSET(0x11FD0)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MAT_OFFSET UNITYSDK_OFFSET(0x11F30)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MESH_OFFSET UNITYSDK_OFFSET(0x11F20)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULEBOUNDS_OFFSET UNITYSDK_OFFSET(0x11FB0)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULESIZE_OFFSET UNITYSDK_OFFSET(0x11F90)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_SET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x12010)

inline static constexpr unsigned int IRI_DeformModuleCustomData_IRI_DataPerObject_TypeDefinitionIndex = 48202;

	struct alignas(8) IRI_DeformModuleCustomData_IRI_DataPerObject
	{
		::UnityEngine::MeshRenderer* Target; // 0x10
		::OAKPPPHIOCN_ModuleCustomData ModuleCustomData; // 0x18
		::IRI_DeformModuleCustomData* Parent; // 0x90
		::UnityEngine::Mesh* get_Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::Material* get_Mat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MAT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_ModuleSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULESIZE_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ModuleBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULEBOUNDS_OFFSET))(this);
		}

		::OAKPPPHIOCN_DeformMode get_DeformMode()
		{
			return ((::OAKPPPHIOCN_DeformMode(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_DEFORMMODE_OFFSET))(this);
		}

		::System::Void CLIILIMFMHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_CLIILIMFMHK_OFFSET))(this);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void set_Bounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_SET_BOUNDS_OFFSET))(this, a1);
		}

	};
