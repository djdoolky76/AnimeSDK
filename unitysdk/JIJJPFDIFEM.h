#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIFishV2; }

#define JIJJPFDIFEM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1528E310)
#define JIJJPFDIFEM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1528E550)
#define JIJJPFDIFEM_OHMIEELKGFG_OFFSET UNITYSDK_OFFSET(0x1528E620)
#define JIJJPFDIFEM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1528E270)
#define JIJJPFDIFEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1528E1E0)

inline static constexpr unsigned int JIJJPFDIFEM_TypeDefinitionIndex = 85748;

class JIJJPFDIFEM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJJPFDIFEM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JIJJPFDIFEM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIFishV2*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIFishV2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJJPFDIFEM_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JIJJPFDIFEM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::ConfigUIFishV2* OHMIEELKGFG()
	{
		return ((::MoleMole::ConfigUIFishV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJJPFDIFEM_OHMIEELKGFG_OFFSET))(this);
	}
};
