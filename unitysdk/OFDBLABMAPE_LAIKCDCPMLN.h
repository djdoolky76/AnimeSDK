#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PIDBPNBEKKN.h"

namespace System { class String; }

#define OFDBLABMAPE_LAIKCDCPMLN_AJPHDBMGIBE_OFFSET UNITYSDK_OFFSET(0xF180750)
#define OFDBLABMAPE_LAIKCDCPMLN__CTOR_OFFSET UNITYSDK_OFFSET(0xF180740)

inline static constexpr unsigned int OFDBLABMAPE_LAIKCDCPMLN_TypeDefinitionIndex = 64465;

class OFDBLABMAPE_LAIKCDCPMLN : public ::System::Object
{
public:
	::System::String* LCEGOBBEECM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_LAIKCDCPMLN__CTOR_OFFSET))(this);
	}

	::System::Void AJPHDBMGIBE(::PIDBPNBEKKN DHHKIDEDMEL)
	{
		return ((::System::Void(*)(::PVOID, ::PIDBPNBEKKN))((::PBYTE)hIl2Cpp + OFDBLABMAPE_LAIKCDCPMLN_AJPHDBMGIBE_OFFSET))(this, DHHKIDEDMEL);
	}
};
