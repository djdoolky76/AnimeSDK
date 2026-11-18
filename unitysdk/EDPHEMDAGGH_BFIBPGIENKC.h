#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDPHEMDAGGH_BFIBPGIENKC_JIGMOIPDNKF_OFFSET UNITYSDK_OFFSET(0x12BEC910)
#define EDPHEMDAGGH_BFIBPGIENKC__CTOR_OFFSET UNITYSDK_OFFSET(0x12BEC900)

inline static constexpr unsigned int EDPHEMDAGGH_BFIBPGIENKC_TypeDefinitionIndex = 65598;

class EDPHEMDAGGH_BFIBPGIENKC : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHEMDAGGH_BFIBPGIENKC__CTOR_OFFSET))(this);
	}

	::System::Void JIGMOIPDNKF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDPHEMDAGGH_BFIBPGIENKC_JIGMOIPDNKF_OFFSET))(this, BHDNBGLCNOM);
	}
};
