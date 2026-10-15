#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace BansheeGz::BGSpline::Components { class BGCcTriangulate2D; }
namespace System { class Object; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F6AC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C4F6BD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C4F6C60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C4F6CC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C4F6C70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4F6BC0)

namespace BansheeGz::BGSpline::Components
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36>
	class BGCcTriangulate2D__UiUpdater_d__36 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::BansheeGz::BGSpline::Components::BGCcTriangulate2D* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRIANGULATE2D__UIUPDATER_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
