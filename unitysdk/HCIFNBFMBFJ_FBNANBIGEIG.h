#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFXFogEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_FBNANBIGEIG_ABHMDDNMPGL_OFFSET UNITYSDK_OFFSET(0x146E6410)
#define HCIFNBFMBFJ_FBNANBIGEIG__CTOR_OFFSET UNITYSDK_OFFSET(0x146E6400)

inline static constexpr unsigned int HCIFNBFMBFJ_FBNANBIGEIG_TypeDefinitionIndex = 50148;

class HCIFNBFMBFJ_FBNANBIGEIG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityFXFogEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FBNANBIGEIG__CTOR_OFFSET))(this);
	}

	::System::Void ABHMDDNMPGL(::MoleMole::Config::ConfigEntityFXFogEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityFXFogEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FBNANBIGEIG_ABHMDDNMPGL_OFFSET))(this, NOJAMHPFFPG);
	}
};
