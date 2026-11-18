#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_PBFJKALCAOB_FNJLKPFHDBO_OFFSET UNITYSDK_OFFSET(0x14FD5860)
#define KFBAENHGMFB_PBFJKALCAOB__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD5850)

inline static constexpr unsigned int KFBAENHGMFB_PBFJKALCAOB_TypeDefinitionIndex = 78592;

class KFBAENHGMFB_PBFJKALCAOB : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_PBFJKALCAOB__CTOR_OFFSET))(this);
	}

	::System::Void FNJLKPFHDBO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_PBFJKALCAOB_FNJLKPFHDBO_OFFSET))(this, BHDNBGLCNOM);
	}
};
