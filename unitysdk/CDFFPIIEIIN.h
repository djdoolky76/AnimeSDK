#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CDFFPIIEIIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14F1C8E0)

inline static constexpr unsigned int CDFFPIIEIIN_TypeDefinitionIndex = 38654;

class CDFFPIIEIIN : public ::System::Attribute
{
public:
	::System::String* AHBNAPGBMJA; // 0x10

	::System::Void _ctor(::System::String* AHBNAPGBMJA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CDFFPIIEIIN__CTOR_OFFSET))(this, AHBNAPGBMJA);
	}
};
