#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/CleanupMode.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_CLEANUPATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x167585C0)

namespace Entitas::CodeGeneration::Attributes
{
	class CleanupAttribute : public ::System::Attribute
	{
	public:
		::Entitas::CodeGeneration::Attributes::CleanupMode cleanupMode; // 0x10
		::System::Void _ctor(::Entitas::CodeGeneration::Attributes::CleanupMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::CodeGeneration::Attributes::CleanupMode))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_CLEANUPATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
