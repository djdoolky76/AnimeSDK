#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigVentCrawl; }

#define FFDPJPBDFOP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x140EE0F0)
#define FFDPJPBDFOP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x140EE330)
#define FFDPJPBDFOP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x140EE400)
#define FFDPJPBDFOP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x140EE050)
#define FFDPJPBDFOP__CTOR_OFFSET UNITYSDK_OFFSET(0x140EDFC0)

inline static constexpr unsigned int FFDPJPBDFOP_TypeDefinitionIndex = 79343;

class FFDPJPBDFOP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDPJPBDFOP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FFDPJPBDFOP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigVentCrawl*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigVentCrawl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDPJPBDFOP_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FFDPJPBDFOP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigVentCrawl* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigVentCrawl*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDPJPBDFOP_KGNEJKNNODJ_OFFSET))(this);
	}
};
