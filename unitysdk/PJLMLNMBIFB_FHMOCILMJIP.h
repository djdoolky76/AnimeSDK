#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PJLMLNMBIFB_FHMOCILMJIP_ANONHFCGABL_OFFSET UNITYSDK_OFFSET(0x1198EBE0)
#define PJLMLNMBIFB_FHMOCILMJIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1198EBD0)

inline static constexpr unsigned int PJLMLNMBIFB_FHMOCILMJIP_TypeDefinitionIndex = 65241;

class PJLMLNMBIFB_FHMOCILMJIP : public ::System::Object
{
public:
	::System::Int32 HHLLEJOEMII; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMLNMBIFB_FHMOCILMJIP__CTOR_OFFSET))(this);
	}

	::System::String* ANONHFCGABL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMLNMBIFB_FHMOCILMJIP_ANONHFCGABL_OFFSET))(this);
	}
};
