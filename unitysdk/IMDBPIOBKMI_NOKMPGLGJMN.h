#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEDLNMALNPC.h"
#include "unitysdk/System/Object.h"

class ILAENLNHPIO;

#define IMDBPIOBKMI_NOKMPGLGJMN_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x141F88C0)
#define IMDBPIOBKMI_NOKMPGLGJMN_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x141F8830)
#define IMDBPIOBKMI_NOKMPGLGJMN__CTOR_OFFSET UNITYSDK_OFFSET(0x141F8820)

inline static constexpr unsigned int IMDBPIOBKMI_NOKMPGLGJMN_TypeDefinitionIndex = 60442;

class IMDBPIOBKMI_NOKMPGLGJMN : public ::System::Object
{
public:
	::ILAENLNHPIO* BAECBPPGMNO; // 0x10
	::NEDLNMALNPC PALJBNKBKMA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDBPIOBKMI_NOKMPGLGJMN__CTOR_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDBPIOBKMI_NOKMPGLGJMN_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDBPIOBKMI_NOKMPGLGJMN_AAHMACBDCPN_OFFSET))(this);
	}
};
