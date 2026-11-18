#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCOAGGHCODK;

#define BPHGNMNLLHF_IOHGPPHKHFF_AECPHJPMEEN_OFFSET UNITYSDK_OFFSET(0x11526730)
#define BPHGNMNLLHF_IOHGPPHKHFF__CTOR_OFFSET UNITYSDK_OFFSET(0x11526720)

inline static constexpr unsigned int BPHGNMNLLHF_IOHGPPHKHFF_TypeDefinitionIndex = 84207;

class BPHGNMNLLHF_IOHGPPHKHFF : public ::System::Object
{
public:
	::System::UInt32 IPMMCGDMODG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHGNMNLLHF_IOHGPPHKHFF__CTOR_OFFSET))(this);
	}

	::System::Boolean AECPHJPMEEN(::KCOAGGHCODK* HEAJMIGHEHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KCOAGGHCODK*))((::PBYTE)hIl2Cpp + BPHGNMNLLHF_IOHGPPHKHFF_AECPHJPMEEN_OFFSET))(this, HEAJMIGHEHG);
	}
};
