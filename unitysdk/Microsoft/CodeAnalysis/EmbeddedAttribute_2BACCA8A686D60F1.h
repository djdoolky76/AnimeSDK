#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_2BACCA8A686D60F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4810E0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_2BACCA8A686D60F1_TypeDefinitionIndex = 30616;

	class EmbeddedAttribute_2BACCA8A686D60F1 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_2BACCA8A686D60F1__CTOR_OFFSET))(this);
		}
	};
}
