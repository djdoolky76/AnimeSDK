#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCharacterIgnisFatuusEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_PNLHAPIFKLN_ECMNBEDMDGB_OFFSET UNITYSDK_OFFSET(0x17E36D90)
#define HCIFNBFMBFJ_PNLHAPIFKLN__CTOR_OFFSET UNITYSDK_OFFSET(0x17E36D80)

inline static constexpr unsigned int HCIFNBFMBFJ_PNLHAPIFKLN_TypeDefinitionIndex = 50177;

class HCIFNBFMBFJ_PNLHAPIFKLN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PNLHAPIFKLN__CTOR_OFFSET))(this);
	}

	::System::Void ECMNBEDMDGB(::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PNLHAPIFKLN_ECMNBEDMDGB_OFFSET))(this, NOJAMHPFFPG);
	}
};
