#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityVREffectsEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_NJDNKLGIPKO_LAOLAAEDPFB_OFFSET UNITYSDK_OFFSET(0x11008E70)
#define HCIFNBFMBFJ_NJDNKLGIPKO__CTOR_OFFSET UNITYSDK_OFFSET(0x11008E60)

inline static constexpr unsigned int HCIFNBFMBFJ_NJDNKLGIPKO_TypeDefinitionIndex = 50154;

class HCIFNBFMBFJ_NJDNKLGIPKO : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityVREffectsEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NJDNKLGIPKO__CTOR_OFFSET))(this);
	}

	::System::Void LAOLAAEDPFB(::MoleMole::Config::ConfigEntityVREffectsEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityVREffectsEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NJDNKLGIPKO_LAOLAAEDPFB_OFFSET))(this, NOJAMHPFFPG);
	}
};
