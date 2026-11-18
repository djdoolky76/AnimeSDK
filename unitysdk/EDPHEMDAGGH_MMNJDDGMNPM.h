#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDPHEMDAGGH_MMNJDDGMNPM_LHDHMCNAEMD_OFFSET UNITYSDK_OFFSET(0x16135740)
#define EDPHEMDAGGH_MMNJDDGMNPM__CTOR_OFFSET UNITYSDK_OFFSET(0x16135730)

inline static constexpr unsigned int EDPHEMDAGGH_MMNJDDGMNPM_TypeDefinitionIndex = 65600;

class EDPHEMDAGGH_MMNJDDGMNPM : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHEMDAGGH_MMNJDDGMNPM__CTOR_OFFSET))(this);
	}

	::System::Void LHDHMCNAEMD(::OAEFGCLEHHO* FPNLKPJNCGK)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDPHEMDAGGH_MMNJDDGMNPM_LHDHMCNAEMD_OFFSET))(this, FPNLKPJNCGK);
	}
};
