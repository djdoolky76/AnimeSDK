#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGBBEKJHHNP;
class DGDNKBFMHME;
class LCCELINAPHL;

#define LCCELINAPHL_ONKHFFHJCCO_LNJCFONKDPN_OFFSET UNITYSDK_OFFSET(0x1683ABC0)
#define LCCELINAPHL_ONKHFFHJCCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1683A6F0)

inline static constexpr unsigned int LCCELINAPHL_ONKHFFHJCCO_TypeDefinitionIndex = 41340;

class LCCELINAPHL_ONKHFFHJCCO : public ::System::Object
{
public:
	::AGBBEKJHHNP* MIJHBEAMHPH; // 0x10
	::LCCELINAPHL* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCELINAPHL_ONKHFFHJCCO__CTOR_OFFSET))(this);
	}

	::System::Void LNJCFONKDPN(::DGDNKBFMHME* BKIIJMLGNJH)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + LCCELINAPHL_ONKHFFHJCCO_LNJCFONKDPN_OFFSET))(this, BKIIJMLGNJH);
	}
};
