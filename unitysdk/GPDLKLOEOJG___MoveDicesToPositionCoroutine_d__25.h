#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GPDLKLOEOJG;
class IFLICGOLBIG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_CTOR_OFFSET UNITYSDK_OFFSET(0x15B455B0)
#define GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15B51A40)
#define GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B51E50)
#define GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B51EB0)
#define GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15B51E60)
#define GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B51A30)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
	class GPDLKLOEOJG___MoveDicesToPositionCoroutine_d__25 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Collections::Generic::List_1<::IFLICGOLBIG*>* dices; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* originPositions; // 0x20
		::GPDLKLOEOJG* __4__this; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* targetPositions; // 0x30
		::System::Single _ratio_5__3; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Single _speed_5__2; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___MOVEDICESTOPOSITIONCOROUTINE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
