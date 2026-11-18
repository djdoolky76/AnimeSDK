#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityLightingEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_NLDDLJICGPA_OIOPBDOMMKE_OFFSET UNITYSDK_OFFSET(0x17E36B20)
#define HCIFNBFMBFJ_NLDDLJICGPA__CTOR_OFFSET UNITYSDK_OFFSET(0x17E36B10)

inline static constexpr unsigned int HCIFNBFMBFJ_NLDDLJICGPA_TypeDefinitionIndex = 50164;

class HCIFNBFMBFJ_NLDDLJICGPA : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityLightingEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NLDDLJICGPA__CTOR_OFFSET))(this);
	}

	::System::Void OIOPBDOMMKE(::MoleMole::Config::ConfigEntityLightingEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityLightingEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NLDDLJICGPA_OIOPBDOMMKE_OFFSET))(this, NOJAMHPFFPG);
	}
};
