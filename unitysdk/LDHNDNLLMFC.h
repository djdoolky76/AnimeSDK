#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace System { class String; }

#define LDHNDNLLMFC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1255AEC0)
#define LDHNDNLLMFC_HFCDNGJDFPI_OFFSET UNITYSDK_OFFSET(0x1255B2D0)
#define LDHNDNLLMFC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1255B100)
#define LDHNDNLLMFC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1255B1D0)
#define LDHNDNLLMFC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1255AE20)
#define LDHNDNLLMFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1255AD90)

inline static constexpr unsigned int LDHNDNLLMFC_TypeDefinitionIndex = 42748;

class LDHNDNLLMFC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHNDNLLMFC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LDHNDNLLMFC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSideScrollingLevel*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSideScrollingLevel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHNDNLLMFC_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LDHNDNLLMFC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigSideScrollingLevel* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigSideScrollingLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHNDNLLMFC_KGNEJKNNODJ_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSideScrollingCamera* HFCDNGJDFPI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigSideScrollingCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDHNDNLLMFC_HFCDNGJDFPI_OFFSET))(this, MCOHLHMKLIP);
	}
};
