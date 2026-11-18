#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_PROFILING_PROFILER_ENDTHREADPROFILING_OFFSET UNITYSDK_OFFSET(0x1EC9A420)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOHEAPSIZELONG_OFFSET UNITYSDK_OFFSET(0x1EC9A440)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOUSEDSIZELONG_OFFSET UNITYSDK_OFFSET(0x1EC9A450)
#define UNITYENGINE_PROFILING_PROFILER_GETNAPASSETMEMSTATS_OFFSET UNITYSDK_OFFSET(0x1EC9A500)
#define UNITYENGINE_PROFILING_PROFILER_GETNAPENGINESTATS_OFFSET UNITYSDK_OFFSET(0x1EC9A4F0)
#define UNITYENGINE_PROFILING_PROFILER_GETOBJECTMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1EC9A510)
#define UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET UNITYSDK_OFFSET(0x1EC9A430)
#define UNITYENGINE_PROFILING_PROFILER_GETSYSTEMMEMORYUSEDANDTOTALLONGSIZE_1_OFFSET UNITYSDK_OFFSET(0x1EC9A470)
#define UNITYENGINE_PROFILING_PROFILER_GETSYSTEMMEMORYUSEDANDTOTALLONGSIZE_OFFSET UNITYSDK_OFFSET(0x1EC9A460)
#define UNITYENGINE_PROFILING_PROFILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC9A520)
#define UNITYENGINE_PROFILING_PROFILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC9A410)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Profiler_TypeDefinitionIndex = 5438;

	class Profiler : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MainThreadID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Profiler_TypeDefinitionIndex)->GetStaticField(0x2E50);
		}
		static ::System::Boolean* StaticGet_EnableSampleCheck()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Profiler_TypeDefinitionIndex)->GetStaticField(0x2E54);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER__CCTOR_OFFSET))();
		}

		static ::System::Void EndThreadProfiling()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_ENDTHREADPROFILING_OFFSET))();
		}

		static ::System::Int64 GetRuntimeMemorySizeLong(::UnityEngine::Object* o)
		{
			return ((::System::Int64(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET))(o);
		}

		static ::System::Int64 GetMonoHeapSizeLong()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETMONOHEAPSIZELONG_OFFSET))();
		}

		static ::System::Int64 GetMonoUsedSizeLong()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETMONOUSEDSIZELONG_OFFSET))();
		}

		static ::System::Void GetSystemMemoryUsedAndTotalLongSize(::PVOID values)
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETSYSTEMMEMORYUSEDANDTOTALLONGSIZE_OFFSET))(values);
		}

		static ::System::Void GetSystemMemoryUsedAndTotalLongSize_1(::Il2CppArray<::System::UInt64>* values)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt64>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETSYSTEMMEMORYUSEDANDTOTALLONGSIZE_1_OFFSET))(values);
		}

		static ::System::String* GetNapEngineStats()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETNAPENGINESTATS_OFFSET))();
		}

		static ::System::String* GetNapAssetMemStats()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETNAPASSETMEMSTATS_OFFSET))();
		}

		static ::System::UInt32 GetObjectMemorySize(::System::Object* obj)
		{
			return ((::System::UInt32(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETOBJECTMEMORYSIZE_OFFSET))(obj);
		}
	};
}
