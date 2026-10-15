#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDARRAY_OFFSET UNITYSDK_OFFSET(0x3C1EDB0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_1_OFFSET UNITYSDK_OFFSET(0x3C1EDA0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_OFFSET UNITYSDK_OFFSET(0x3C1ED90)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDSCALAR_OFFSET UNITYSDK_OFFSET(0x3C1ED80)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x3C1EDC0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFERED_OFFSET UNITYSDK_OFFSET(0x3C1EE60)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_DISABLE_OFFSET UNITYSDK_OFFSET(0x3C1ECE0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENABLE_OFFSET UNITYSDK_OFFSET(0x3C1EC90)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x3C1EE50)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFERED_OFFSET UNITYSDK_OFFSET(0x3C1EEE0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_1_OFFSET UNITYSDK_OFFSET(0x3C1EF90)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_OFFSET UNITYSDK_OFFSET(0x3C1EF60)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_FINISH_OFFSET UNITYSDK_OFFSET(0x3C1ED00)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_GROWBUFFER_OFFSET UNITYSDK_OFFSET(0x3C1EFC0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_PINARRAY_OFFSET UNITYSDK_OFFSET(0x3C1EFF0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSBEGIN_OFFSET UNITYSDK_OFFSET(0x3C1F000)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSEND_OFFSET UNITYSDK_OFFSET(0x3C1F010)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int DataCollector_TypeDefinitionIndex = 1591;

	struct alignas(8) DataCollector
	{
		::PVOID scratchEnd; // 0x10
		::PVOID datasEnd; // 0x18
		::PVOID pinsEnd; // 0x20
		::PVOID datasStart; // 0x28
		::PVOID scratch; // 0x30
		::PVOID datas; // 0x38
		::PVOID pins; // 0x40
		::Il2CppArray<::System::Byte>* buffer; // 0x48
		::System::Int32 bufferPos; // 0x50
		::System::Int32 bufferNesting; // 0x54
		::System::Boolean writingScalars; // 0x58
		static ::System::Diagnostics::Tracing::DataCollector* StaticGet_ThreadInstance()
		{
			return (::System::Diagnostics::Tracing::DataCollector*)UnitySDK::FromName("System.Diagnostics.Tracing", "DataCollector")->GetStaticField(0x0);
		}

		::System::Void Enable(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::PVOID a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENABLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_DISABLE_OFFSET))(this);
		}

		::PVOID Finish()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_FINISH_OFFSET))(this);
		}

		::System::Void AddScalar(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDSCALAR_OFFSET))(this, a1, a2);
		}

		::System::Void AddBinary(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_OFFSET))(this, a1, a2);
		}

		::System::Void AddBinary_1(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddArray(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 BeginBufferedArray()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFEREDARRAY_OFFSET))(this);
		}

		::System::Void EndBufferedArray(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFEREDARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void BeginBuffered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFERED_OFFSET))(this);
		}

		::System::Void EndBuffered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFERED_OFFSET))(this);
		}

		::System::Void EnsureBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_OFFSET))(this);
		}

		::System::Void EnsureBuffer_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_1_OFFSET))(this, a1);
		}

		::System::Void GrowBuffer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_GROWBUFFER_OFFSET))(this, a1);
		}

		::System::Void PinArray(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_PINARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void ScalarsBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSBEGIN_OFFSET))(this);
		}

		::System::Void ScalarsEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSEND_OFFSET))(this);
		}

	};
}
