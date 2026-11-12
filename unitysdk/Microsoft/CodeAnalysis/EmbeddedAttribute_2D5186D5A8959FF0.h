#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_2D5186D5A8959FF0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F8CF0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_2D5186D5A8959FF0_TypeDefinitionIndex = 10184;

	class EmbeddedAttribute_2D5186D5A8959FF0 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_2D5186D5A8959FF0_CTOR_OFFSET))(this);
		}

	};
}
