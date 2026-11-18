#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace System { class Action; }

#define ILKGKEHILPG_KOFDEEHHOFM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15C1B670)
#define ILKGKEHILPG_KOFDEEHHOFM__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1B660)

inline static constexpr unsigned int ILKGKEHILPG_KOFDEEHHOFM_TypeDefinitionIndex = 65537;

class ILKGKEHILPG_KOFDEEHHOFM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKGKEHILPG_KOFDEEHHOFM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigEtherEyes* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*))((::PBYTE)hIl2Cpp + ILKGKEHILPG_KOFDEEHHOFM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
