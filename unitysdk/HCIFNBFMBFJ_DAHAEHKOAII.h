#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityDistortionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_DAHAEHKOAII_FHJIKFPGFIA_OFFSET UNITYSDK_OFFSET(0x13D82240)
#define HCIFNBFMBFJ_DAHAEHKOAII__CTOR_OFFSET UNITYSDK_OFFSET(0x13D82230)

inline static constexpr unsigned int HCIFNBFMBFJ_DAHAEHKOAII_TypeDefinitionIndex = 50155;

class HCIFNBFMBFJ_DAHAEHKOAII : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityDistortionEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DAHAEHKOAII__CTOR_OFFSET))(this);
	}

	::System::Void FHJIKFPGFIA(::MoleMole::Config::ConfigEntityDistortionEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityDistortionEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DAHAEHKOAII_FHJIKFPGFIA_OFFSET))(this, NOJAMHPFFPG);
	}
};
