#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Profiling/LowLevel/MarkerFlags.h"
namespace System { class String; }

#define UNITY_PROFILING_PROFILERMARKERWITHINTDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x3EBA470)
#define UNITY_PROFILING_PROFILERMARKERWITHINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x2067D8B0)
#define UNITY_PROFILING_PROFILERMARKERWITHINTDATA_END_OFFSET UNITYSDK_OFFSET(0x3EBA450)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarkerWithIntData_TypeDefinitionIndex = 3949;

	struct alignas(4) ProfilerMarkerWithIntData
	{
		::System::IntPtr _marker; // 0x10
		::System::Int32 _metadataCount; // 0x18
		/*
		static ::Unity::Profiling::ProfilerMarkerWithIntData Create(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Unity::Profiling::LowLevel::MarkerFlags a4)
		{
			return ((::Unity::Profiling::ProfilerMarkerWithIntData(*)(::System::String*, ::System::String*, ::System::String*, ::Unity::Profiling::LowLevel::MarkerFlags))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHINTDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}
		*/

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHINTDATA_END_OFFSET))(this);
		}

		::System::Void Begin(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKERWITHINTDATA_BEGIN_OFFSET))(this, a1, a2);
		}

	};
}
