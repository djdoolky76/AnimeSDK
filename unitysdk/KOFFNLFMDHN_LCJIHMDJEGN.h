#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KOFFNLFMDHN_LCJIHMDJEGN_MLGBDHPAKEC_OFFSET UNITYSDK_OFFSET(0x16351030)
#define KOFFNLFMDHN_LCJIHMDJEGN_NKFIIIDHKPO_OFFSET UNITYSDK_OFFSET(0x16351020)
#define KOFFNLFMDHN_LCJIHMDJEGN__CTOR_OFFSET UNITYSDK_OFFSET(0x16351010)

inline static constexpr unsigned int KOFFNLFMDHN_LCJIHMDJEGN_TypeDefinitionIndex = 60132;

class KOFFNLFMDHN_LCJIHMDJEGN : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_LCJIHMDJEGN__CTOR_OFFSET))(this);
	}

	::System::Void NKFIIIDHKPO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_LCJIHMDJEGN_NKFIIIDHKPO_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MLGBDHPAKEC(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_LCJIHMDJEGN_MLGBDHPAKEC_OFFSET))(this, JMFEPDAHBED);
	}
};
