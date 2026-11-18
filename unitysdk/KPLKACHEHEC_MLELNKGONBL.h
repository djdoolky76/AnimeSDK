#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace System { class Action; }

#define KPLKACHEHEC_MLELNKGONBL_EFBLEPMAPDH_OFFSET UNITYSDK_OFFSET(0x126BCBA0)
#define KPLKACHEHEC_MLELNKGONBL__CTOR_OFFSET UNITYSDK_OFFSET(0x126BC690)

inline static constexpr unsigned int KPLKACHEHEC_MLELNKGONBL_TypeDefinitionIndex = 78199;

class KPLKACHEHEC_MLELNKGONBL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLKACHEHEC_MLELNKGONBL__CTOR_OFFSET))(this);
	}

	::System::Void EFBLEPMAPDH(::MoleMole::Config::ConfigHollowTimeRewind* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*))((::PBYTE)hIl2Cpp + KPLKACHEHEC_MLELNKGONBL_EFBLEPMAPDH_OFFSET))(this, DFMKILICPFB);
	}
};
