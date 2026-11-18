#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIFish; }

#define JLCGHPIHJLF_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1762D6B0)
#define JLCGHPIHJLF_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1762D8F0)
#define JLCGHPIHJLF_OHMIEELKGFG_OFFSET UNITYSDK_OFFSET(0x1762D9C0)
#define JLCGHPIHJLF_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1762D610)
#define JLCGHPIHJLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1762D580)

inline static constexpr unsigned int JLCGHPIHJLF_TypeDefinitionIndex = 81433;

class JLCGHPIHJLF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCGHPIHJLF__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JLCGHPIHJLF_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIFish*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIFish*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCGHPIHJLF_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JLCGHPIHJLF_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::ConfigUIFish* OHMIEELKGFG()
	{
		return ((::MoleMole::ConfigUIFish*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCGHPIHJLF_OHMIEELKGFG_OFFSET))(this);
	}
};
