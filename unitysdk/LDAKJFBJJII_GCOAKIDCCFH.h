#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessoryEffect; }
namespace System { class Action; }

#define LDAKJFBJJII_GCOAKIDCCFH_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15BB73E0)
#define LDAKJFBJJII_GCOAKIDCCFH__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB73D0)

inline static constexpr unsigned int LDAKJFBJJII_GCOAKIDCCFH_TypeDefinitionIndex = 81500;

class LDAKJFBJJII_GCOAKIDCCFH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAKJFBJJII_GCOAKIDCCFH__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigPlayerAccessoryEffect* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayerAccessoryEffect*))((::PBYTE)hIl2Cpp + LDAKJFBJJII_GCOAKIDCCFH_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
