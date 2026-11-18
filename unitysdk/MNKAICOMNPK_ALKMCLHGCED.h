#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAvatar; }
namespace System { class Action; }

#define MNKAICOMNPK_ALKMCLHGCED_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xFA77140)
#define MNKAICOMNPK_ALKMCLHGCED__CTOR_OFFSET UNITYSDK_OFFSET(0xFA77130)

inline static constexpr unsigned int MNKAICOMNPK_ALKMCLHGCED_TypeDefinitionIndex = 38501;

class MNKAICOMNPK_ALKMCLHGCED : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKAICOMNPK_ALKMCLHGCED__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUIAvatar* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIAvatar*))((::PBYTE)hIl2Cpp + MNKAICOMNPK_ALKMCLHGCED_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
