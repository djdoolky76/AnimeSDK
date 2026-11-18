#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCausticsEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_OHHKPBHCLME_MOIPCIKKGLB_OFFSET UNITYSDK_OFFSET(0x17AEBEE0)
#define HCIFNBFMBFJ_OHHKPBHCLME__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEBED0)

inline static constexpr unsigned int HCIFNBFMBFJ_OHHKPBHCLME_TypeDefinitionIndex = 50171;

class HCIFNBFMBFJ_OHHKPBHCLME : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityCausticsEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OHHKPBHCLME__CTOR_OFFSET))(this);
	}

	::System::Void MOIPCIKKGLB(::MoleMole::Config::ConfigEntityCausticsEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCausticsEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OHHKPBHCLME_MOIPCIKKGLB_OFFSET))(this, NOJAMHPFFPG);
	}
};
