#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define ENTITAS_CODEGENERATION_ATTRIBUTES_CUSTOMENTITYINDEXATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20850390)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int CustomEntityIndexAttribute_TypeDefinitionIndex = 10082;

	class CustomEntityIndexAttribute : public ::System::Attribute
	{
	public:
		::System::Type* contextType; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_CUSTOMENTITYINDEXATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
