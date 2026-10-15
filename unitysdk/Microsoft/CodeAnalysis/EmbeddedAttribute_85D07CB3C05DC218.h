#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_85D07CB3C05DC218_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC52FA0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_85D07CB3C05DC218_TypeDefinitionIndex = 44018;

	class EmbeddedAttribute_85D07CB3C05DC218 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_85D07CB3C05DC218_CTOR_OFFSET))(this);
		}

	};
}
