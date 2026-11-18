#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDINNMNPKOD_JKPMJIKEAPD_OFFSET UNITYSDK_OFFSET(0x158966B0)
#define EDINNMNPKOD__CTOR_OFFSET UNITYSDK_OFFSET(0x158966A0)

inline static constexpr unsigned int EDINNMNPKOD_TypeDefinitionIndex = 58150;

class EDINNMNPKOD : public ::System::Object
{
public:
	::System::Int32 JOGJHDBEDPN; // 0x10
	::System::Int32 IGABAIODDLB; // 0x14
	::System::Int32 HBDIPHMIGKI; // 0x18
	::System::Int32 ONGKNJDGBLJ; // 0x1C
	::System::Int32 ICLFHANOPKH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDINNMNPKOD__CTOR_OFFSET))(this);
	}

	::EDINNMNPKOD* JKPMJIKEAPD()
	{
		return ((::EDINNMNPKOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDINNMNPKOD_JKPMJIKEAPD_OFFSET))(this);
	}
};
