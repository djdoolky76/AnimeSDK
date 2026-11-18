#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDPHEMDAGGH_FOBHCGHLFPI_OEFFPBNHMHF_OFFSET UNITYSDK_OFFSET(0x15897F40)
#define EDPHEMDAGGH_FOBHCGHLFPI__CTOR_OFFSET UNITYSDK_OFFSET(0x15897F30)

inline static constexpr unsigned int EDPHEMDAGGH_FOBHCGHLFPI_TypeDefinitionIndex = 65603;

class EDPHEMDAGGH_FOBHCGHLFPI : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHEMDAGGH_FOBHCGHLFPI__CTOR_OFFSET))(this);
	}

	::System::Void OEFFPBNHMHF(::OAEFGCLEHHO* FPNLKPJNCGK)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDPHEMDAGGH_FOBHCGHLFPI_OEFFPBNHMHF_OFFSET))(this, FPNLKPJNCGK);
	}
};
