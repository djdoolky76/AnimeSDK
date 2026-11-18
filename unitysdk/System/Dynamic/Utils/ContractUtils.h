#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GETPARAMNAME_OFFSET UNITYSDK_OFFSET(0x1FEF7860)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GET_UNREACHABLE_OFFSET UNITYSDK_OFFSET(0x1FEF7720)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_1_OFFSET UNITYSDK_OFFSET(0x1FEF77E0)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_OFFSET UNITYSDK_OFFSET(0x1FEF7380)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRES_OFFSET UNITYSDK_OFFSET(0x1FEF73F0)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ContractUtils_TypeDefinitionIndex = 5013;

	class ContractUtils : public ::System::Object
	{
	public:
		static ::System::Exception* get_Unreachable()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GET_UNREACHABLE_OFFSET))();
		}

		static ::System::Void Requires(::System::Boolean precondition, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRES_OFFSET))(precondition, paramName);
		}

		static ::System::Void RequiresNotNull(::System::Object* value, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_OFFSET))(value, paramName);
		}

		static ::System::Void RequiresNotNull_1(::System::Object* value, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_1_OFFSET))(value, paramName, index);
		}

		static ::System::String* GetParamName(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GETPARAMNAME_OFFSET))(paramName, index);
		}
	};
}
