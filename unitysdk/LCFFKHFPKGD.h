#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigCityHollowMap; }
namespace MoleMole::Config { class HollowPosConfig; }

#define LCFFKHFPKGD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15DE06C0)
#define LCFFKHFPKGD_FGEMHBLDOON_OFFSET UNITYSDK_OFFSET(0x15DE08F0)
#define LCFFKHFPKGD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15DE0BB0)
#define LCFFKHFPKGD_KPMDDBBDAJJ_OFFSET UNITYSDK_OFFSET(0x15DE07F0)
#define LCFFKHFPKGD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15DE0620)
#define LCFFKHFPKGD__CTOR_OFFSET UNITYSDK_OFFSET(0x15DE0590)

inline static constexpr unsigned int LCFFKHFPKGD_TypeDefinitionIndex = 65620;

class LCFFKHFPKGD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFFKHFPKGD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LCFFKHFPKGD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigCityHollowMap*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigCityHollowMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFFKHFPKGD_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigCityHollowMap* KPMDDBBDAJJ()
	{
		return ((::MoleMole::Config::ConfigCityHollowMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFFKHFPKGD_KPMDDBBDAJJ_OFFSET))(this);
	}

	::MoleMole::Config::HollowPosConfig* FGEMHBLDOON(::System::Int32 LKGAAIGDDBH, ::System::Int32 EMHHFFENFCI)
	{
		return ((::MoleMole::Config::HollowPosConfig*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LCFFKHFPKGD_FGEMHBLDOON_OFFSET))(this, LKGAAIGDDBH, EMHHFFENFCI);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LCFFKHFPKGD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
