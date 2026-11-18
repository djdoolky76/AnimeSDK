#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMFFICIBPCC.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HLENFIOHJFL_KOBGDPHOBIH_KHNEKKIJHPF_OFFSET UNITYSDK_OFFSET(0x1011BFB0)
#define HLENFIOHJFL_KOBGDPHOBIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1011BFA0)

inline static constexpr unsigned int HLENFIOHJFL_KOBGDPHOBIH_TypeDefinitionIndex = 54202;

class HLENFIOHJFL_KOBGDPHOBIH : public ::System::Object
{
public:
	::System::Action* FGHOIDFGJHB; // 0x10
	::CMFFICIBPCC FLMJOFMLFBM; // 0x18
	::System::UInt32 FMJPOIFLFOJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_KOBGDPHOBIH__CTOR_OFFSET))(this);
	}

	::System::Void KHNEKKIJHPF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_KOBGDPHOBIH_KHNEKKIJHPF_OFFSET))(this, BHDNBGLCNOM);
	}
};
