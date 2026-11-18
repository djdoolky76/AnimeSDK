#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGHKECHINNA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BUDDYCOLLIDER_CALCONTAINSGRIDS_OFFSET UNITYSDK_OFFSET(0x14C5F680)
#define BUDDYCOLLIDER_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x14C5F010)
#define BUDDYCOLLIDER_GET_CONTAINSGRIDLIST_OFFSET UNITYSDK_OFFSET(0x14C5E2B0)
#define BUDDYCOLLIDER_GET_GRIDSCALE_OFFSET UNITYSDK_OFFSET(0x14C5E2D0)
#define BUDDYCOLLIDER_GET_ISCANPUTDOWN_OFFSET UNITYSDK_OFFSET(0x14C5E2E0)
#define BUDDYCOLLIDER_GET_MESH_OFFSET UNITYSDK_OFFSET(0x14C5E290)
#define BUDDYCOLLIDER_GET_RECTS_OFFSET UNITYSDK_OFFSET(0x14C5E270)
#define BUDDYCOLLIDER_ISFULLENCIRCLEMENT_OFFSET UNITYSDK_OFFSET(0x14C5F4A0)
#define BUDDYCOLLIDER_ISINGRIDMAP_OFFSET UNITYSDK_OFFSET(0x14C5F1E0)
#define BUDDYCOLLIDER_REBUILDCOLLIDERMESH_OFFSET UNITYSDK_OFFSET(0x14C5E590)
#define BUDDYCOLLIDER_ROTATE2_OFFSET UNITYSDK_OFFSET(0x14C5EC70)
#define BUDDYCOLLIDER_ROTATEPOINT_OFFSET UNITYSDK_OFFSET(0x14C5EED0)
#define BUDDYCOLLIDER_ROTATE_OFFSET UNITYSDK_OFFSET(0x14C5EAE0)
#define BUDDYCOLLIDER_SETRCTPOSITION_OFFSET UNITYSDK_OFFSET(0x14C5E8D0)
#define BUDDYCOLLIDER_SET_CONTAINSGRIDLIST_OFFSET UNITYSDK_OFFSET(0x14C5E2C0)
#define BUDDYCOLLIDER_SET_ISCANPUTDOWN_OFFSET UNITYSDK_OFFSET(0x14C5E2F0)
#define BUDDYCOLLIDER_SET_MESH_OFFSET UNITYSDK_OFFSET(0x14C5E2A0)
#define BUDDYCOLLIDER_SET_RECTS_OFFSET UNITYSDK_OFFSET(0x14C5E280)
#define BUDDYCOLLIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14C5EA40)
#define BUDDYCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C5E300)

inline static constexpr unsigned int BuddyCollider_TypeDefinitionIndex = 75701;

class BuddyCollider : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* initMesh; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* initLocalPos; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _Mesh_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::GGHKECHINNA>* _Rects_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _ContainsGridList_k__BackingField; // 0x30
	::UnityEngine::Vector2 gridMin; // 0x38
	::UnityEngine::Vector2 Spacing; // 0x40
	::UnityEngine::Vector2 centerOffset; // 0x48
	::UnityEngine::Vector2 outLineSize; // 0x50
	::UnityEngine::Vector2 gridMax; // 0x58
	::GGHKECHINNA outLineRect; // 0x60
	::System::Boolean _IsCanPutDown_k__BackingField; // 0x78
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector2 center; // 0x7C
	::System::Int32 currentAngle; // 0x84
	::System::Int32 gridScale; // 0x88

	::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* mesh, ::System::Int32 gridScale)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER__CTOR_OFFSET))(this, mesh, gridScale);
	}

	::System::Void _ctor_1(::GGHKECHINNA rect)
	{
		return ((::System::Void(*)(::PVOID, ::GGHKECHINNA))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER__CTOR_1_OFFSET))(this, rect);
	}

	::System::Collections::Generic::List_1<::GGHKECHINNA>* get_Rects()
	{
		return ((::System::Collections::Generic::List_1<::GGHKECHINNA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_RECTS_OFFSET))(this);
	}

	::System::Void set_Rects(::System::Collections::Generic::List_1<::GGHKECHINNA>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GGHKECHINNA>*))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SET_RECTS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* get_Mesh()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_MESH_OFFSET))(this);
	}

	::System::Void set_Mesh(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SET_MESH_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* get_ContainsGridList()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_CONTAINSGRIDLIST_OFFSET))(this);
	}

	::System::Void set_ContainsGridList(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SET_CONTAINSGRIDLIST_OFFSET))(this, value);
	}

	::System::Int32 get_GridScale()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_GRIDSCALE_OFFSET))(this);
	}

	::System::Boolean get_IsCanPutDown()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GET_ISCANPUTDOWN_OFFSET))(this);
	}

	::System::Void set_IsCanPutDown(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SET_ISCANPUTDOWN_OFFSET))(this, value);
	}

	::System::Void RebuildColliderMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_REBUILDCOLLIDERMESH_OFFSET))(this);
	}

	::System::Void Rotate(::System::Int32 angle)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ROTATE_OFFSET))(this, angle);
	}

	::System::Void Rotate2(::System::Int32 angle)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ROTATE2_OFFSET))(this, angle);
	}

	::UnityEngine::Vector2 RotatePoint(::UnityEngine::Vector2 pos, ::System::Single angle)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ROTATEPOINT_OFFSET))(this, pos, angle);
	}

	::System::Void SetRctPosition(::UnityEngine::Vector2 screenPosition)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_SETRCTPOSITION_OFFSET))(this, screenPosition);
	}

	::UnityEngine::Vector2 GetLocalPosition(::System::Int32 index)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_GETLOCALPOSITION_OFFSET))(this, index);
	}

	::System::Boolean IsInGridMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ISINGRIDMAP_OFFSET))(this);
	}

	::System::Boolean IsFullEncirclement()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_ISFULLENCIRCLEMENT_OFFSET))(this);
	}

	::System::Void CalContainsGrids()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYCOLLIDER_CALCONTAINSGRIDS_OFFSET))(this);
	}
};
