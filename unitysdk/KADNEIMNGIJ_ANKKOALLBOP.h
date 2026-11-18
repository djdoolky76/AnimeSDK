#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IECNLPPHCHI;
class KADNEIMNGIJ_FMMIAIJKMIN;
class MPKBDIJDMAP;

#define KADNEIMNGIJ_ANKKOALLBOP_LKHDEHKPLAA_OFFSET UNITYSDK_OFFSET(0x17635970)
#define KADNEIMNGIJ_ANKKOALLBOP__CTOR_OFFSET UNITYSDK_OFFSET(0x17635960)

inline static constexpr unsigned int KADNEIMNGIJ_ANKKOALLBOP_TypeDefinitionIndex = 72639;

class KADNEIMNGIJ_ANKKOALLBOP : public ::System::Object
{
public:
	::IECNLPPHCHI* PPLAEJKCJPE; // 0x10
	::KADNEIMNGIJ_FMMIAIJKMIN* MFOCAFMBBGM; // 0x18
	::System::Int32 ABHBKFJKINO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_ANKKOALLBOP__CTOR_OFFSET))(this);
	}

	::System::Void LKHDEHKPLAA(::MPKBDIJDMAP* JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_ANKKOALLBOP_LKHDEHKPLAA_OFFSET))(this, JNDDJMAHNAI);
	}
};
