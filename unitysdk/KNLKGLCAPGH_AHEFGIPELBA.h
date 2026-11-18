#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_AHEFGIPELBA_BJNEPJCHOIJ_OFFSET UNITYSDK_OFFSET(0x186468F0)
#define KNLKGLCAPGH_AHEFGIPELBA__CTOR_OFFSET UNITYSDK_OFFSET(0x186468E0)

inline static constexpr unsigned int KNLKGLCAPGH_AHEFGIPELBA_TypeDefinitionIndex = 41120;

class KNLKGLCAPGH_AHEFGIPELBA : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_AHEFGIPELBA__CTOR_OFFSET))(this);
	}

	::System::Void BJNEPJCHOIJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_AHEFGIPELBA_BJNEPJCHOIJ_OFFSET))(this, BHDNBGLCNOM);
	}
};
