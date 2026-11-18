#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_BBBBMJLGOBH_GLDLKJPHFIA_OFFSET UNITYSDK_OFFSET(0x16F23880)
#define HCIFNBFMBFJ_BBBBMJLGOBH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F23870)

inline static constexpr unsigned int HCIFNBFMBFJ_BBBBMJLGOBH_TypeDefinitionIndex = 50160;

class HCIFNBFMBFJ_BBBBMJLGOBH : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityScreenEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BBBBMJLGOBH__CTOR_OFFSET))(this);
	}

	::System::Void GLDLKJPHFIA(::MoleMole::Config::ConfigEntityScreenEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BBBBMJLGOBH_GLDLKJPHFIA_OFFSET))(this, NOJAMHPFFPG);
	}
};
