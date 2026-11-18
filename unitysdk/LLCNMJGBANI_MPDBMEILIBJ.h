#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTurnBaseBattle; }
namespace System { class Action; }

#define LLCNMJGBANI_MPDBMEILIBJ_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13D06EB0)
#define LLCNMJGBANI_MPDBMEILIBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13D06EA0)

inline static constexpr unsigned int LLCNMJGBANI_MPDBMEILIBJ_TypeDefinitionIndex = 50003;

class LLCNMJGBANI_MPDBMEILIBJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCNMJGBANI_MPDBMEILIBJ__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigTurnBaseBattle* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTurnBaseBattle*))((::PBYTE)hIl2Cpp + LLCNMJGBANI_MPDBMEILIBJ_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
