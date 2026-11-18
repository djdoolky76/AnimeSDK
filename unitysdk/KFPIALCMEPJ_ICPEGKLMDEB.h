#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFPIALCMEPJ_ICPEGKLMDEB_MCJNPOPCDAJ_OFFSET UNITYSDK_OFFSET(0x1A2C71D0)
#define KFPIALCMEPJ_ICPEGKLMDEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C71C0)

inline static constexpr unsigned int KFPIALCMEPJ_ICPEGKLMDEB_TypeDefinitionIndex = 40427;

class KFPIALCMEPJ_ICPEGKLMDEB : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPIALCMEPJ_ICPEGKLMDEB__CTOR_OFFSET))(this);
	}

	::System::Void MCJNPOPCDAJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFPIALCMEPJ_ICPEGKLMDEB_MCJNPOPCDAJ_OFFSET))(this, GLAOEHCGCFO);
	}
};
