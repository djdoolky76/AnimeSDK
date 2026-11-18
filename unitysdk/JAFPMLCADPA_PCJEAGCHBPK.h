#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FeverConfig; }
namespace System { class Action; }

#define JAFPMLCADPA_PCJEAGCHBPK_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1382B140)
#define JAFPMLCADPA_PCJEAGCHBPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1382B130)

inline static constexpr unsigned int JAFPMLCADPA_PCJEAGCHBPK_TypeDefinitionIndex = 53843;

class JAFPMLCADPA_PCJEAGCHBPK : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFPMLCADPA_PCJEAGCHBPK__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::FeverConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FeverConfig*))((::PBYTE)hIl2Cpp + JAFPMLCADPA_PCJEAGCHBPK_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
