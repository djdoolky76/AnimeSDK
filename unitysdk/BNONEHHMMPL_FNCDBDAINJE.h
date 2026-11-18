#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace System { class Action; }

#define BNONEHHMMPL_FNCDBDAINJE_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15098880)
#define BNONEHHMMPL_FNCDBDAINJE__CTOR_OFFSET UNITYSDK_OFFSET(0x15098870)

inline static constexpr unsigned int BNONEHHMMPL_FNCDBDAINJE_TypeDefinitionIndex = 43617;

class BNONEHHMMPL_FNCDBDAINJE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNONEHHMMPL_FNCDBDAINJE__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigGachaPerformanceEffects* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*))((::PBYTE)hIl2Cpp + BNONEHHMMPL_FNCDBDAINJE_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
