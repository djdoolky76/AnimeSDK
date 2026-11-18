#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigChromaticAberrations; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_DIBIKAAGJPN_BCFLDLFHGAP_OFFSET UNITYSDK_OFFSET(0x15D9CA50)
#define HCIFNBFMBFJ_DIBIKAAGJPN__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9CA40)

inline static constexpr unsigned int HCIFNBFMBFJ_DIBIKAAGJPN_TypeDefinitionIndex = 50144;

class HCIFNBFMBFJ_DIBIKAAGJPN : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigChromaticAberrations*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DIBIKAAGJPN__CTOR_OFFSET))(this);
	}

	::System::Void BCFLDLFHGAP(::MoleMole::Config::ConfigChromaticAberrations* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChromaticAberrations*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DIBIKAAGJPN_BCFLDLFHGAP_OFFSET))(this, NOJAMHPFFPG);
	}
};
