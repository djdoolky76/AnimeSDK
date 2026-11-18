#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_BDJHMACKAIJ_KHMCPIIGINC_OFFSET UNITYSDK_OFFSET(0x150D5A40)
#define PLCNOAKLOIH_BDJHMACKAIJ_OCGFCMIMHPP_OFFSET UNITYSDK_OFFSET(0x150D5C00)
#define PLCNOAKLOIH_BDJHMACKAIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x150D5A30)

inline static constexpr unsigned int PLCNOAKLOIH_BDJHMACKAIJ_TypeDefinitionIndex = 89230;

class PLCNOAKLOIH_BDJHMACKAIJ : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_BDJHMACKAIJ__CTOR_OFFSET))(this);
	}

	::System::Void KHMCPIIGINC(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_BDJHMACKAIJ_KHMCPIIGINC_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void OCGFCMIMHPP(::OAEFGCLEHHO* PPDEFOFBJKE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_BDJHMACKAIJ_OCGFCMIMHPP_OFFSET))(this, PPDEFOFBJKE);
	}
};
