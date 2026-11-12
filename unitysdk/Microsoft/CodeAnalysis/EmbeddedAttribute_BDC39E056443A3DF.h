#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_BDC39E056443A3DF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4EE0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_BDC39E056443A3DF_TypeDefinitionIndex = 36797;

	class EmbeddedAttribute_BDC39E056443A3DF : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_BDC39E056443A3DF_CTOR_OFFSET))(this);
		}

	};
}
