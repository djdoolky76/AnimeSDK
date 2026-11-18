#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityRadialBlurs; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_JNEHHKENFOG_GPPMLFOPJAM_OFFSET UNITYSDK_OFFSET(0x17E36380)
#define HCIFNBFMBFJ_JNEHHKENFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x17E36370)

inline static constexpr unsigned int HCIFNBFMBFJ_JNEHHKENFOG_TypeDefinitionIndex = 50161;

class HCIFNBFMBFJ_JNEHHKENFOG : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityRadialBlurs*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JNEHHKENFOG__CTOR_OFFSET))(this);
	}

	::System::Void GPPMLFOPJAM(::MoleMole::Config::ConfigEntityRadialBlurs* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRadialBlurs*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JNEHHKENFOG_GPPMLFOPJAM_OFFSET))(this, NOJAMHPFFPG);
	}
};
