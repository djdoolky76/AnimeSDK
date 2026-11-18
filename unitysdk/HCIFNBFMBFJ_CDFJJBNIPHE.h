#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_CDFJJBNIPHE_MLJIFLLKEMG_OFFSET UNITYSDK_OFFSET(0x17A37A50)
#define HCIFNBFMBFJ_CDFJJBNIPHE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A37A40)

inline static constexpr unsigned int HCIFNBFMBFJ_CDFJJBNIPHE_TypeDefinitionIndex = 50141;

class HCIFNBFMBFJ_CDFJJBNIPHE : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityLiftGammaGainEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CDFJJBNIPHE__CTOR_OFFSET))(this);
	}

	::System::Void MLJIFLLKEMG(::MoleMole::Config::ConfigEntityLiftGammaGainEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityLiftGammaGainEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CDFJJBNIPHE_MLJIFLLKEMG_OFFSET))(this, NOJAMHPFFPG);
	}
};
