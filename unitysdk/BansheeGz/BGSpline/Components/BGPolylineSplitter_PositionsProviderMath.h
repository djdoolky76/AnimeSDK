#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_SplitModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGPolylineSplitter_PositionsProvider.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_COMPLY_OFFSET UNITYSDK_OFFSET(0x1C4FC250)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FAAF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_FILLINSPLITSECTION_OFFSET UNITYSDK_OFFSET(0x1C4FC260)

namespace BansheeGz::BGSpline::Components
{
	class BGPolylineSplitter_PositionsProviderMath : public ::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_CTOR_OFFSET))(this);
		}

		::System::Boolean Comply(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_COMPLY_OFFSET))(this, a1);
		}

		::System::Void FillInSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_FILLINSPLITSECTION_OFFSET))(this, a1, a2, a3);
		}

	};
}
