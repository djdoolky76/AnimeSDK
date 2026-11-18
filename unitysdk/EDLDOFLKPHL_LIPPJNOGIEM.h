#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDLDOFLKPHL_LIPPJNOGIEM_BMFNNPNNOEA_OFFSET UNITYSDK_OFFSET(0xF9BAEB0)
#define EDLDOFLKPHL_LIPPJNOGIEM_JCGIPKOAEKP_OFFSET UNITYSDK_OFFSET(0xF9BAEA0)
#define EDLDOFLKPHL_LIPPJNOGIEM__CTOR_OFFSET UNITYSDK_OFFSET(0xF9BAE90)

inline static constexpr unsigned int EDLDOFLKPHL_LIPPJNOGIEM_TypeDefinitionIndex = 61495;

class EDLDOFLKPHL_LIPPJNOGIEM : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_LIPPJNOGIEM__CTOR_OFFSET))(this);
	}

	::System::Void JCGIPKOAEKP(::OAEFGCLEHHO* PPDEFOFBJKE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_LIPPJNOGIEM_JCGIPKOAEKP_OFFSET))(this, PPDEFOFBJKE);
	}

	::System::Void BMFNNPNNOEA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_LIPPJNOGIEM_BMFNNPNNOEA_OFFSET))(this, BHDNBGLCNOM);
	}
};
