#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_BBD9ED968182B7DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC8750)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_BBD9ED968182B7DC_TypeDefinitionIndex = 7415;

	class EmbeddedAttribute_BBD9ED968182B7DC : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_BBD9ED968182B7DC__CTOR_OFFSET))(this);
		}
	};
}
