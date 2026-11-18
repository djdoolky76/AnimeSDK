#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJKBAMNFLCA;
class OAEFGCLEHHO;
namespace System { class Action; }

#define BJKBAMNFLCA_PFOHIAKHDGO_NFHLEEFMHCN_OFFSET UNITYSDK_OFFSET(0x18570D70)
#define BJKBAMNFLCA_PFOHIAKHDGO__CTOR_OFFSET UNITYSDK_OFFSET(0x18570D60)

inline static constexpr unsigned int BJKBAMNFLCA_PFOHIAKHDGO_TypeDefinitionIndex = 41561;

class BJKBAMNFLCA_PFOHIAKHDGO : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::BJKBAMNFLCA* KLHPEBKNIFB; // 0x18
	::System::Boolean AMGAAHMANDM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_PFOHIAKHDGO__CTOR_OFFSET))(this);
	}

	::System::Void NFHLEEFMHCN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_PFOHIAKHDGO_NFHLEEFMHCN_OFFSET))(this, BHDNBGLCNOM);
	}
};
