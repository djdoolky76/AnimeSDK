#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_F757426D5697E4DD_CTOR_OFFSET UNITYSDK_OFFSET(0x20786010)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_F757426D5697E4DD_TypeDefinitionIndex = 4966;

	class IsReadOnlyAttribute_F757426D5697E4DD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_F757426D5697E4DD_CTOR_OFFSET))(this);
		}

	};
}
