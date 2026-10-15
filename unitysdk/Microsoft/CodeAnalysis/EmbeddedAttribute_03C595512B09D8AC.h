#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_03C595512B09D8AC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C572FB0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_03C595512B09D8AC_TypeDefinitionIndex = 41638;

	class EmbeddedAttribute_03C595512B09D8AC : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_03C595512B09D8AC_CTOR_OFFSET))(this);
		}

	};
}
