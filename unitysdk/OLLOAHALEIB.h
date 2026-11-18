#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHackerDrone; }
namespace MoleMole::Config { class HackChargeConfig; }
namespace MoleMole::Config { class HackerDroneConfig; }
namespace System { class String; }

#define OLLOAHALEIB_BHIKIDKMDJO_OFFSET UNITYSDK_OFFSET(0x172D31F0)
#define OLLOAHALEIB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x172D2FB0)
#define OLLOAHALEIB_DFFAEEKFPLB_OFFSET UNITYSDK_OFFSET(0x172D3580)
#define OLLOAHALEIB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x172D34B0)
#define OLLOAHALEIB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x172D33B0)
#define OLLOAHALEIB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x172D2F10)
#define OLLOAHALEIB__CTOR_OFFSET UNITYSDK_OFFSET(0x172D2E80)

inline static constexpr unsigned int OLLOAHALEIB_TypeDefinitionIndex = 82110;

class OLLOAHALEIB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOAHALEIB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OLLOAHALEIB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHackerDrone*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHackerDrone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOAHALEIB_CREATEOP_OFFSET))(this);
	}

	::System::Boolean BHIKIDKMDJO(::System::String* MCOHLHMKLIP, ::MoleMole::Config::HackChargeConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::HackChargeConfig*&))((::PBYTE)hIl2Cpp + OLLOAHALEIB_BHIKIDKMDJO_OFFSET))(this, MCOHLHMKLIP, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigHackerDrone* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigHackerDrone*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOAHALEIB_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OLLOAHALEIB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean DFFAEEKFPLB(::System::String* MCOHLHMKLIP, ::MoleMole::Config::HackerDroneConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::HackerDroneConfig*&))((::PBYTE)hIl2Cpp + OLLOAHALEIB_DFFAEEKFPLB_OFFSET))(this, MCOHLHMKLIP, DFMKILICPFB);
	}
};
