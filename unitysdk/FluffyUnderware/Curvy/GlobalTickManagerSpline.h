#pragma once
#include "unitysdk/unitysdk.h"

class POEGBDNCMML;
namespace FluffyUnderware::Curvy { class CurvySplineUnityUpdater; }
namespace FluffyUnderware::Curvy::Controllers { class CurvyControllerUnityUpdater; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KHFCEKPIBJH_1;

#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1FC88E80)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC88F90)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC88F40)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC88EF0)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC88FE0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int GlobalTickManagerSpline_TypeDefinitionIndex = 37573;

	class GlobalTickManagerSpline
	{
	public:
		::KHFCEKPIBJH_1<::FluffyUnderware::Curvy::CurvySplineUnityUpdater*>* _curvySplineUpdaters; // 0x18
		::KHFCEKPIBJH_1<::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater*>* _curvyControllerUpdaters; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE__CTOR_OFFSET))(this);
		}

		::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::POEGBDNCMML*>* delayRefreshList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::POEGBDNCMML*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONFIXEDUPDATE_OFFSET))(this);
		}
	};
}
