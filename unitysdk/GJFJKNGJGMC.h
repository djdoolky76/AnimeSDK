#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMEDHELDEM.h"

namespace MoleMole { class UIMainCityInteractButtonChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define GJFJKNGJGMC_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x18148750)
#define GJFJKNGJGMC__CTOR_OFFSET UNITYSDK_OFFSET(0x18148740)

inline static constexpr unsigned int GJFJKNGJGMC_TypeDefinitionIndex = 63904;

class GJFJKNGJGMC : public ::IFMEDHELDEM
{
public:
	::MoleMole::UIWindowController* FKJAHOHKHAK; // 0x10
	::IFMEDHELDEM* JBKCJLPCGCH; // 0x18
	::MoleMole::UIMainCityInteractButtonChildWindowController* PBBLLCOLANE; // 0x20

	::System::Void _ctor(::MoleMole::UIWindowController* FKJAHOHKHAK, ::MoleMole::UIMainCityInteractButtonChildWindowController* PBBLLCOLANE, ::IFMEDHELDEM* JBKCJLPCGCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIMainCityInteractButtonChildWindowController*, ::IFMEDHELDEM*))((::PBYTE)hIl2Cpp + GJFJKNGJGMC__CTOR_OFFSET))(this, FKJAHOHKHAK, PBBLLCOLANE, JBKCJLPCGCH);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFJKNGJGMC_GPKMPDHNCGL_OFFSET))(this);
	}
};
