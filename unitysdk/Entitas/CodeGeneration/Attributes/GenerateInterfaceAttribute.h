#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_GENERATEINTERFACEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20850400)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int GenerateInterfaceAttribute_TypeDefinitionIndex = 10094;

	class GenerateInterfaceAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_GENERATEINTERFACEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
