#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA;
class OAEFGCLEHHO;
namespace System { class Action; }

#define DMHOLJNNCJA_PJLCJMEDFPM_JBDJOBKNKFP_OFFSET UNITYSDK_OFFSET(0x12425780)
#define DMHOLJNNCJA_PJLCJMEDFPM_LBOPBDCLNBC_OFFSET UNITYSDK_OFFSET(0x12425950)
#define DMHOLJNNCJA_PJLCJMEDFPM__CTOR_OFFSET UNITYSDK_OFFSET(0x12425770)

inline static constexpr unsigned int DMHOLJNNCJA_PJLCJMEDFPM_TypeDefinitionIndex = 46954;

class DMHOLJNNCJA_PJLCJMEDFPM : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::DMHOLJNNCJA* KLHPEBKNIFB; // 0x18
	::System::Action* OLBAKFLBNIG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_PJLCJMEDFPM__CTOR_OFFSET))(this);
	}

	::System::Void JBDJOBKNKFP(::OAEFGCLEHHO* HGOPIFJGCMK)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_PJLCJMEDFPM_JBDJOBKNKFP_OFFSET))(this, HGOPIFJGCMK);
	}

	::System::Void LBOPBDCLNBC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_PJLCJMEDFPM_LBOPBDCLNBC_OFFSET))(this, PIIPCLCCOIG);
	}
};
