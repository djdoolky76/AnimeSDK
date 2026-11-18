#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define DMHOLJNNCJA_PAAJKLMHKHD_BJAHLLKDKHL_OFFSET UNITYSDK_OFFSET(0x7FC70A0)
#define DMHOLJNNCJA_PAAJKLMHKHD_NEKHCAFKOFM_OFFSET UNITYSDK_OFFSET(0x7FC70B0)
#define DMHOLJNNCJA_PAAJKLMHKHD__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC7090)

inline static constexpr unsigned int DMHOLJNNCJA_PAAJKLMHKHD_TypeDefinitionIndex = 46958;

class DMHOLJNNCJA_PAAJKLMHKHD : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_PAAJKLMHKHD__CTOR_OFFSET))(this);
	}

	::System::Void BJAHLLKDKHL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_PAAJKLMHKHD_BJAHLLKDKHL_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void NEKHCAFKOFM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_PAAJKLMHKHD_NEKHCAFKOFM_OFFSET))(this, PIIPCLCCOIG);
	}
};
