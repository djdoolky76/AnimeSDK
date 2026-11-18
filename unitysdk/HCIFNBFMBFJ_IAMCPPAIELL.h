#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFXColorCorrections; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_IAMCPPAIELL_BHGPMBEGAHI_OFFSET UNITYSDK_OFFSET(0x15D9D190)
#define HCIFNBFMBFJ_IAMCPPAIELL__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9D180)

inline static constexpr unsigned int HCIFNBFMBFJ_IAMCPPAIELL_TypeDefinitionIndex = 50156;

class HCIFNBFMBFJ_IAMCPPAIELL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityFXColorCorrections*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IAMCPPAIELL__CTOR_OFFSET))(this);
	}

	::System::Void BHGPMBEGAHI(::MoleMole::Config::ConfigEntityFXColorCorrections* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityFXColorCorrections*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IAMCPPAIELL_BHGPMBEGAHI_OFFSET))(this, NOJAMHPFFPG);
	}
};
