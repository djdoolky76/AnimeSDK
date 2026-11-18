#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityColorLookupEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_CHFFEGGODLH_PDAJPAAFBFJ_OFFSET UNITYSDK_OFFSET(0x13D81FD0)
#define HCIFNBFMBFJ_CHFFEGGODLH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D81FC0)

inline static constexpr unsigned int HCIFNBFMBFJ_CHFFEGGODLH_TypeDefinitionIndex = 50178;

class HCIFNBFMBFJ_CHFFEGGODLH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityColorLookupEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CHFFEGGODLH__CTOR_OFFSET))(this);
	}

	::System::Void PDAJPAAFBFJ(::MoleMole::Config::ConfigEntityColorLookupEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityColorLookupEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CHFFEGGODLH_PDAJPAAFBFJ_OFFSET))(this, NOJAMHPFFPG);
	}
};
