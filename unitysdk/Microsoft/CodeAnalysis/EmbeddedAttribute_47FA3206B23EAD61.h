#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_47FA3206B23EAD61__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF65D10)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_47FA3206B23EAD61_TypeDefinitionIndex = 28861;

	class EmbeddedAttribute_47FA3206B23EAD61 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_47FA3206B23EAD61__CTOR_OFFSET))(this);
		}
	};
}
