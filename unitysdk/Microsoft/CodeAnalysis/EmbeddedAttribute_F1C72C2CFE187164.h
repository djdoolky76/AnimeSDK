#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_F1C72C2CFE187164_CTOR_OFFSET UNITYSDK_OFFSET(0x1F158CB0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_F1C72C2CFE187164_TypeDefinitionIndex = 45895;

	class EmbeddedAttribute_F1C72C2CFE187164 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_F1C72C2CFE187164_CTOR_OFFSET))(this);
		}

	};
}
