#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }

#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F325E40)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1F3258E0)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1F3255B0)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F326270)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F326100)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONSPLINECOORDINATESCHANGED_OFFSET UNITYSDK_OFFSET(0x1F325C90)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONSPLINEREFRESH_OFFSET UNITYSDK_OFFSET(0x1F325B40)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F3263B0)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1F325BF0)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_SET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1F3255C0)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_START_OFFSET UNITYSDK_OFFSET(0x1F3263F0)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_UNBINDEVENTS_1_OFFSET UNITYSDK_OFFSET(0x1F325D30)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_UNBINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1F3257A0)
#define FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F326400)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int SplineProcessor_TypeDefinitionIndex = 37502;

	class SplineProcessor : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* m_Spline; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_GET_SPLINE_OFFSET))(this);
		}

		::System::Void set_Spline(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_SET_SPLINE_OFFSET))(this, value);
		}

		::System::Void OnSplineRefresh(::FluffyUnderware::Curvy::CurvySplineEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONSPLINEREFRESH_OFFSET))(this, e);
		}

		::System::Void OnSplineCoordinatesChanged(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONSPLINECOORDINATESCHANGED_OFFSET))(this, spline);
		}

		::System::Void ProcessEvent(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_PROCESSEVENT_OFFSET))(this, spline);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_START_OFFSET))(this);
		}

		::System::Void BindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_BINDEVENTS_OFFSET))(this);
		}

		::System::Void UnbindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_UNBINDEVENTS_OFFSET))(this);
		}

		::System::Void UnbindEvents_1(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SPLINEPROCESSOR_UNBINDEVENTS_1_OFFSET))(this, spline);
		}
	};
}
