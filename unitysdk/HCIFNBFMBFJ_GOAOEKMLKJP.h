#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigNapBlooms; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_GOAOEKMLKJP_AGAPLNFIDJD_OFFSET UNITYSDK_OFFSET(0x15D9CD70)
#define HCIFNBFMBFJ_GOAOEKMLKJP__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9CD60)

inline static constexpr unsigned int HCIFNBFMBFJ_GOAOEKMLKJP_TypeDefinitionIndex = 50152;

class HCIFNBFMBFJ_GOAOEKMLKJP : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigNapBlooms*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GOAOEKMLKJP__CTOR_OFFSET))(this);
	}

	::System::Void AGAPLNFIDJD(::MoleMole::Config::ConfigNapBlooms* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigNapBlooms*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GOAOEKMLKJP_AGAPLNFIDJD_OFFSET))(this, NOJAMHPFFPG);
	}
};
