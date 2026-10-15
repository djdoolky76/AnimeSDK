#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger::Profiler { class SRPProfilerService; }
namespace System { class Object; }

#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3CFC0)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ED3D130)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED3D1C0)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED3D220)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ED3D1D0)
#define SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED3D120)

namespace SRDebugger::Profiler
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
	class SRPProfilerService__EndOfFrameCoroutine_d__20 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::SRDebugger::Profiler::SRPProfilerService* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_PROFILER_SRPPROFILERSERVICE__ENDOFFRAMECOROUTINE_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
