#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_DGHCCFFPDOJ_JOPGGFCEGBA_OFFSET UNITYSDK_OFFSET(0x19DF8AD0)
#define HCIFNBFMBFJ_DGHCCFFPDOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF8AC0)

inline static constexpr unsigned int HCIFNBFMBFJ_DGHCCFFPDOJ_TypeDefinitionIndex = 50150;

class HCIFNBFMBFJ_DGHCCFFPDOJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityDirectionalBlurEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DGHCCFFPDOJ__CTOR_OFFSET))(this);
	}

	::System::Void JOPGGFCEGBA(::MoleMole::Config::ConfigEntityDirectionalBlurEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityDirectionalBlurEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DGHCCFFPDOJ_JOPGGFCEGBA_OFFSET))(this, NOJAMHPFFPG);
	}
};
