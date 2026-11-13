#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_8BE7EF316E842968_CTOR_OFFSET UNITYSDK_OFFSET(0x20902C90)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_8BE7EF316E842968_TypeDefinitionIndex = 42346;

	class IsUnmanagedAttribute_8BE7EF316E842968 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_8BE7EF316E842968_CTOR_OFFSET))(this);
		}

	};
}
