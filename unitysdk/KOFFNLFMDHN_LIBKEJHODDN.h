#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCLLMGLGMHJ;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KOFFNLFMDHN_LIBKEJHODDN_EIBKIAHGLKO_OFFSET UNITYSDK_OFFSET(0x16351050)
#define KOFFNLFMDHN_LIBKEJHODDN_KHBKLHLAMFL_OFFSET UNITYSDK_OFFSET(0x163510C0)
#define KOFFNLFMDHN_LIBKEJHODDN__CTOR_OFFSET UNITYSDK_OFFSET(0x16351040)

inline static constexpr unsigned int KOFFNLFMDHN_LIBKEJHODDN_TypeDefinitionIndex = 60131;

class KOFFNLFMDHN_LIBKEJHODDN : public ::System::Object
{
public:
	::System::Action_1<::JCLLMGLGMHJ*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_LIBKEJHODDN__CTOR_OFFSET))(this);
	}

	::System::Void EIBKIAHGLKO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_LIBKEJHODDN_EIBKIAHGLKO_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KHBKLHLAMFL(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_LIBKEJHODDN_KHBKLHLAMFL_OFFSET))(this, JMFEPDAHBED);
	}
};
