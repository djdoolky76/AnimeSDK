#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_0A24B6960E727116_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FBE50)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_0A24B6960E727116_TypeDefinitionIndex = 35980;

	class EmbeddedAttribute_0A24B6960E727116 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_0A24B6960E727116_CTOR_OFFSET))(this);
		}

	};
}
