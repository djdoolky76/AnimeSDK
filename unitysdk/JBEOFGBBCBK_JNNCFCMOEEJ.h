#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuddyMisc; }
namespace System { class Action; }

#define JBEOFGBBCBK_JNNCFCMOEEJ_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xF88CA90)
#define JBEOFGBBCBK_JNNCFCMOEEJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF88CA80)

inline static constexpr unsigned int JBEOFGBBCBK_JNNCFCMOEEJ_TypeDefinitionIndex = 65166;

class JBEOFGBBCBK_JNNCFCMOEEJ : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEOFGBBCBK_JNNCFCMOEEJ__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigBuddyMisc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*))((::PBYTE)hIl2Cpp + JBEOFGBBCBK_JNNCFCMOEEJ_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
