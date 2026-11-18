#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigZenkovSpecialAvatar; }

#define PNLFNIBCMCP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1C1E23A0)
#define PNLFNIBCMCP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1C1E25E0)
#define PNLFNIBCMCP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1C1E26B0)
#define PNLFNIBCMCP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1C1E2300)
#define PNLFNIBCMCP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E2270)

inline static constexpr unsigned int PNLFNIBCMCP_TypeDefinitionIndex = 92630;

class PNLFNIBCMCP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNIBCMCP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PNLFNIBCMCP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigZenkovSpecialAvatar*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigZenkovSpecialAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNIBCMCP_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PNLFNIBCMCP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigZenkovSpecialAvatar* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigZenkovSpecialAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNIBCMCP_KGNEJKNNODJ_OFFSET))(this);
	}
};
