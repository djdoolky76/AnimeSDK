#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityChannelMixerEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_JBMJJPJPLDP_NJLBFMNHMJP_OFFSET UNITYSDK_OFFSET(0x100F9B30)
#define HCIFNBFMBFJ_JBMJJPJPLDP__CTOR_OFFSET UNITYSDK_OFFSET(0x100F9B20)

inline static constexpr unsigned int HCIFNBFMBFJ_JBMJJPJPLDP_TypeDefinitionIndex = 50147;

class HCIFNBFMBFJ_JBMJJPJPLDP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityChannelMixerEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JBMJJPJPLDP__CTOR_OFFSET))(this);
	}

	::System::Void NJLBFMNHMJP(::MoleMole::Config::ConfigEntityChannelMixerEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityChannelMixerEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JBMJJPJPLDP_NJLBFMNHMJP_OFFSET))(this, NOJAMHPFFPG);
	}
};
