#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityColorCurvesEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_AGKABEOLADP_ICDMEOMEKCC_OFFSET UNITYSDK_OFFSET(0x17E35A50)
#define HCIFNBFMBFJ_AGKABEOLADP__CTOR_OFFSET UNITYSDK_OFFSET(0x17E35A40)

inline static constexpr unsigned int HCIFNBFMBFJ_AGKABEOLADP_TypeDefinitionIndex = 50168;

class HCIFNBFMBFJ_AGKABEOLADP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityColorCurvesEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AGKABEOLADP__CTOR_OFFSET))(this);
	}

	::System::Void ICDMEOMEKCC(::MoleMole::Config::ConfigEntityColorCurvesEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityColorCurvesEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AGKABEOLADP_ICDMEOMEKCC_OFFSET))(this, NOJAMHPFFPG);
	}
};
