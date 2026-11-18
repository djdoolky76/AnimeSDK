#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_NIEGNCCNCNH_BGOCBHFFENM_OFFSET UNITYSDK_OFFSET(0x146E69D0)
#define HCIFNBFMBFJ_NIEGNCCNCNH__CTOR_OFFSET UNITYSDK_OFFSET(0x146E69C0)

inline static constexpr unsigned int HCIFNBFMBFJ_NIEGNCCNCNH_TypeDefinitionIndex = 50140;

class HCIFNBFMBFJ_NIEGNCCNCNH : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityWhiteBalanceEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NIEGNCCNCNH__CTOR_OFFSET))(this);
	}

	::System::Void BGOCBHFFENM(::MoleMole::Config::ConfigEntityWhiteBalanceEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityWhiteBalanceEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NIEGNCCNCNH_BGOCBHFFENM_OFFSET))(this, NOJAMHPFFPG);
	}
};
