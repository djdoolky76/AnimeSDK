#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_BBGMHLDJEOI_NACPFCPBGNM_OFFSET UNITYSDK_OFFSET(0x146E61A0)
#define HCIFNBFMBFJ_BBGMHLDJEOI__CTOR_OFFSET UNITYSDK_OFFSET(0x146E6190)

inline static constexpr unsigned int HCIFNBFMBFJ_BBGMHLDJEOI_TypeDefinitionIndex = 50163;

class HCIFNBFMBFJ_BBGMHLDJEOI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BBGMHLDJEOI__CTOR_OFFSET))(this);
	}

	::System::Void NACPFCPBGNM(::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BBGMHLDJEOI_NACPFCPBGNM_OFFSET))(this, NOJAMHPFFPG);
	}
};
