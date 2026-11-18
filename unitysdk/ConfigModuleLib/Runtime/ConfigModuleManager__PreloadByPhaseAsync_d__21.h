#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E07DA10)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E07E4B0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E07E510)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E07E4C0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E07D9E0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x1E07D9D0)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E07DA00)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int ConfigModuleManager__PreloadByPhaseAsync_d__21_TypeDefinitionIndex = 8193;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
	class ConfigModuleManager__PreloadByPhaseAsync_d__21 : public ::System::Object
	{
	public:
		::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>* onComplete; // 0x10
		::System::Collections::Generic::List_1<::ConfigModuleLib::Runtime::LoadOpHandle>* _handles_5__3; // 0x18
		::System::Action_1<::System::Single>* onProgress; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Object* __7__wrap4; // 0x30
		::System::Byte _padding0[0x10];
		::System::Int32 _initiated_5__4; // 0x48
		::System::Single budgetCoefficient; // 0x4C
		::ConfigModuleLib::Runtime::LoadPhase phase; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Int32 _total_5__2; // 0x58

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULEMANAGER__PRELOADBYPHASEASYNC_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
