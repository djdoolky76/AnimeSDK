#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityMotionBlurEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_PBMHMKJPNIM_EFJGLEOKIGO_OFFSET UNITYSDK_OFFSET(0x16CE0D90)
#define HCIFNBFMBFJ_PBMHMKJPNIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE0D80)

inline static constexpr unsigned int HCIFNBFMBFJ_PBMHMKJPNIM_TypeDefinitionIndex = 50174;

class HCIFNBFMBFJ_PBMHMKJPNIM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityMotionBlurEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PBMHMKJPNIM__CTOR_OFFSET))(this);
	}

	::System::Void EFJGLEOKIGO(::MoleMole::Config::ConfigEntityMotionBlurEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityMotionBlurEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PBMHMKJPNIM_EFJGLEOKIGO_OFFSET))(this, NOJAMHPFFPG);
	}
};
