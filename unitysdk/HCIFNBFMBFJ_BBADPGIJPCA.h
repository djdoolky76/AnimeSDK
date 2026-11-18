#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntitySplitToningEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_BBADPGIJPCA_OKHMBHCDKFG_OFFSET UNITYSDK_OFFSET(0x100F9170)
#define HCIFNBFMBFJ_BBADPGIJPCA__CTOR_OFFSET UNITYSDK_OFFSET(0x100F9160)

inline static constexpr unsigned int HCIFNBFMBFJ_BBADPGIJPCA_TypeDefinitionIndex = 50173;

class HCIFNBFMBFJ_BBADPGIJPCA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntitySplitToningEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BBADPGIJPCA__CTOR_OFFSET))(this);
	}

	::System::Void OKHMBHCDKFG(::MoleMole::Config::ConfigEntitySplitToningEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySplitToningEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BBADPGIJPCA_OKHMBHCDKFG_OFFSET))(this, NOJAMHPFFPG);
	}
};
