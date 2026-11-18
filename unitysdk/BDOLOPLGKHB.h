#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJIEMKHJEEM.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace MoleMole::Config { class ConfigVirtualJoystickParam; }

#define BDOLOPLGKHB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1701FB20)
#define BDOLOPLGKHB_IMAHGIHDJLP_OFFSET UNITYSDK_OFFSET(0x1701FF30)
#define BDOLOPLGKHB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1701FE60)
#define BDOLOPLGKHB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1701FD60)
#define BDOLOPLGKHB_PIPELALHKOA_OFFSET UNITYSDK_OFFSET(0x170201C0)
#define BDOLOPLGKHB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1701FA80)
#define BDOLOPLGKHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1701F9F0)

inline static constexpr unsigned int BDOLOPLGKHB_TypeDefinitionIndex = 81630;

class BDOLOPLGKHB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOLOPLGKHB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BDOLOPLGKHB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIVirtualJoystick*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIVirtualJoystick*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOLOPLGKHB_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUIVirtualJoystick* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigUIVirtualJoystick*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOLOPLGKHB_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BDOLOPLGKHB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigVirtualJoystickParam* IMAHGIHDJLP(::AJIEMKHJEEM NNCAOMDCKEP)
	{
		return ((::MoleMole::Config::ConfigVirtualJoystickParam*(*)(::PVOID, ::AJIEMKHJEEM))((::PBYTE)hIl2Cpp + BDOLOPLGKHB_IMAHGIHDJLP_OFFSET))(this, NNCAOMDCKEP);
	}

	::MoleMole::Config::ConfigVirtualJoystickParam* PIPELALHKOA(::System::Int32 LNLEMGHIHIG)
	{
		return ((::MoleMole::Config::ConfigVirtualJoystickParam*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDOLOPLGKHB_PIPELALHKOA_OFFSET))(this, LNLEMGHIHIG);
	}
};
