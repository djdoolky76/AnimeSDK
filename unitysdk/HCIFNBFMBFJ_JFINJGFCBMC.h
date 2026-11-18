#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAutoExposureEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_JFINJGFCBMC_PKNHCBFHPLN_OFFSET UNITYSDK_OFFSET(0x15D9DD10)
#define HCIFNBFMBFJ_JFINJGFCBMC__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9DD00)

inline static constexpr unsigned int HCIFNBFMBFJ_JFINJGFCBMC_TypeDefinitionIndex = 50165;

class HCIFNBFMBFJ_JFINJGFCBMC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityAutoExposureEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JFINJGFCBMC__CTOR_OFFSET))(this);
	}

	::System::Void PKNHCBFHPLN(::MoleMole::Config::ConfigEntityAutoExposureEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAutoExposureEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JFINJGFCBMC_PKNHCBFHPLN_OFFSET))(this, NOJAMHPFFPG);
	}
};
