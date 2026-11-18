#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCOAGGHCODK;

#define LOHPJBGOAFG_GLGDJBJHCFI_BMJMJLIHJKI_OFFSET UNITYSDK_OFFSET(0xD43D0C0)
#define LOHPJBGOAFG_GLGDJBJHCFI__CTOR_OFFSET UNITYSDK_OFFSET(0xD43D020)

inline static constexpr unsigned int LOHPJBGOAFG_GLGDJBJHCFI_TypeDefinitionIndex = 92204;

class LOHPJBGOAFG_GLGDJBJHCFI : public ::System::Object
{
public:
	::System::Int32 LDOHDMIOHKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPJBGOAFG_GLGDJBJHCFI__CTOR_OFFSET))(this);
	}

	::System::Boolean BMJMJLIHJKI(::KCOAGGHCODK* HEAJMIGHEHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KCOAGGHCODK*))((::PBYTE)hIl2Cpp + LOHPJBGOAFG_GLGDJBJHCFI_BMJMJLIHJKI_OFFSET))(this, HEAJMIGHEHG);
	}
};
