#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MCNEECFDJEC;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KOFFNLFMDHN_LMEGJKOAMDI_GOOBFFEFLAG_OFFSET UNITYSDK_OFFSET(0x15802F00)
#define KOFFNLFMDHN_LMEGJKOAMDI_JLLHEPMEGEP_OFFSET UNITYSDK_OFFSET(0x15802E90)
#define KOFFNLFMDHN_LMEGJKOAMDI__CTOR_OFFSET UNITYSDK_OFFSET(0x15802E80)

inline static constexpr unsigned int KOFFNLFMDHN_LMEGJKOAMDI_TypeDefinitionIndex = 60115;

class KOFFNLFMDHN_LMEGJKOAMDI : public ::System::Object
{
public:
	::System::Action_1<::MCNEECFDJEC*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_LMEGJKOAMDI__CTOR_OFFSET))(this);
	}

	::System::Void JLLHEPMEGEP(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_LMEGJKOAMDI_JLLHEPMEGEP_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void GOOBFFEFLAG(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_LMEGJKOAMDI_GOOBFFEFLAG_OFFSET))(this, JMFEPDAHBED);
	}
};
