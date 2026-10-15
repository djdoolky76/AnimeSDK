#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs_BeforeChange; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C51A9E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C51A9C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C509C00)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveChangedArgs_BeforeChange_TypeDefinitionIndex = 36008;

	class BGCurveChangedArgs_BeforeChange : public ::System::EventArgs
	{
	public:
		::System::String* Operation; // 0x10
		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange** StaticGet_BeforeChangeInstance()
		{
			return (::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange**)UnitySDK::FromName("BansheeGz.BGSpline.Curve", "BeforeChange")->GetStaticField(0x547A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_CCTOR_OFFSET))();
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange* GetInstance(::System::String* a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange*(*)(::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_GETINSTANCE_OFFSET))(a1);
		}

	};
}
