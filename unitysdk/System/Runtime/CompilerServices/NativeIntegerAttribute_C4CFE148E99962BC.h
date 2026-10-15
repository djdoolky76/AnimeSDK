#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE_C4CFE148E99962BC_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD9060)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NativeIntegerAttribute_C4CFE148E99962BC_TypeDefinitionIndex = 7152;

	class NativeIntegerAttribute_C4CFE148E99962BC : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Boolean>* TransformFlags; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE_C4CFE148E99962BC_CTOR_OFFSET))(this);
		}

	};
}
