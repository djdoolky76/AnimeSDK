#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KOFFNLFMDHN_BKMBEOLECNI_FKGIMDKDJEK_OFFSET UNITYSDK_OFFSET(0x1791A550)
#define KOFFNLFMDHN_BKMBEOLECNI_FMFIJLCKDDD_OFFSET UNITYSDK_OFFSET(0x1791A540)
#define KOFFNLFMDHN_BKMBEOLECNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A530)

inline static constexpr unsigned int KOFFNLFMDHN_BKMBEOLECNI_TypeDefinitionIndex = 60117;

class KOFFNLFMDHN_BKMBEOLECNI : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_BKMBEOLECNI__CTOR_OFFSET))(this);
	}

	::System::Void FMFIJLCKDDD(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_BKMBEOLECNI_FMFIJLCKDDD_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void FKGIMDKDJEK(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_BKMBEOLECNI_FKGIMDKDJEK_OFFSET))(this, JMFEPDAHBED);
	}
};
