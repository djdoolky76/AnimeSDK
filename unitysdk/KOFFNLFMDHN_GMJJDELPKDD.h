#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NLGHFPFLLHA;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KOFFNLFMDHN_GMJJDELPKDD_FEAGAMFEPLO_OFFSET UNITYSDK_OFFSET(0xD4100F0)
#define KOFFNLFMDHN_GMJJDELPKDD_LDGNPFGDDBG_OFFSET UNITYSDK_OFFSET(0xD4100E0)
#define KOFFNLFMDHN_GMJJDELPKDD__CTOR_OFFSET UNITYSDK_OFFSET(0xD4100D0)

inline static constexpr unsigned int KOFFNLFMDHN_GMJJDELPKDD_TypeDefinitionIndex = 60118;

class KOFFNLFMDHN_GMJJDELPKDD : public ::System::Object
{
public:
	::System::Action_1<::NLGHFPFLLHA*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_GMJJDELPKDD__CTOR_OFFSET))(this);
	}

	::System::Void LDGNPFGDDBG(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_GMJJDELPKDD_LDGNPFGDDBG_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void FEAGAMFEPLO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_GMJJDELPKDD_FEAGAMFEPLO_OFFSET))(this, GLAOEHCGCFO);
	}
};
