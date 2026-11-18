#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLensDistortions; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_OHPFPKBGODG_HLBGKKDKECJ_OFFSET UNITYSDK_OFFSET(0x15D9DF80)
#define HCIFNBFMBFJ_OHPFPKBGODG__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9DF70)

inline static constexpr unsigned int HCIFNBFMBFJ_OHPFPKBGODG_TypeDefinitionIndex = 50170;

class HCIFNBFMBFJ_OHPFPKBGODG : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigLensDistortions*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OHPFPKBGODG__CTOR_OFFSET))(this);
	}

	::System::Void HLBGKKDKECJ(::MoleMole::Config::ConfigLensDistortions* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLensDistortions*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OHPFPKBGODG_HLBGKKDKECJ_OFFSET))(this, NOJAMHPFFPG);
	}
};
