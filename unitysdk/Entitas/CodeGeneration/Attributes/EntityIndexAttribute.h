#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/AbstractEntityIndexAttribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x16758630)

namespace Entitas::CodeGeneration::Attributes
{
	class EntityIndexAttribute : public ::Entitas::CodeGeneration::Attributes::AbstractEntityIndexAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
