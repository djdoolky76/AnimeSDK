#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_NNJPFALMJDO_DDDAOGOPFJF_OFFSET UNITYSDK_OFFSET(0x14078090)
#define HCIFNBFMBFJ_NNJPFALMJDO__CTOR_OFFSET UNITYSDK_OFFSET(0x14078080)

inline static constexpr unsigned int HCIFNBFMBFJ_NNJPFALMJDO_TypeDefinitionIndex = 50184;

class HCIFNBFMBFJ_NNJPFALMJDO : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NNJPFALMJDO__CTOR_OFFSET))(this);
	}

	::System::Void DDDAOGOPFJF(::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NNJPFALMJDO_DDDAOGOPFJF_OFFSET))(this, NOJAMHPFFPG);
	}
};
