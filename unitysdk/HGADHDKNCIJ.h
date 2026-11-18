#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define HGADHDKNCIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1494A4A0)

inline static constexpr unsigned int HGADHDKNCIJ_TypeDefinitionIndex = 48612;

class HGADHDKNCIJ : public ::System::Attribute
{
public:
	::System::String* OMJNNOKIJHI; // 0x10
	::System::String* JNJBAIBCHJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGADHDKNCIJ__CTOR_OFFSET))(this);
	}
};
