#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDepthOfFieldEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_NICGBFBHANB_DEIMNLGNJCH_OFFSET UNITYSDK_OFFSET(0x17A38350)
#define HCIFNBFMBFJ_NICGBFBHANB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A38340)

inline static constexpr unsigned int HCIFNBFMBFJ_NICGBFBHANB_TypeDefinitionIndex = 50162;

class HCIFNBFMBFJ_NICGBFBHANB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigDepthOfFieldEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NICGBFBHANB__CTOR_OFFSET))(this);
	}

	::System::Void DEIMNLGNJCH(::MoleMole::Config::ConfigDepthOfFieldEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDepthOfFieldEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NICGBFBHANB_DEIMNLGNJCH_OFFSET))(this, NOJAMHPFFPG);
	}
};
