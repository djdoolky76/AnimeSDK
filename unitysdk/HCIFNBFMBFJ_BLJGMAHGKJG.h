#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityColorAdjustments; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_BLJGMAHGKJG_BFBBLKADJEE_OFFSET UNITYSDK_OFFSET(0x17E35CC0)
#define HCIFNBFMBFJ_BLJGMAHGKJG__CTOR_OFFSET UNITYSDK_OFFSET(0x17E35CB0)

inline static constexpr unsigned int HCIFNBFMBFJ_BLJGMAHGKJG_TypeDefinitionIndex = 50175;

class HCIFNBFMBFJ_BLJGMAHGKJG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityColorAdjustments*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BLJGMAHGKJG__CTOR_OFFSET))(this);
	}

	::System::Void BFBBLKADJEE(::MoleMole::Config::ConfigEntityColorAdjustments* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityColorAdjustments*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BLJGMAHGKJG_BFBBLKADJEE_OFFSET))(this, NOJAMHPFFPG);
	}
};
