#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPEAGERSTATICCLASSCONSTRUCTIONATTRIBUTE_A60D757DF155201E_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E5F10)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppEagerStaticClassConstructionAttribute_A60D757DF155201E_TypeDefinitionIndex = 7125;

	class Il2CppEagerStaticClassConstructionAttribute_A60D757DF155201E : public ::System::Attribute
	{
	public:
		::System::Int32 Order; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPEAGERSTATICCLASSCONSTRUCTIONATTRIBUTE_A60D757DF155201E_CTOR_OFFSET))(this, a1);
		}

	};
}
