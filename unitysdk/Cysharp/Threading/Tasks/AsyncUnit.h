#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define CYSHARP_THREADING_TASKS_ASYNCUNIT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F113C50)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F09290)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E8C190)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C5E6D0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncUnit_TypeDefinitionIndex = 38132;

	struct alignas(4) AsyncUnit
	{
		static ::Cysharp::Threading::Tasks::AsyncUnit* StaticGet_Default()
		{
			return (::Cysharp::Threading::Tasks::AsyncUnit*)UnitySDK::FromName("Cysharp.Threading.Tasks", "AsyncUnit")->GetStaticField(0xD6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::Cysharp::Threading::Tasks::AsyncUnit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cysharp::Threading::Tasks::AsyncUnit))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_TOSTRING_OFFSET))(this);
		}

	};
}
