#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFXComicDotEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_GLHAAKMBHNO_BMDKGCPIBNK_OFFSET UNITYSDK_OFFSET(0x100F9650)
#define HCIFNBFMBFJ_GLHAAKMBHNO__CTOR_OFFSET UNITYSDK_OFFSET(0x100F9640)

inline static constexpr unsigned int HCIFNBFMBFJ_GLHAAKMBHNO_TypeDefinitionIndex = 50169;

class HCIFNBFMBFJ_GLHAAKMBHNO : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityFXComicDotEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GLHAAKMBHNO__CTOR_OFFSET))(this);
	}

	::System::Void BMDKGCPIBNK(::MoleMole::Config::ConfigEntityFXComicDotEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityFXComicDotEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GLHAAKMBHNO_BMDKGCPIBNK_OFFSET))(this, NOJAMHPFFPG);
	}
};
