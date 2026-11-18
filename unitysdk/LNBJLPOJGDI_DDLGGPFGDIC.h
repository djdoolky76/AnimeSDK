#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLinkZone; }
namespace System { class Action; }

#define LNBJLPOJGDI_DDLGGPFGDIC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16C68920)
#define LNBJLPOJGDI_DDLGGPFGDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C68910)

inline static constexpr unsigned int LNBJLPOJGDI_DDLGGPFGDIC_TypeDefinitionIndex = 43182;

class LNBJLPOJGDI_DDLGGPFGDIC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBJLPOJGDI_DDLGGPFGDIC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigLinkZone* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*))((::PBYTE)hIl2Cpp + LNBJLPOJGDI_DDLGGPFGDIC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
