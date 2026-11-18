#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDLDOFLKPHL_GHMCGFAEGFB_FBOAAIMNPFG_OFFSET UNITYSDK_OFFSET(0x15896750)
#define EDLDOFLKPHL_GHMCGFAEGFB_HFAKFJGOCOH_OFFSET UNITYSDK_OFFSET(0x15896760)
#define EDLDOFLKPHL_GHMCGFAEGFB__CTOR_OFFSET UNITYSDK_OFFSET(0x15896740)

inline static constexpr unsigned int EDLDOFLKPHL_GHMCGFAEGFB_TypeDefinitionIndex = 61489;

class EDLDOFLKPHL_GHMCGFAEGFB : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_GHMCGFAEGFB__CTOR_OFFSET))(this);
	}

	::System::Void FBOAAIMNPFG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_GHMCGFAEGFB_FBOAAIMNPFG_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void HFAKFJGOCOH(::OAEFGCLEHHO* PPDEFOFBJKE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_GHMCGFAEGFB_HFAKFJGOCOH_OFFSET))(this, PPDEFOFBJKE);
	}
};
