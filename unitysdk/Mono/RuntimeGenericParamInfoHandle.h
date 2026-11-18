#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x90E650)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x90E620)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x90E630)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x90E620)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

namespace Mono
{
	inline static constexpr unsigned int RuntimeGenericParamInfoHandle_TypeDefinitionIndex = 10;

	struct alignas(8) RuntimeGenericParamInfoHandle
	{
		::PVOID value; // 0x10

		::System::Void _ctor(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE__CTOR_OFFSET))(this, ptr);
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
