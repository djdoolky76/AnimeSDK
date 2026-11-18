#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EOHLJMNDKPN;

#define AJJKJNPEHCH_BMNJNLLIHLF_HKPAMNGKFCF_OFFSET UNITYSDK_OFFSET(0x144E2D80)
#define AJJKJNPEHCH_BMNJNLLIHLF__CTOR_OFFSET UNITYSDK_OFFSET(0x144E2D70)

inline static constexpr unsigned int AJJKJNPEHCH_BMNJNLLIHLF_TypeDefinitionIndex = 83672;

class AJJKJNPEHCH_BMNJNLLIHLF : public ::System::Object
{
public:
	::System::Int32 EOGLMAEPALE; // 0x10
	::System::Int32 ONDKFOBGPGB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_BMNJNLLIHLF__CTOR_OFFSET))(this);
	}

	::System::Boolean HKPAMNGKFCF(::EOHLJMNDKPN* EMIKCAHJLGB)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOHLJMNDKPN*))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_BMNJNLLIHLF_HKPAMNGKFCF_OFFSET))(this, EMIKCAHJLGB);
	}
};
