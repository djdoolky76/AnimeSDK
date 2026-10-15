#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE_984B4B96B59E0A1F_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E700)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CompilerFeatureRequiredAttribute_984B4B96B59E0A1F_TypeDefinitionIndex = 35876;

	class CompilerFeatureRequiredAttribute_984B4B96B59E0A1F : public ::System::Attribute
	{
	public:
		::System::String* _FeatureName_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE_984B4B96B59E0A1F_CTOR_OFFSET))(this, a1);
		}

	};
}
