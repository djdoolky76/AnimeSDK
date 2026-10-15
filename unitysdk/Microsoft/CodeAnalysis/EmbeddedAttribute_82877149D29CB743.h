#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_82877149D29CB743_CTOR_OFFSET UNITYSDK_OFFSET(0x1F135DA0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_82877149D29CB743_TypeDefinitionIndex = 38113;

	class EmbeddedAttribute_82877149D29CB743 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_82877149D29CB743_CTOR_OFFSET))(this);
		}

	};
}
