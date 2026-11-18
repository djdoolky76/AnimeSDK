#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDBHJCMHEGC.h"

namespace System { class String; }

#define GANEOMCLNCI_HBDAKDMFDAK_OFFSET UNITYSDK_OFFSET(0x15F0E680)
#define GANEOMCLNCI_HEHLKHOJJHM_OFFSET UNITYSDK_OFFSET(0x15F0E6C0)
#define GANEOMCLNCI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0E5B0)

inline static constexpr unsigned int GANEOMCLNCI_TypeDefinitionIndex = 56088;

class GANEOMCLNCI : public ::DDBHJCMHEGC
{
public:
	::System::String* GFAFMKBICMC; // 0x10

	::System::Void _ctor(::System::Int32 KKGGACLGGPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GANEOMCLNCI__CTOR_OFFSET))(this, KKGGACLGGPN);
	}

	::System::String* HBDAKDMFDAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANEOMCLNCI_HBDAKDMFDAK_OFFSET))(this);
	}

	::System::String* HEHLKHOJJHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANEOMCLNCI_HEHLKHOJJHM_OFFSET))(this);
	}
};
