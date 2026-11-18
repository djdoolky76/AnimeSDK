#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDALIFLELHB;
class LKMLFIAKFOO;
namespace System { class Action; }

#define LKMLFIAKFOO_AEDDBFNAFCI_FOLGELEPPCK_OFFSET UNITYSDK_OFFSET(0x158F4320)
#define LKMLFIAKFOO_AEDDBFNAFCI__CTOR_OFFSET UNITYSDK_OFFSET(0x158F4310)

inline static constexpr unsigned int LKMLFIAKFOO_AEDDBFNAFCI_TypeDefinitionIndex = 43591;

class LKMLFIAKFOO_AEDDBFNAFCI : public ::System::Object
{
public:
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_AEDDBFNAFCI__CTOR_OFFSET))(this);
	}

	::System::Void FOLGELEPPCK(::EDALIFLELHB* DMEJFNOLKIF)
	{
		return ((::System::Void(*)(::PVOID, ::EDALIFLELHB*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_AEDDBFNAFCI_FOLGELEPPCK_OFFSET))(this, DMEJFNOLKIF);
	}
};
