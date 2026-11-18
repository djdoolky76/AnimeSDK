#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJPDGONFBFB;
class OAEFGCLEHHO;
namespace System { class Action; }

#define BJKBAMNFLCA_MGGJAEOAFBO_NIBDBJKIGIL_OFFSET UNITYSDK_OFFSET(0x14C493D0)
#define BJKBAMNFLCA_MGGJAEOAFBO__CTOR_OFFSET UNITYSDK_OFFSET(0x14C493C0)

inline static constexpr unsigned int BJKBAMNFLCA_MGGJAEOAFBO_TypeDefinitionIndex = 41562;

class BJKBAMNFLCA_MGGJAEOAFBO : public ::System::Object
{
public:
	::JJPDGONFBFB* ECDFBPODEOB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_MGGJAEOAFBO__CTOR_OFFSET))(this);
	}

	::System::Void NIBDBJKIGIL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_MGGJAEOAFBO_NIBDBJKIGIL_OFFSET))(this, BHDNBGLCNOM);
	}
};
