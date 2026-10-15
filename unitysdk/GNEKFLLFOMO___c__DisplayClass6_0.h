#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace RPG::GameCore { class LevelCurveInfo; }
namespace RPG::GameCore { class LevelCurvePointInfo; }

#define GNEKFLLFOMO___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFFC40)
#define GNEKFLLFOMO___C__DISPLAYCLASS6_0___CREATEARRIVECURVE_B__0_OFFSET UNITYSDK_OFFSET(0x15AFFC50)

	class GNEKFLLFOMO___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelCurvePointInfo* origin; // 0x10
		::RPG::GameCore::LevelCurveInfo* curveInfo; // 0x18
		::UnityEngine::Vector3 originNormal; // 0x20
		::UnityEngine::Vector3 startPos; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEKFLLFOMO___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint* __CreateArriveCurve_b__0(::System::Int32 a1, ::BansheeGz::BGSpline::Curve::BGCurve* a2)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + GNEKFLLFOMO___C__DISPLAYCLASS6_0___CREATEARRIVECURVE_B__0_OFFSET))(this, a1, a2);
		}

	};
