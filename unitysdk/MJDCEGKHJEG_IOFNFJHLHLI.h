#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_IOFNFJHLHLI_BNNGKKMKCBE_OFFSET UNITYSDK_OFFSET(0x1075C4F0)
#define MJDCEGKHJEG_IOFNFJHLHLI_MDCGHPIEHDO_OFFSET UNITYSDK_OFFSET(0x1075C4E0)
#define MJDCEGKHJEG_IOFNFJHLHLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1075C4D0)

inline static constexpr unsigned int MJDCEGKHJEG_IOFNFJHLHLI_TypeDefinitionIndex = 56425;

class MJDCEGKHJEG_IOFNFJHLHLI : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IOFNFJHLHLI__CTOR_OFFSET))(this);
	}

	::System::Void MDCGHPIEHDO(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IOFNFJHLHLI_MDCGHPIEHDO_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void BNNGKKMKCBE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IOFNFJHLHLI_BNNGKKMKCBE_OFFSET))(this, GLAOEHCGCFO);
	}
};
