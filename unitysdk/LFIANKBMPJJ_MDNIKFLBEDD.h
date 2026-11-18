#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMonsterAlerts; }
namespace System { class Action; }

#define LFIANKBMPJJ_MDNIKFLBEDD_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15187490)
#define LFIANKBMPJJ_MDNIKFLBEDD__CTOR_OFFSET UNITYSDK_OFFSET(0x15187480)

inline static constexpr unsigned int LFIANKBMPJJ_MDNIKFLBEDD_TypeDefinitionIndex = 39996;

class LFIANKBMPJJ_MDNIKFLBEDD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIANKBMPJJ_MDNIKFLBEDD__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigMonsterAlerts* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMonsterAlerts*))((::PBYTE)hIl2Cpp + LFIANKBMPJJ_MDNIKFLBEDD_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
