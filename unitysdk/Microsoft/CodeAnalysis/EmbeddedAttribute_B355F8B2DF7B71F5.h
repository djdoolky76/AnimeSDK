#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_B355F8B2DF7B71F5_CTOR_OFFSET UNITYSDK_OFFSET(0x20978850)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_B355F8B2DF7B71F5_TypeDefinitionIndex = 6685;

	class EmbeddedAttribute_B355F8B2DF7B71F5 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_B355F8B2DF7B71F5_CTOR_OFFSET))(this);
		}

	};
}
