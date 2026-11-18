#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJKBAMNFLCA;
class OAEFGCLEHHO;
namespace System { class Action; }

#define BJKBAMNFLCA_MJCFALEDODO_JNNFPOJDMBG_OFFSET UNITYSDK_OFFSET(0x169F79D0)
#define BJKBAMNFLCA_MJCFALEDODO__CTOR_OFFSET UNITYSDK_OFFSET(0x169F79C0)

inline static constexpr unsigned int BJKBAMNFLCA_MJCFALEDODO_TypeDefinitionIndex = 41558;

class BJKBAMNFLCA_MJCFALEDODO : public ::System::Object
{
public:
	::BJKBAMNFLCA* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_MJCFALEDODO__CTOR_OFFSET))(this);
	}

	::System::Void JNNFPOJDMBG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_MJCFALEDODO_JNNFPOJDMBG_OFFSET))(this, BHDNBGLCNOM);
	}
};
