#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_3FB69047CD1DD8F7__CTOR_OFFSET UNITYSDK_OFFSET(0x121876E0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_3FB69047CD1DD8F7_TypeDefinitionIndex = 42868;

	class EmbeddedAttribute_3FB69047CD1DD8F7 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_3FB69047CD1DD8F7__CTOR_OFFSET))(this);
		}
	};
}
