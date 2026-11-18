#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHack; }
namespace System { class Action; }

#define GKPOLMILFPP_JGACHCHCDLM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1490A850)
#define GKPOLMILFPP_JGACHCHCDLM__CTOR_OFFSET UNITYSDK_OFFSET(0x1490A840)

inline static constexpr unsigned int GKPOLMILFPP_JGACHCHCDLM_TypeDefinitionIndex = 45680;

class GKPOLMILFPP_JGACHCHCDLM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPOLMILFPP_JGACHCHCDLM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigHack* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHack*))((::PBYTE)hIl2Cpp + GKPOLMILFPP_JGACHCHCDLM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
