#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
namespace System { class Type; }

#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x3C14DC0)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x3C14D90)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x3C14DA0)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x3C14D90)

namespace Mono
{
	inline static constexpr unsigned int RuntimeGenericParamInfoHandle_TypeDefinitionIndex = 7;

	struct alignas(8) RuntimeGenericParamInfoHandle
	{
		::PVOID value; // 0x10
		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* get_Constraints()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::Reflection::GenericParameterAttributes get_Attributes()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_ATTRIBUTES_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetConstraints()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTS_OFFSET))(this);
		}

		::System::Int32 GetConstraintsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTSCOUNT_OFFSET))(this);
		}

	};
}
