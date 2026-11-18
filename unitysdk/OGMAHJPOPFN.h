#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigTeamEntity; }

#define OGMAHJPOPFN_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x114F5D20)
#define OGMAHJPOPFN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x114F5AF0)
#define OGMAHJPOPFN_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x114F5DE0)
#define OGMAHJPOPFN_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x114F5A50)
#define OGMAHJPOPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x114F59C0)

inline static constexpr unsigned int OGMAHJPOPFN_TypeDefinitionIndex = 43092;

class OGMAHJPOPFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMAHJPOPFN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OGMAHJPOPFN_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTeamEntity*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTeamEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMAHJPOPFN_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTeamEntity* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigTeamEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMAHJPOPFN_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OGMAHJPOPFN_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
