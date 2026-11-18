#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OFHANLCCJIF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F68EA0)

inline static constexpr unsigned int OFHANLCCJIF_TypeDefinitionIndex = 59109;

class OFHANLCCJIF : public ::System::Object
{
public:
	::System::String* JHLIENEKMOJ; // 0x10
	::System::Single DPGNDHJGGJB; // 0x18
	::System::Boolean NHMPAAKNMFA; // 0x1C

	::System::Void _ctor(::System::Boolean PMNFPBJNJNF, ::System::Single CKJPBNEOGHE, ::System::String* NLDFCKAGHJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + OFHANLCCJIF__CTOR_OFFSET))(this, PMNFPBJNJNF, CKJPBNEOGHE, NLDFCKAGHJH);
	}
};
