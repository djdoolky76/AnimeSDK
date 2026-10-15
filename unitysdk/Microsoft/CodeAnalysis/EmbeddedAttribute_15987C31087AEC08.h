#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_15987C31087AEC08_CTOR_OFFSET UNITYSDK_OFFSET(0x1C900000)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_15987C31087AEC08_TypeDefinitionIndex = 41921;

	class EmbeddedAttribute_15987C31087AEC08 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_15987C31087AEC08_CTOR_OFFSET))(this);
		}

	};
}
