#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine::Profiling { class Recorder; }

#define UNITYENGINE_PROFILING_RECORDER_CCTOR_OFFSET UNITYSDK_OFFSET(0x203DFCE0)
#define UNITYENGINE_PROFILING_RECORDER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203DFB40)
#define UNITYENGINE_PROFILING_RECORDER_CTOR_OFFSET UNITYSDK_OFFSET(0x203DFB30)
#define UNITYENGINE_PROFILING_RECORDER_DISPOSENATIVE_OFFSET UNITYSDK_OFFSET(0x203DFBE0)
#define UNITYENGINE_PROFILING_RECORDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x203DFB50)
#define UNITYENGINE_PROFILING_RECORDER_GETELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x203DFCA0)
#define UNITYENGINE_PROFILING_RECORDER_GETINTERNAL_OFFSET UNITYSDK_OFFSET(0x203DFC60)
#define UNITYENGINE_PROFILING_RECORDER_GETSAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x203DFCD0)
#define UNITYENGINE_PROFILING_RECORDER_GET_ELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x203DFC80)
#define UNITYENGINE_PROFILING_RECORDER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x203DFC70)
#define UNITYENGINE_PROFILING_RECORDER_GET_OFFSET UNITYSDK_OFFSET(0x203DFBF0)
#define UNITYENGINE_PROFILING_RECORDER_GET_SAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x203DFCB0)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Recorder_TypeDefinitionIndex = 4517;

	class Recorder : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		static ::UnityEngine::Profiling::Recorder** StaticGet_s_InvalidRecorder()
		{
			return (::UnityEngine::Profiling::Recorder**)UnitySDK::FromName("UnityEngine.Profiling", "Recorder")->GetStaticField(0x110C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_FINALIZE_OFFSET))(this);
		}

		static ::UnityEngine::Profiling::Recorder* Get(::System::String* a1)
		{
			return ((::UnityEngine::Profiling::Recorder*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_OFFSET))(a1);
		}

		static ::System::IntPtr GetInternal(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GETINTERNAL_OFFSET))(a1);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_ISVALID_OFFSET))(this);
		}

		static ::System::Void DisposeNative(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_DISPOSENATIVE_OFFSET))(a1);
		}

		::System::Int64 get_elapsedNanoseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_ELAPSEDNANOSECONDS_OFFSET))(this);
		}

		::System::Int64 GetElapsedNanoseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GETELAPSEDNANOSECONDS_OFFSET))(this);
		}

		::System::Int32 get_sampleBlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_SAMPLEBLOCKCOUNT_OFFSET))(this);
		}

		::System::Int32 GetSampleBlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GETSAMPLEBLOCKCOUNT_OFFSET))(this);
		}

	};
}
