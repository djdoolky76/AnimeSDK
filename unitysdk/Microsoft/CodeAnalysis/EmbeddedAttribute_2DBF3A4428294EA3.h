#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_2DBF3A4428294EA3_CTOR_OFFSET UNITYSDK_OFFSET(0xB072590)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_2DBF3A4428294EA3_TypeDefinitionIndex = 45915;

	class EmbeddedAttribute_2DBF3A4428294EA3 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_2DBF3A4428294EA3_CTOR_OFFSET))(this);
		}

	};
}
