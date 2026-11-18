#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUIWeapon; }
namespace MoleMole::Config { class WeaponInfo; }

#define DLOBKPLCJAG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x148B2CC0)
#define DLOBKPLCJAG_INIFENKCMHM_OFFSET UNITYSDK_OFFSET(0x148B2F00)
#define DLOBKPLCJAG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x148B30B0)
#define DLOBKPLCJAG_KPMDDBBDAJJ_OFFSET UNITYSDK_OFFSET(0x148B3180)
#define DLOBKPLCJAG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x148B2C20)
#define DLOBKPLCJAG__CTOR_OFFSET UNITYSDK_OFFSET(0x148B2B90)

inline static constexpr unsigned int DLOBKPLCJAG_TypeDefinitionIndex = 91799;

class DLOBKPLCJAG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBKPLCJAG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DLOBKPLCJAG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIWeapon*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIWeapon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBKPLCJAG_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::WeaponInfo* INIFENKCMHM(::System::Int32 BFBDDOPFNHN)
	{
		return ((::MoleMole::Config::WeaponInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLOBKPLCJAG_INIFENKCMHM_OFFSET))(this, BFBDDOPFNHN);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DLOBKPLCJAG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigUIWeapon* KPMDDBBDAJJ()
	{
		return ((::MoleMole::Config::ConfigUIWeapon*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBKPLCJAG_KPMDDBBDAJJ_OFFSET))(this);
	}
};
