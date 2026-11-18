#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCullingEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_OHPHOHFMIAA_BJHABBDKIJC_OFFSET UNITYSDK_OFFSET(0x146E6C40)
#define HCIFNBFMBFJ_OHPHOHFMIAA__CTOR_OFFSET UNITYSDK_OFFSET(0x146E6C30)

inline static constexpr unsigned int HCIFNBFMBFJ_OHPHOHFMIAA_TypeDefinitionIndex = 50158;

class HCIFNBFMBFJ_OHPHOHFMIAA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityCullingEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OHPHOHFMIAA__CTOR_OFFSET))(this);
	}

	::System::Void BJHABBDKIJC(::MoleMole::Config::ConfigEntityCullingEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCullingEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OHPHOHFMIAA_BJHABBDKIJC_OFFSET))(this, NOJAMHPFFPG);
	}
};
