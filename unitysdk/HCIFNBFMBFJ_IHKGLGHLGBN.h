#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_IHKGLGHLGBN_BMJJCNDLGID_OFFSET UNITYSDK_OFFSET(0x14077BB0)
#define HCIFNBFMBFJ_IHKGLGHLGBN__CTOR_OFFSET UNITYSDK_OFFSET(0x14077BA0)

inline static constexpr unsigned int HCIFNBFMBFJ_IHKGLGHLGBN_TypeDefinitionIndex = 50146;

class HCIFNBFMBFJ_IHKGLGHLGBN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityUnsharpMaskEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IHKGLGHLGBN__CTOR_OFFSET))(this);
	}

	::System::Void BMJJCNDLGID(::MoleMole::Config::ConfigEntityUnsharpMaskEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnsharpMaskEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IHKGLGHLGBN_BMJJCNDLGID_OFFSET))(this, NOJAMHPFFPG);
	}
};
