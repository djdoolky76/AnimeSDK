#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_5E4AB085F95F9DBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6D080)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_5E4AB085F95F9DBD_TypeDefinitionIndex = 10113;

	class EmbeddedAttribute_5E4AB085F95F9DBD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_5E4AB085F95F9DBD_CTOR_OFFSET))(this);
		}

	};
}
