#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OLFJIFCLOFO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KOFFNLFMDHN_FMIPNLHAFIM_BFLHCBJAJNG_OFFSET UNITYSDK_OFFSET(0xD410050)
#define KOFFNLFMDHN_FMIPNLHAFIM_FMIFOBOIGAJ_OFFSET UNITYSDK_OFFSET(0xD410060)
#define KOFFNLFMDHN_FMIPNLHAFIM__CTOR_OFFSET UNITYSDK_OFFSET(0xD410040)

inline static constexpr unsigned int KOFFNLFMDHN_FMIPNLHAFIM_TypeDefinitionIndex = 60119;

class KOFFNLFMDHN_FMIPNLHAFIM : public ::System::Object
{
public:
	::System::Action_1<::OLFJIFCLOFO*>* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_FMIPNLHAFIM__CTOR_OFFSET))(this);
	}

	::System::Void BFLHCBJAJNG(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_FMIPNLHAFIM_BFLHCBJAJNG_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void FMIFOBOIGAJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_FMIPNLHAFIM_FMIFOBOIGAJ_OFFSET))(this, GLAOEHCGCFO);
	}
};
