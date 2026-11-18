#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityMonsterIgnisFatuusEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_NFFJHABLDCF_HEDPHDOHCJG_OFFSET UNITYSDK_OFFSET(0x14077E20)
#define HCIFNBFMBFJ_NFFJHABLDCF__CTOR_OFFSET UNITYSDK_OFFSET(0x14077E10)

inline static constexpr unsigned int HCIFNBFMBFJ_NFFJHABLDCF_TypeDefinitionIndex = 50153;

class HCIFNBFMBFJ_NFFJHABLDCF : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NFFJHABLDCF__CTOR_OFFSET))(this);
	}

	::System::Void HEDPHDOHCJG(::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NFFJHABLDCF_HEDPHDOHCJG_OFFSET))(this, NOJAMHPFFPG);
	}
};
