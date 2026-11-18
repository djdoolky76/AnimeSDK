#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceAmbientOcclusionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_IEMDKKHHMEM_EFGIJPMJNPB_OFFSET UNITYSDK_OFFSET(0x16CE0B20)
#define HCIFNBFMBFJ_IEMDKKHHMEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE0B10)

inline static constexpr unsigned int HCIFNBFMBFJ_IEMDKKHHMEM_TypeDefinitionIndex = 50139;

class HCIFNBFMBFJ_IEMDKKHHMEM : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IEMDKKHHMEM__CTOR_OFFSET))(this);
	}

	::System::Void EFGIJPMJNPB(::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IEMDKKHHMEM_EFGIJPMJNPB_OFFSET))(this, NOJAMHPFFPG);
	}
};
