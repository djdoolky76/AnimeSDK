#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_LIAIOEODELI_OOOPNOKMJIA_OFFSET UNITYSDK_OFFSET(0x1493BB80)
#define HCIFNBFMBFJ_LIAIOEODELI__CTOR_OFFSET UNITYSDK_OFFSET(0x1493BB70)

inline static constexpr unsigned int HCIFNBFMBFJ_LIAIOEODELI_TypeDefinitionIndex = 50157;

class HCIFNBFMBFJ_LIAIOEODELI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LIAIOEODELI__CTOR_OFFSET))(this);
	}

	::System::Void OOOPNOKMJIA(::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LIAIOEODELI_OOOPNOKMJIA_OFFSET))(this, NOJAMHPFFPG);
	}
};
