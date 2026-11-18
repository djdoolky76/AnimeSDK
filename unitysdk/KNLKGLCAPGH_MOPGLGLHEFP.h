#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_MOPGLGLHEFP_NMGJIOFFIHG_OFFSET UNITYSDK_OFFSET(0x1634D170)
#define KNLKGLCAPGH_MOPGLGLHEFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1634D160)

inline static constexpr unsigned int KNLKGLCAPGH_MOPGLGLHEFP_TypeDefinitionIndex = 41107;

class KNLKGLCAPGH_MOPGLGLHEFP : public ::System::Object
{
public:
	::System::Action* CAAFEGLOALC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_MOPGLGLHEFP__CTOR_OFFSET))(this);
	}

	::System::Void NMGJIOFFIHG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_MOPGLGLHEFP_NMGJIOFFIHG_OFFSET))(this, BHDNBGLCNOM);
	}
};
