#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class CADMJOPHMJL;
namespace System { class Action; }

#define CADMJOPHMJL_HBIJNMNGFBJ_OHOPLCKCKGP_OFFSET UNITYSDK_OFFSET(0x18592990)
#define CADMJOPHMJL_HBIJNMNGFBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18592980)

inline static constexpr unsigned int CADMJOPHMJL_HBIJNMNGFBJ_TypeDefinitionIndex = 41223;

class CADMJOPHMJL_HBIJNMNGFBJ : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::CADMJOPHMJL* KLHPEBKNIFB; // 0x18
	::System::UInt32 FHEIMLOCHJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_HBIJNMNGFBJ__CTOR_OFFSET))(this);
	}

	::System::Void OHOPLCKCKGP(::AOCCBECFDKA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOCCBECFDKA*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_HBIJNMNGFBJ_OHOPLCKCKGP_OFFSET))(this, GLAOEHCGCFO);
	}
};
