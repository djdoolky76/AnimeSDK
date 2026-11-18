#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOLKBAIGBFN.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigGoalPath; }
namespace MoleMole::Config { class GoalPathTypeConfig; }

#define GBNNJGJPLGO_ACFPCMAPGFE_OFFSET UNITYSDK_OFFSET(0x116DE8D0)
#define GBNNJGJPLGO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x116DE4C0)
#define GBNNJGJPLGO_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x116DE700)
#define GBNNJGJPLGO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x116DE7D0)
#define GBNNJGJPLGO_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x116DE420)
#define GBNNJGJPLGO__CTOR_OFFSET UNITYSDK_OFFSET(0x116DE390)

inline static constexpr unsigned int GBNNJGJPLGO_TypeDefinitionIndex = 90905;

class GBNNJGJPLGO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNNJGJPLGO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GBNNJGJPLGO_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGoalPath*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGoalPath*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNNJGJPLGO_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GBNNJGJPLGO_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigGoalPath* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigGoalPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNNJGJPLGO_KGNEJKNNODJ_OFFSET))(this);
	}

	::System::Boolean ACFPCMAPGFE(::AOLKBAIGBFN MCOHLHMKLIP, ::MoleMole::Config::GoalPathTypeConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOLKBAIGBFN, ::MoleMole::Config::GoalPathTypeConfig*&))((::PBYTE)hIl2Cpp + GBNNJGJPLGO_ACFPCMAPGFE_OFFSET))(this, MCOHLHMKLIP, DFMKILICPFB);
	}
};
