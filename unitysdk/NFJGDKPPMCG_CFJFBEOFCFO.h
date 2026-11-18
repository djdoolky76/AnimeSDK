#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardInteract; }
namespace System { class Action; }

#define NFJGDKPPMCG_CFJFBEOFCFO_FNPNPKNDFAP_OFFSET UNITYSDK_OFFSET(0x11589370)
#define NFJGDKPPMCG_CFJFBEOFCFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11589360)

inline static constexpr unsigned int NFJGDKPPMCG_CFJFBEOFCFO_TypeDefinitionIndex = 38983;

class NFJGDKPPMCG_CFJFBEOFCFO : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJGDKPPMCG_CFJFBEOFCFO__CTOR_OFFSET))(this);
	}

	::System::Void FNPNPKNDFAP(::MoleMole::Config::ConfigHollowChessboardInteract* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardInteract*))((::PBYTE)hIl2Cpp + NFJGDKPPMCG_CFJFBEOFCFO_FNPNPKNDFAP_OFFSET))(this, DFMKILICPFB);
	}
};
