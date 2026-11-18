#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHollowTimeRewind; }

#define NBPKPFGKPAH_AJLPIKPDAOJ_OFFSET UNITYSDK_OFFSET(0x16B5DA90)
#define NBPKPFGKPAH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16B5D620)
#define NBPKPFGKPAH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16B5DB90)
#define NBPKPFGKPAH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16B5D580)
#define NBPKPFGKPAH__CTOR_OFFSET UNITYSDK_OFFSET(0x16B5D4F0)

inline static constexpr unsigned int NBPKPFGKPAH_TypeDefinitionIndex = 55065;

class NBPKPFGKPAH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPKPFGKPAH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NBPKPFGKPAH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowTimeRewind*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowTimeRewind*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPKPFGKPAH_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowTimeRewind* AJLPIKPDAOJ()
	{
		return ((::MoleMole::Config::ConfigHollowTimeRewind*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPKPFGKPAH_AJLPIKPDAOJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NBPKPFGKPAH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
