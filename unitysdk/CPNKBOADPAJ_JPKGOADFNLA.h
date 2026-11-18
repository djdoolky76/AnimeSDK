#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CPNKBOADPAJ_JPKGOADFNLA_OAPDFPGOHKN_OFFSET UNITYSDK_OFFSET(0x15A25DA0)
#define CPNKBOADPAJ_JPKGOADFNLA_PFCGAIIOEJN_OFFSET UNITYSDK_OFFSET(0x15A25DD0)
#define CPNKBOADPAJ_JPKGOADFNLA__CTOR_OFFSET UNITYSDK_OFFSET(0x15A25D90)

inline static constexpr unsigned int CPNKBOADPAJ_JPKGOADFNLA_TypeDefinitionIndex = 91824;

class CPNKBOADPAJ_JPKGOADFNLA : public ::System::Object
{
public:
	::System::String* CEKNHIDPNNA; // 0x10
	::System::String* AGPCJEHFALP; // 0x18
	::System::Int32 FKDBDEDGKNL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_JPKGOADFNLA__CTOR_OFFSET))(this);
	}

	::System::Void OAPDFPGOHKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_JPKGOADFNLA_OAPDFPGOHKN_OFFSET))(this);
	}

	::System::Boolean PFCGAIIOEJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_JPKGOADFNLA_PFCGAIIOEJN_OFFSET))(this);
	}
};
