#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
namespace BansheeGz::BGSpline::Components { class BGCcCursorChangeLinear_PointReachedArgs; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4BAC10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BABF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C4BAAC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_GET_POINTINDEX_OFFSET UNITYSDK_OFFSET(0x1C4BABD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_SET_POINTINDEX_OFFSET UNITYSDK_OFFSET(0x1C4BABE0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorChangeLinear_PointReachedArgs_TypeDefinitionIndex = 36036;

	class BGCcCursorChangeLinear_PointReachedArgs : public ::System::EventArgs
	{
	public:
		::System::Int32 _PointIndex_k__BackingField; // 0x10
		static ::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs** StaticGet_Instance()
		{
			return (::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs**)UnitySDK::FromName("BansheeGz.BGSpline.Components", "PointReachedArgs")->GetStaticField(0x5FCB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_CCTOR_OFFSET))();
		}

		::System::Int32 get_PointIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_GET_POINTINDEX_OFFSET))(this);
		}

		::System::Void set_PointIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_SET_POINTINDEX_OFFSET))(this, a1);
		}

		static ::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs* GetInstance(::System::Int32 a1)
		{
			return ((::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*(*)(::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDARGS_GETINSTANCE_OFFSET))(a1);
		}

	};
}
