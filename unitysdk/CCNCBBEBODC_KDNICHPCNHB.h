#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGoalPath; }
namespace System { class Action; }

#define CCNCBBEBODC_KDNICHPCNHB_HOLADCNCPND_OFFSET UNITYSDK_OFFSET(0x13254090)
#define CCNCBBEBODC_KDNICHPCNHB__CTOR_OFFSET UNITYSDK_OFFSET(0x13254080)

inline static constexpr unsigned int CCNCBBEBODC_KDNICHPCNHB_TypeDefinitionIndex = 87607;

class CCNCBBEBODC_KDNICHPCNHB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNCBBEBODC_KDNICHPCNHB__CTOR_OFFSET))(this);
	}

	::System::Void HOLADCNCPND(::MoleMole::Config::ConfigGoalPath* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGoalPath*))((::PBYTE)hIl2Cpp + CCNCBBEBODC_KDNICHPCNHB_HOLADCNCPND_OFFSET))(this, DFMKILICPFB);
	}
};
