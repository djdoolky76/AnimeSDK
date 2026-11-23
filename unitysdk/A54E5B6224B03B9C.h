#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define A54E5B6224B03B9C__CTOR_OFFSET UNITYSDK_OFFSET(0x3C54C50)

inline static constexpr unsigned int A54E5B6224B03B9C_TypeDefinitionIndex = 11565;

class A54E5B6224B03B9C : public ::System::Attribute
{
public:
	::System::String* F31EA19852E18C53; // 0x10

	::System::Void _ctor(::System::String* F0F6153CE767D836)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A54E5B6224B03B9C__CTOR_OFFSET))(this, F0F6153CE767D836);
	}
};
