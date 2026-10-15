#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_FC6F1734F54700BA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FBE70)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_FC6F1734F54700BA_TypeDefinitionIndex = 36077;

	class EmbeddedAttribute_FC6F1734F54700BA : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_FC6F1734F54700BA_CTOR_OFFSET))(this);
		}

	};
}
