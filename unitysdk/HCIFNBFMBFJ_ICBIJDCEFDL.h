#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_ICBIJDCEFDL_HLCFPDHPABJ_OFFSET UNITYSDK_OFFSET(0x14077940)
#define HCIFNBFMBFJ_ICBIJDCEFDL__CTOR_OFFSET UNITYSDK_OFFSET(0x14077930)

inline static constexpr unsigned int HCIFNBFMBFJ_ICBIJDCEFDL_TypeDefinitionIndex = 50166;

class HCIFNBFMBFJ_ICBIJDCEFDL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityAmplifyOcclusionEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ICBIJDCEFDL__CTOR_OFFSET))(this);
	}

	::System::Void HLCFPDHPABJ(::MoleMole::Config::ConfigEntityAmplifyOcclusionEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ICBIJDCEFDL_HLCFPDHPABJ_OFFSET))(this, NOJAMHPFFPG);
	}
};
