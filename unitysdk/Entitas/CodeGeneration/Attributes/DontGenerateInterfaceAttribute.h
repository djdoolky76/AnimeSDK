#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_DONTGENERATEINTERFACEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1759C860)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int DontGenerateInterfaceAttribute_TypeDefinitionIndex = 10084;

	class DontGenerateInterfaceAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_DONTGENERATEINTERFACEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
