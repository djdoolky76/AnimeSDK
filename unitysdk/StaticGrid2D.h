#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/System/Nullable_1.h"

#define STATICGRID2D_CALCULATEGRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1BA008B0)
#define STATICGRID2D_CHECKIFSORTED_OFFSET UNITYSDK_OFFSET(0x1BA00760)
#define STATICGRID2D_GET_COLS_OFFSET UNITYSDK_OFFSET(0x1BA005E0)
#define STATICGRID2D_GET_GRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1BA00600)
#define STATICGRID2D_GET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x1BA00630)
#define STATICGRID2D_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1BA005A0)
#define STATICGRID2D_GET_ROWS_OFFSET UNITYSDK_OFFSET(0x1BA005C0)
#define STATICGRID2D_SET_COLS_OFFSET UNITYSDK_OFFSET(0x1BA005F0)
#define STATICGRID2D_SET_GRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1BA00620)
#define STATICGRID2D_SET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x1BA00640)
#define STATICGRID2D_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x1BA005B0)
#define STATICGRID2D_SET_ROWS_OFFSET UNITYSDK_OFFSET(0x1BA005D0)
#define STATICGRID2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA00650)

inline static constexpr unsigned int StaticGrid2D_TypeDefinitionIndex = 70391;

class StaticGrid2D : public ::System::Object
{
public:
	::System::Object* _Points_k__BackingField; // 0x10
	::System::Boolean _IsSorted_k__BackingField; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 _Cols_k__BackingField; // 0x1C
	::System::Int32 _Rows_k__BackingField; // 0x20
	::UnityEngine::Bounds _GridBounds_k__BackingField; // 0x24

	::System::Void _ctor(::System::Object* points, ::System::Nullable_1<::UnityEngine::Bounds> bounds, ::System::Boolean assureSorted)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Nullable_1<::UnityEngine::Bounds>, ::System::Boolean))((::PBYTE)hIl2Cpp + STATICGRID2D__CTOR_OFFSET))(this, points, bounds, assureSorted);
	}

	::System::Object* get_Points()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_POINTS_OFFSET))(this);
	}

	::System::Void set_Points(::System::Object* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_POINTS_OFFSET))(this, value);
	}

	::System::Int32 get_Rows()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_ROWS_OFFSET))(this);
	}

	::System::Void set_Rows(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_ROWS_OFFSET))(this, value);
	}

	::System::Int32 get_Cols()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_COLS_OFFSET))(this);
	}

	::System::Void set_Cols(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_COLS_OFFSET))(this, value);
	}

	::UnityEngine::Bounds get_GridBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_GRIDBOUNDS_OFFSET))(this);
	}

	::System::Void set_GridBounds(::UnityEngine::Bounds value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_GRIDBOUNDS_OFFSET))(this, value);
	}

	::System::Boolean get_IsSorted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_GET_ISSORTED_OFFSET))(this);
	}

	::System::Void set_IsSorted(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATICGRID2D_SET_ISSORTED_OFFSET))(this, value);
	}

	::System::Boolean CheckIfSorted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_CHECKIFSORTED_OFFSET))(this);
	}

	::UnityEngine::Bounds CalculateGridBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGRID2D_CALCULATEGRIDBOUNDS_OFFSET))(this);
	}
};
