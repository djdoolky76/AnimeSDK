#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E58A444E90B6C86F_CTOR_OFFSET UNITYSDK_OFFSET(0x1E544050)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_E58A444E90B6C86F_TypeDefinitionIndex = 45120;

	class EmbeddedAttribute_E58A444E90B6C86F : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E58A444E90B6C86F_CTOR_OFFSET))(this);
		}

	};
}
