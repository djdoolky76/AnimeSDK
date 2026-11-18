#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAEINOBGKFO.h"
#include "unitysdk/System/Object.h"

class KOFFNLFMDHN;
class OAEFGCLEHHO;
namespace System { class Action; }

#define KOFFNLFMDHN_PIDCPAODGHD_EHENAOAEFCI_OFFSET UNITYSDK_OFFSET(0x1791A770)
#define KOFFNLFMDHN_PIDCPAODGHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A760)

inline static constexpr unsigned int KOFFNLFMDHN_PIDCPAODGHD_TypeDefinitionIndex = 60116;

class KOFFNLFMDHN_PIDCPAODGHD : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::KOFFNLFMDHN* KLHPEBKNIFB; // 0x18
	::System::Action* IFKOKLCPMNF; // 0x20
	::AAEINOBGKFO OBNIAHNMHPF; // 0x28
	::System::Int32 MGMDLMBEDJF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_PIDCPAODGHD__CTOR_OFFSET))(this);
	}

	::System::Void EHENAOAEFCI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_PIDCPAODGHD_EHENAOAEFCI_OFFSET))(this, PIIPCLCCOIG);
	}
};
