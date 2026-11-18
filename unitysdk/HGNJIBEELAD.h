#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/Config/ConfigGachaTvResultGroupEffects.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }

#define HGNJIBEELAD_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x15DA8DF0)
#define HGNJIBEELAD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15DA8CC0)
#define HGNJIBEELAD_DCOJMCFDKMD_OFFSET UNITYSDK_OFFSET(0x15DA8F80)
#define HGNJIBEELAD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15DA8EB0)
#define HGNJIBEELAD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15DA8C20)
#define HGNJIBEELAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA8B90)

inline static constexpr unsigned int HGNJIBEELAD_TypeDefinitionIndex = 55196;

class HGNJIBEELAD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNJIBEELAD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HGNJIBEELAD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGachaPerformanceEffects*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGachaPerformanceEffects*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNJIBEELAD_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGachaPerformanceEffects* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigGachaPerformanceEffects*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNJIBEELAD_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HGNJIBEELAD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigGachaTvResultGroupEffects DCOJMCFDKMD(::System::Int32 CLHLJKKAAPO, ::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity EGOBOLCFHMO)
	{
		return ((::MoleMole::Config::ConfigGachaTvResultGroupEffects(*)(::PVOID, ::System::Int32, ::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity))((::PBYTE)hIl2Cpp + HGNJIBEELAD_DCOJMCFDKMD_OFFSET))(this, CLHLJKKAAPO, EGOBOLCFHMO);
	}
};
