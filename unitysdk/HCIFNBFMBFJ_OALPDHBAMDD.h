#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityPartialBlurEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_OALPDHBAMDD_OCDMGCNMEJL_OFFSET UNITYSDK_OFFSET(0x110090E0)
#define HCIFNBFMBFJ_OALPDHBAMDD__CTOR_OFFSET UNITYSDK_OFFSET(0x110090D0)

inline static constexpr unsigned int HCIFNBFMBFJ_OALPDHBAMDD_TypeDefinitionIndex = 50143;

class HCIFNBFMBFJ_OALPDHBAMDD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityPartialBlurEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OALPDHBAMDD__CTOR_OFFSET))(this);
	}

	::System::Void OCDMGCNMEJL(::MoleMole::Config::ConfigEntityPartialBlurEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityPartialBlurEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OALPDHBAMDD_OCDMGCNMEJL_OFFSET))(this, NOJAMHPFFPG);
	}
};
