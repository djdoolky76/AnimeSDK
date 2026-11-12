#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/PivotLocation.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder::Shapes { class Shape; }

#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x205320D0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_EDITIONBOUNDS_OFFSET UNITYSDK_OFFSET(0x205311F0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ISEDITABLE_OFFSET UNITYSDK_OFFSET(0x20531290)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_MESH_OFFSET UNITYSDK_OFFSET(0x2051ED70)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTGLOBALPOSITION_OFFSET UNITYSDK_OFFSET(0x20531030)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x20531000)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x20530FE0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x205311D0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPEBOX_OFFSET UNITYSDK_OFFSET(0x20531270)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x20530FC0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x20531140)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x205312C0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILDPIVOT_OFFSET UNITYSDK_OFFSET(0x20531C40)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_1_OFFSET UNITYSDK_OFFSET(0x20531690)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_OFFSET UNITYSDK_OFFSET(0x20531AA0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_RESETPIVOT_OFFSET UNITYSDK_OFFSET(0x20531360)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ROTATEINSIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x20531FE0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SETSHAPE_OFFSET UNITYSDK_OFFSET(0x2051EBA0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTGLOBALPOSITION_OFFSET UNITYSDK_OFFSET(0x205310B0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x20531020)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x20530FF0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x205311E0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x20530FD0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x20531160)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x20531920)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x20531310)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int ProBuilderShape_TypeDefinitionIndex = 45541;

	class ProBuilderShape : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ProBuilder::Shapes::Shape* m_Shape; // 0x18
		::UnityEngine::Vector3 m_Size; // 0x20
		::UnityEngine::Quaternion m_Rotation; // 0x2C
		::System::Byte _padding0[0x4];
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh; // 0x40
		::UnityEngine::ProBuilder::PivotLocation m_PivotLocation; // 0x48
		::UnityEngine::Vector3 m_PivotPosition; // 0x4C
		::System::UInt16 m_UnmodifiedMeshVersion; // 0x58
		::System::Byte _padding1[0x2];
		::UnityEngine::Bounds m_EditionBounds; // 0x5C
		::UnityEngine::Bounds m_ShapeBox; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Shapes::Shape* get_shape()
		{
			return ((::UnityEngine::ProBuilder::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::PivotLocation get_pivotLocation()
		{
			return ((::UnityEngine::ProBuilder::PivotLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Void set_pivotLocation(::UnityEngine::ProBuilder::PivotLocation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_pivotLocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCALPOSITION_OFFSET))(this);
		}

		::System::Void set_pivotLocalPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_pivotGlobalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTGLOBALPOSITION_OFFSET))(this);
		}

		::System::Void set_pivotGlobalPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTGLOBALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_editionBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_EDITIONBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Bounds get_shapeBox()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPEBOX_OFFSET))(this);
		}

		::System::Boolean get_isEditable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ISEDITABLE_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::ProBuilderMesh* get_mesh()
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_MESH_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void UpdateComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATECOMPONENT_OFFSET))(this);
		}

		::System::Void UpdateBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATEBOUNDS_OFFSET))(this, a1);
		}

		::System::Void Rebuild(::UnityEngine::Bounds a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Rebuild_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_1_OFFSET))(this);
		}

		::System::Void SetShape(::UnityEngine::ProBuilder::Shapes::Shape* a1, ::UnityEngine::ProBuilder::PivotLocation a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SETSHAPE_OFFSET))(this, a1, a2);
		}

		::System::Void RotateInsideBounds(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ROTATEINSIDEBOUNDS_OFFSET))(this, a1);
		}

		::System::Void ResetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_RESETPIVOT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RebuildPivot(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILDPIVOT_OFFSET))(this, a1, a2, a3);
		}

	};
}
