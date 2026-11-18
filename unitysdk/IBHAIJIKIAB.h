#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECNOPFLGPON.h"
#include "unitysdk/KKMBEJLNNHA.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HackerDroneConfig; }

#define IBHAIJIKIAB__CTOR_OFFSET UNITYSDK_OFFSET(0x181A4C50)

inline static constexpr unsigned int IBHAIJIKIAB_TypeDefinitionIndex = 43934;

class IBHAIJIKIAB : public ::System::Object
{
public:
	::KKMBEJLNNHA MJILBGIMKEO; // 0x10
	::MoleMole::EntityHandle CPLFOFKKGGO; // 0x38
	::ECNOPFLGPON MGOKODFLPPE; // 0x48
	::MoleMole::Config::HackerDroneConfig* AHMFPFACACD; // 0x68

	::System::Void _ctor(::MoleMole::EntityHandle KECKGDFIALJ, ::MoleMole::Config::HackerDroneConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::HackerDroneConfig*))((::PBYTE)hIl2Cpp + IBHAIJIKIAB__CTOR_OFFSET))(this, KECKGDFIALJ, DFMKILICPFB);
	}
};
