#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Profiling/LowLevel/MarkerFlags.h"
namespace System { class String; }

#define UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x3EBA590)
#define UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x2067DCC0)
#define UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_END_OFFSET UNITYSDK_OFFSET(0x3EBA450)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarkerWithStringData_TypeDefinitionIndex = 3948;

	struct alignas(4) ProfilerMarkerWithStringData
	{
		::System::IntPtr _marker; // 0x10
		::System::Int32 _metadataCount; // 0x18
		/*
		static ::Unity::Profiling::ProfilerMarkerWithStringData Create(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Unity::Profiling::LowLevel::MarkerFlags a4)
		{
			return ((::Unity::Profiling::ProfilerMarkerWithStringData(*)(::System::String*, ::System::String*, ::System::String*, ::Unity::Profiling::LowLevel::MarkerFlags))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}
		*/

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_END_OFFSET))(this);
		}

		::System::Void Begin(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET))(this, a1, a2);
		}

	};
}
