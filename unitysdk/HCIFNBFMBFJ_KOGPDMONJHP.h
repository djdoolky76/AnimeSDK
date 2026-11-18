#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_KOGPDMONJHP_AGCABIEJAJB_OFFSET UNITYSDK_OFFSET(0x17A37CC0)
#define HCIFNBFMBFJ_KOGPDMONJHP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A37CB0)

inline static constexpr unsigned int HCIFNBFMBFJ_KOGPDMONJHP_TypeDefinitionIndex = 50145;

class HCIFNBFMBFJ_KOGPDMONJHP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KOGPDMONJHP__CTOR_OFFSET))(this);
	}

	::System::Void AGCABIEJAJB(::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KOGPDMONJHP_AGCABIEJAJB_OFFSET))(this, NOJAMHPFFPG);
	}
};
