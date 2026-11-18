#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityNapContactShadowEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_GFIEKFIAHOJ_LDCBLKPFOGB_OFFSET UNITYSDK_OFFSET(0x140776D0)
#define HCIFNBFMBFJ_GFIEKFIAHOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x140776C0)

inline static constexpr unsigned int HCIFNBFMBFJ_GFIEKFIAHOJ_TypeDefinitionIndex = 50183;

class HCIFNBFMBFJ_GFIEKFIAHOJ : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityNapContactShadowEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GFIEKFIAHOJ__CTOR_OFFSET))(this);
	}

	::System::Void LDCBLKPFOGB(::MoleMole::Config::ConfigEntityNapContactShadowEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityNapContactShadowEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GFIEKFIAHOJ_LDCBLKPFOGB_OFFSET))(this, NOJAMHPFFPG);
	}
};
