#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

class AEDJLOFACHD;
class NKBLNLIKBLO;

#define AJLPDEBPFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x16D65F30)

inline static constexpr unsigned int AJLPDEBPFDC_TypeDefinitionIndex = 83540;

class AJLPDEBPFDC : public ::System::Object
{
public:
	::NKBLNLIKBLO* POCLOKCIJAL; // 0x10
	::AEDJLOFACHD* BEKAGNFAFGI; // 0x18
	::MoleMole::InputLogicEventType MBEHILFGMGI; // 0x20

	::System::Void _ctor(::MoleMole::InputLogicEventType MBEHILFGMGI, ::AEDJLOFACHD* BEKAGNFAFGI, ::NKBLNLIKBLO* POCLOKCIJAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::AEDJLOFACHD*, ::NKBLNLIKBLO*))((::PBYTE)hIl2Cpp + AJLPDEBPFDC__CTOR_OFFSET))(this, MBEHILFGMGI, BEKAGNFAFGI, POCLOKCIJAL);
	}
};
