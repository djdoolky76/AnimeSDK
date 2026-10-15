#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECALCULATORCLOSESTPOINT_CALCPOSITIONBYCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1C5144B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECALCULATORCLOSESTPOINT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C51A440)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECALCULATORCLOSESTPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5144A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECALCULATORCLOSESTPOINT_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C51A4B0)

namespace BansheeGz::BGSpline::Curve
{
	class BGCurveCalculatorClosestPoint : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math; // 0x10
		::Il2CppArray<::System::Boolean>* excludedSections; // 0x18
		::Il2CppArray<::System::Single>* minSectionDistances; // 0x20
		static ::Il2CppArray<::System::Int32>** StaticGet_TransitionsForPartitions()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("BansheeGz.BGSpline.Curve", "BGCurveCalculatorClosestPoint")->GetStaticField(0x546F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECALCULATORCLOSESTPOINT_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECALCULATORCLOSESTPOINT_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECALCULATORCLOSESTPOINT_CALCPOSITIONBYCLOSESTPOINT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Single MaxDistance(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECALCULATORCLOSESTPOINT_MAXDISTANCE_OFFSET))(a1, a2);
		}

	};
}
