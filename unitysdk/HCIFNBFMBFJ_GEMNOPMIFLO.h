#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityGlitchEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_GEMNOPMIFLO_PJGDACJOGNE_OFFSET UNITYSDK_OFFSET(0x100F93E0)
#define HCIFNBFMBFJ_GEMNOPMIFLO__CTOR_OFFSET UNITYSDK_OFFSET(0x100F93D0)

inline static constexpr unsigned int HCIFNBFMBFJ_GEMNOPMIFLO_TypeDefinitionIndex = 50149;

class HCIFNBFMBFJ_GEMNOPMIFLO : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityGlitchEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GEMNOPMIFLO__CTOR_OFFSET))(this);
	}

	::System::Void PJGDACJOGNE(::MoleMole::Config::ConfigEntityGlitchEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityGlitchEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GEMNOPMIFLO_PJGDACJOGNE_OFFSET))(this, NOJAMHPFFPG);
	}
};
