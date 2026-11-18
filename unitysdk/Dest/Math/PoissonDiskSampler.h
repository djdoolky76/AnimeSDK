#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Dest::Math { class PoissonDiskSampler_PointDelegate; }
namespace Dest::Math { class Rand; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEST_MATH_POISSONDISKSAMPLER_ADDPOINT_OFFSET UNITYSDK_OFFSET(0x1FF40630)
#define DEST_MATH_POISSONDISKSAMPLER_CALCGRIDINDICES_OFFSET UNITYSDK_OFFSET(0x1FF40560)
#define DEST_MATH_POISSONDISKSAMPLER_GET_MAXPOINTS_OFFSET UNITYSDK_OFFSET(0x1FF40300)
#define DEST_MATH_POISSONDISKSAMPLER_INSERTINTOGRID_OFFSET UNITYSDK_OFFSET(0x1FF40590)
#define DEST_MATH_POISSONDISKSAMPLER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x1FF40B70)
#define DEST_MATH_POISSONDISKSAMPLER_SET_MAXPOINTS_OFFSET UNITYSDK_OFFSET(0x1FF40310)
#define DEST_MATH_POISSONDISKSAMPLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF40320)
#define DEST_MATH_POISSONDISKSAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF40330)

namespace Dest::Math
{
	inline static constexpr unsigned int PoissonDiskSampler_TypeDefinitionIndex = 35034;

	class PoissonDiskSampler : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_one_div_sqrtTwo()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PoissonDiskSampler_TypeDefinitionIndex)->GetStaticField(0x8AD0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _points; // 0x10
		::Dest::Math::Rand* _rand; // 0x18
		::Dest::Math::PoissonDiskSampler_PointDelegate* DistanceFilter; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _activeList; // 0x28
		::System::Object* _grid; // 0x30
		::System::Single _rSquared; // 0x38
		::System::Single _r; // 0x3C
		::UnityEngine::Vector2 _max; // 0x40
		::System::Int32 _MaxPoints_k__BackingField; // 0x48
		::System::Single _rMin; // 0x4C
		::System::Int32 PointsPerStep; // 0x50
		::UnityEngine::Vector2 _size; // 0x54
		::System::Int32 _cellsY; // 0x5C
		::System::Int32 _cellsX; // 0x60
		::UnityEngine::Vector2 _min; // 0x64
		::System::Single _cellSize; // 0x6C
		::System::Single _rTwo; // 0x70

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Dest::Math::Rand* rand, ::UnityEngine::Vector2 minCorner, ::UnityEngine::Vector2 maxCorner, ::System::Single minDistanceOuter, ::System::Single minDistanceInner)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Rand*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER__CTOR_OFFSET))(this, rand, minCorner, maxCorner, minDistanceOuter, minDistanceInner);
		}

		::System::Int32 get_MaxPoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_GET_MAXPOINTS_OFFSET))(this);
		}

		::System::Void set_MaxPoints(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_SET_MAXPOINTS_OFFSET))(this, value);
		}

		::System::Void CalcGridIndices(::UnityEngine::Vector2& point, ::System::Int32& i, ::System::Int32& j)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_CALCGRIDINDICES_OFFSET))(this, point, i, j);
		}

		::System::Void InsertIntoGrid(::UnityEngine::Vector2& point, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_INSERTINTOGRID_OFFSET))(this, point, index);
		}

		::System::Boolean AddPoint(::UnityEngine::Vector2& center)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_ADDPOINT_OFFSET))(this, center);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Sample()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_SAMPLE_OFFSET))(this);
		}
	};
}
