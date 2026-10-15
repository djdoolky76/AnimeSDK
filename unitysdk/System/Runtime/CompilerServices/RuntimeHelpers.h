#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeFieldHandle.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class Array; }
namespace System { class Object; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_ENSURESUFFICIENTEXECUTIONSTACK_OFFSET UNITYSDK_OFFSET(0x1C299540)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C2993C0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GETOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x1C2993D0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GET_OFFSETTOSTRINGDATA_OFFSET UNITYSDK_OFFSET(0x1C2993B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_INITIALIZEARRAY_1_OFFSET UNITYSDK_OFFSET(0x1C299370)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_INITIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1C299360)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_PREPARECONSTRAINEDREGIONS_OFFSET UNITYSDK_OFFSET(0x1C299580)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_RUNCLASSCONSTRUCTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2994D0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_RUNCLASSCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1C299490)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_SUFFICIENTEXECUTIONSTACK_OFFSET UNITYSDK_OFFSET(0x1C299530)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_TRYENSURESUFFICIENTEXECUTIONSTACK_OFFSET UNITYSDK_OFFSET(0x1C299570)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeHelpers_TypeDefinitionIndex = 1401;

	class RuntimeHelpers : public ::System::Object
	{
	public:
		static ::System::Void InitializeArray(::System::Array* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::Array*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_INITIALIZEARRAY_OFFSET))(a1, a2);
		}

		static ::System::Void InitializeArray_1(::System::Array* a1, ::System::RuntimeFieldHandle a2)
		{
			return ((::System::Void(*)(::System::Array*, ::System::RuntimeFieldHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_INITIALIZEARRAY_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_OffsetToStringData()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GET_OFFSETTOSTRINGDATA_OFFSET))();
		}

		static ::System::Int32 GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GETHASHCODE_OFFSET))(a1);
		}

		static ::System::Object* GetObjectValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GETOBJECTVALUE_OFFSET))(a1);
		}

		static ::System::Void RunClassConstructor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_RUNCLASSCONSTRUCTOR_OFFSET))(a1);
		}

		static ::System::Void RunClassConstructor_1(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_RUNCLASSCONSTRUCTOR_1_OFFSET))(a1);
		}

		static ::System::Boolean SufficientExecutionStack()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_SUFFICIENTEXECUTIONSTACK_OFFSET))();
		}

		static ::System::Void EnsureSufficientExecutionStack()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_ENSURESUFFICIENTEXECUTIONSTACK_OFFSET))();
		}

		static ::System::Boolean TryEnsureSufficientExecutionStack()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_TRYENSURESUFFICIENTEXECUTIONSTACK_OFFSET))();
		}

		static ::System::Void PrepareConstrainedRegions()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_PREPARECONSTRAINEDREGIONS_OFFSET))();
		}

	};
}
