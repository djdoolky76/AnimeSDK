#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_KHMOIMHEOKD_EJAENCBHNMA_OFFSET UNITYSDK_OFFSET(0x15227BE0)
#define KNLKGLCAPGH_KHMOIMHEOKD__CTOR_OFFSET UNITYSDK_OFFSET(0x15227BD0)

inline static constexpr unsigned int KNLKGLCAPGH_KHMOIMHEOKD_TypeDefinitionIndex = 41111;

class KNLKGLCAPGH_KHMOIMHEOKD : public ::System::Object
{
public:
	::System::Action* CAAFEGLOALC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_KHMOIMHEOKD__CTOR_OFFSET))(this);
	}

	::System::Void EJAENCBHNMA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_KHMOIMHEOKD_EJAENCBHNMA_OFFSET))(this, BHDNBGLCNOM);
	}
};
