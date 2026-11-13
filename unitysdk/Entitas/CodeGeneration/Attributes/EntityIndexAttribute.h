#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/AbstractEntityIndexAttribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x208503C0)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int EntityIndexAttribute_TypeDefinitionIndex = 10086;

	class EntityIndexAttribute : public ::Entitas::CodeGeneration::Attributes::AbstractEntityIndexAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
