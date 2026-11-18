#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUICamera; }

#define PDKGBNPEEPO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x18465630)
#define PDKGBNPEEPO_EHEMAJCJFFH_OFFSET UNITYSDK_OFFSET(0x18465830)
#define PDKGBNPEEPO_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x18465760)
#define PDKGBNPEEPO_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18465590)
#define PDKGBNPEEPO__CTOR_OFFSET UNITYSDK_OFFSET(0x18465500)

inline static constexpr unsigned int PDKGBNPEEPO_TypeDefinitionIndex = 79370;

class PDKGBNPEEPO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGBNPEEPO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PDKGBNPEEPO_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUICamera*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUICamera*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGBNPEEPO_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PDKGBNPEEPO_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigUICamera* EHEMAJCJFFH()
	{
		return ((::MoleMole::Config::ConfigUICamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGBNPEEPO_EHEMAJCJFFH_OFFSET))(this);
	}
};
