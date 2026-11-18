#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CPNKBOADPAJ_CBKACKLBONC_OAPDFPGOHKN_OFFSET UNITYSDK_OFFSET(0x19D4B5C0)
#define CPNKBOADPAJ_CBKACKLBONC_PFCGAIIOEJN_OFFSET UNITYSDK_OFFSET(0x19D4B5F0)
#define CPNKBOADPAJ_CBKACKLBONC__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4B5B0)

inline static constexpr unsigned int CPNKBOADPAJ_CBKACKLBONC_TypeDefinitionIndex = 91823;

class CPNKBOADPAJ_CBKACKLBONC : public ::System::Object
{
public:
	::Foundation::AssetPath CEKNHIDPNNA; // 0x10
	::System::String* AGPCJEHFALP; // 0x20
	::System::Int32 FKDBDEDGKNL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_CBKACKLBONC__CTOR_OFFSET))(this);
	}

	::System::Void OAPDFPGOHKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_CBKACKLBONC_OAPDFPGOHKN_OFFSET))(this);
	}

	::System::Boolean PFCGAIIOEJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_CBKACKLBONC_PFCGAIIOEJN_OFFSET))(this);
	}
};
