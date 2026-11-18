#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMPBJOKPNAE.h"
#include "unitysdk/System/Object.h"

class KNLKGLCAPGH;
class OAEFGCLEHHO;
namespace MoleMole { class UserLocalDataItem; }
namespace System { class Action; }

#define KNLKGLCAPGH_FMCAPGMCBBA_HLLJGDDKLMD_OFFSET UNITYSDK_OFFSET(0x126A9640)
#define KNLKGLCAPGH_FMCAPGMCBBA_LINAOFCIOOE_OFFSET UNITYSDK_OFFSET(0x126A94E0)
#define KNLKGLCAPGH_FMCAPGMCBBA__CTOR_OFFSET UNITYSDK_OFFSET(0x126A94D0)

inline static constexpr unsigned int KNLKGLCAPGH_FMCAPGMCBBA_TypeDefinitionIndex = 41114;

class KNLKGLCAPGH_FMCAPGMCBBA : public ::System::Object
{
public:
	::KNLKGLCAPGH* KLHPEBKNIFB; // 0x10
	::System::Action* LPFMDKKFMBA; // 0x18
	::MoleMole::UserLocalDataItem* BNHIFIHNCHD; // 0x20
	::System::UInt32 PKMFBJMJCOO; // 0x28
	::JMPBJOKPNAE OBNIAHNMHPF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_FMCAPGMCBBA__CTOR_OFFSET))(this);
	}

	::System::Void LINAOFCIOOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_FMCAPGMCBBA_LINAOFCIOOE_OFFSET))(this);
	}

	::System::Void HLLJGDDKLMD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_FMCAPGMCBBA_HLLJGDDKLMD_OFFSET))(this, BHDNBGLCNOM);
	}
};
