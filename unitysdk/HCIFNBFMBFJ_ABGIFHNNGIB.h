#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityLensDirtEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_ABGIFHNNGIB_NKLCBHLNKPC_OFFSET UNITYSDK_OFFSET(0x146E5F30)
#define HCIFNBFMBFJ_ABGIFHNNGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x146E5F20)

inline static constexpr unsigned int HCIFNBFMBFJ_ABGIFHNNGIB_TypeDefinitionIndex = 50176;

class HCIFNBFMBFJ_ABGIFHNNGIB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityLensDirtEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ABGIFHNNGIB__CTOR_OFFSET))(this);
	}

	::System::Void NKLCBHLNKPC(::MoleMole::Config::ConfigEntityLensDirtEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityLensDirtEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ABGIFHNNGIB_NKLCBHLNKPC_OFFSET))(this, NOJAMHPFFPG);
	}
};
