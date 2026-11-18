#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMEDHELDEM.h"

namespace MoleMole { class UIMainCityInteractButtonChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define JOEGCPIACDC_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x157D4390)
#define JOEGCPIACDC__CTOR_OFFSET UNITYSDK_OFFSET(0x157D4380)

inline static constexpr unsigned int JOEGCPIACDC_TypeDefinitionIndex = 43090;

class JOEGCPIACDC : public ::IFMEDHELDEM
{
public:
	::MoleMole::UIWindowController* FKJAHOHKHAK; // 0x10
	::MoleMole::UIMainCityInteractButtonChildWindowController* PBBLLCOLANE; // 0x18
	::IFMEDHELDEM* JBKCJLPCGCH; // 0x20

	::System::Void _ctor(::MoleMole::UIWindowController* FKJAHOHKHAK, ::MoleMole::UIMainCityInteractButtonChildWindowController* PBBLLCOLANE, ::IFMEDHELDEM* JBKCJLPCGCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIMainCityInteractButtonChildWindowController*, ::IFMEDHELDEM*))((::PBYTE)hIl2Cpp + JOEGCPIACDC__CTOR_OFFSET))(this, FKJAHOHKHAK, PBBLLCOLANE, JBKCJLPCGCH);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEGCPIACDC_GPKMPDHNCGL_OFFSET))(this);
	}
};
