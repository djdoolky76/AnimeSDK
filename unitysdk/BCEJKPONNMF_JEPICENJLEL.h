#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGamepadTriggerEffect; }
namespace System { class Action; }

#define BCEJKPONNMF_JEPICENJLEL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x12D19D20)
#define BCEJKPONNMF_JEPICENJLEL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D19D10)

inline static constexpr unsigned int BCEJKPONNMF_JEPICENJLEL_TypeDefinitionIndex = 44174;

class BCEJKPONNMF_JEPICENJLEL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCEJKPONNMF_JEPICENJLEL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigGamepadTriggerEffect* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGamepadTriggerEffect*))((::PBYTE)hIl2Cpp + BCEJKPONNMF_JEPICENJLEL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
