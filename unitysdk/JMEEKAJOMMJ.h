#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUILight; }

#define JMEEKAJOMMJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14FC2850)
#define JMEEKAJOMMJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14FC2A80)
#define JMEEKAJOMMJ_PNABDGFDGED_OFFSET UNITYSDK_OFFSET(0x14FC2980)
#define JMEEKAJOMMJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14FC27B0)
#define JMEEKAJOMMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC2720)

inline static constexpr unsigned int JMEEKAJOMMJ_TypeDefinitionIndex = 58043;

class JMEEKAJOMMJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKAJOMMJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JMEEKAJOMMJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUILight*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUILight*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKAJOMMJ_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigUILight* PNABDGFDGED()
	{
		return ((::MoleMole::ConfigUILight*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKAJOMMJ_PNABDGFDGED_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JMEEKAJOMMJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
