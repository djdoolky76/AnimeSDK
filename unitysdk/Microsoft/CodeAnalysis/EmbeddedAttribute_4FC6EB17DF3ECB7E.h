#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_4FC6EB17DF3ECB7E_CTOR_OFFSET UNITYSDK_OFFSET(0x1E575E00)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_4FC6EB17DF3ECB7E_TypeDefinitionIndex = 46779;

	class EmbeddedAttribute_4FC6EB17DF3ECB7E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_4FC6EB17DF3ECB7E_CTOR_OFFSET))(this);
		}

	};
}
