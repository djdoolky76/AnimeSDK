#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCIMMDDIFBJ;
class KFGCLOPEGJO_ILMBGEAMPGJ;

#define KFGCLOPEGJO_OFJJJOHGKGO_DCBLNHDDBLN_OFFSET UNITYSDK_OFFSET(0x157E77D0)
#define KFGCLOPEGJO_OFJJJOHGKGO__CTOR_OFFSET UNITYSDK_OFFSET(0x157E77C0)

inline static constexpr unsigned int KFGCLOPEGJO_OFJJJOHGKGO_TypeDefinitionIndex = 78946;

class KFGCLOPEGJO_OFJJJOHGKGO : public ::System::Object
{
public:
	::KFGCLOPEGJO_ILMBGEAMPGJ* FGBNBFHOKAA; // 0x10
	::GCIMMDDIFBJ* BKOLCDPOJAL; // 0x18
	::System::Boolean COJBIKBAGHC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_OFJJJOHGKGO__CTOR_OFFSET))(this);
	}

	::System::Void DCBLNHDDBLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_OFJJJOHGKGO_DCBLNHDDBLN_OFFSET))(this);
	}
};
