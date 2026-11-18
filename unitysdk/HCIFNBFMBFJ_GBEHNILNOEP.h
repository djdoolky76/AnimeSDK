#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_GBEHNILNOEP_HDKDJMJAELH_OFFSET UNITYSDK_OFFSET(0x149FD1E0)
#define HCIFNBFMBFJ_GBEHNILNOEP__CTOR_OFFSET UNITYSDK_OFFSET(0x149FD1D0)

inline static constexpr unsigned int HCIFNBFMBFJ_GBEHNILNOEP_TypeDefinitionIndex = 50181;

class HCIFNBFMBFJ_GBEHNILNOEP : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityPaniniProjectionEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GBEHNILNOEP__CTOR_OFFSET))(this);
	}

	::System::Void HDKDJMJAELH(::MoleMole::Config::ConfigEntityPaniniProjectionEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityPaniniProjectionEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GBEHNILNOEP_HDKDJMJAELH_OFFSET))(this, NOJAMHPFFPG);
	}
};
