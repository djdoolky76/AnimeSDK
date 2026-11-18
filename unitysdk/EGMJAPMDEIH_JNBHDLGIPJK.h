#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EGMJAPMDEIH_JGDOPMJKMFM;
class LKMLFIAKFOO;

#define EGMJAPMDEIH_JNBHDLGIPJK_KAFLHKFELFC_OFFSET UNITYSDK_OFFSET(0x16140890)
#define EGMJAPMDEIH_JNBHDLGIPJK__CTOR_OFFSET UNITYSDK_OFFSET(0x16140880)

inline static constexpr unsigned int EGMJAPMDEIH_JNBHDLGIPJK_TypeDefinitionIndex = 49035;

class EGMJAPMDEIH_JNBHDLGIPJK : public ::System::Object
{
public:
	::LKMLFIAKFOO* DMCICDLPPGK; // 0x10
	::EGMJAPMDEIH_JGDOPMJKMFM* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_JNBHDLGIPJK__CTOR_OFFSET))(this);
	}

	::System::Void KAFLHKFELFC(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_JNBHDLGIPJK_KAFLHKFELFC_OFFSET))(this, EBFCACIEKBC);
	}
};
