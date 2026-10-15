#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_897185EB187967E4_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF7790)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_897185EB187967E4_TypeDefinitionIndex = 9936;

	class EmbeddedAttribute_897185EB187967E4 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_897185EB187967E4_CTOR_OFFSET))(this);
		}

	};
}
