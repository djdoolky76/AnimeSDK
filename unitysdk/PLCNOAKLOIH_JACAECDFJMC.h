#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_JACAECDFJMC_FOAAENNGONL_OFFSET UNITYSDK_OFFSET(0x1D630400)
#define PLCNOAKLOIH_JACAECDFJMC_MJEDCIKBCFD_OFFSET UNITYSDK_OFFSET(0x1D630410)
#define PLCNOAKLOIH_JACAECDFJMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6303F0)

inline static constexpr unsigned int PLCNOAKLOIH_JACAECDFJMC_TypeDefinitionIndex = 89229;

class PLCNOAKLOIH_JACAECDFJMC : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_JACAECDFJMC__CTOR_OFFSET))(this);
	}

	::System::Void FOAAENNGONL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_JACAECDFJMC_FOAAENNGONL_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void MJEDCIKBCFD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_JACAECDFJMC_MJEDCIKBCFD_OFFSET))(this, BHDNBGLCNOM);
	}
};
