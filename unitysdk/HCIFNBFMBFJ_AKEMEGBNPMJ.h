#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAvatarColorCorrections; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_AKEMEGBNPMJ_NDCCFJDICIH_OFFSET UNITYSDK_OFFSET(0x17A37630)
#define HCIFNBFMBFJ_AKEMEGBNPMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17A37620)

inline static constexpr unsigned int HCIFNBFMBFJ_AKEMEGBNPMJ_TypeDefinitionIndex = 50179;

class HCIFNBFMBFJ_AKEMEGBNPMJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityAvatarColorCorrections*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AKEMEGBNPMJ__CTOR_OFFSET))(this);
	}

	::System::Void NDCCFJDICIH(::MoleMole::Config::ConfigEntityAvatarColorCorrections* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAvatarColorCorrections*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AKEMEGBNPMJ_NDCCFJDICIH_OFFSET))(this, NOJAMHPFFPG);
	}
};
