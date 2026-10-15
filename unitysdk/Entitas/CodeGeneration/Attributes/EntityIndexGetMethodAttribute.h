#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXGETMETHODATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x16758640)

namespace Entitas::CodeGeneration::Attributes
{
	class EntityIndexGetMethodAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_ENTITYINDEXGETMETHODATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
