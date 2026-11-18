#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FODIIEEKGDM;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KOFFNLFMDHN_MBMOIHDCIDB_IOLEGHFKNJL_OFFSET UNITYSDK_OFFSET(0x15172820)
#define KOFFNLFMDHN_MBMOIHDCIDB_MCCGFIAMLNJ_OFFSET UNITYSDK_OFFSET(0x15172830)
#define KOFFNLFMDHN_MBMOIHDCIDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15172810)

inline static constexpr unsigned int KOFFNLFMDHN_MBMOIHDCIDB_TypeDefinitionIndex = 60129;

class KOFFNLFMDHN_MBMOIHDCIDB : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_1<::FODIIEEKGDM*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_MBMOIHDCIDB__CTOR_OFFSET))(this);
	}

	::System::Void IOLEGHFKNJL(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_MBMOIHDCIDB_IOLEGHFKNJL_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MCCGFIAMLNJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_MBMOIHDCIDB_MCCGFIAMLNJ_OFFSET))(this, GLAOEHCGCFO);
	}
};
