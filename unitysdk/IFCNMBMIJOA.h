#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEtherEyes; }
namespace MoleMole::Config { class EtherEyesObjectTypeDefaultConfig; }

#define IFCNMBMIJOA_CREATEOP_OFFSET UNITYSDK_OFFSET(0xF83D140)
#define IFCNMBMIJOA_EBHCFBDPELB_OFFSET UNITYSDK_OFFSET(0xF83D550)
#define IFCNMBMIJOA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0xF83D480)
#define IFCNMBMIJOA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0xF83D380)
#define IFCNMBMIJOA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xF83D0A0)
#define IFCNMBMIJOA__CTOR_OFFSET UNITYSDK_OFFSET(0xF83D010)

inline static constexpr unsigned int IFCNMBMIJOA_TypeDefinitionIndex = 79064;

class IFCNMBMIJOA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCNMBMIJOA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IFCNMBMIJOA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigEtherEyes*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigEtherEyes*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCNMBMIJOA_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEtherEyes* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigEtherEyes*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCNMBMIJOA_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IFCNMBMIJOA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::EtherEyesObjectTypeDefaultConfig* EBHCFBDPELB(::MoleMole::Config::EtherEyesObjectType KDDBINPLBNP)
	{
		return ((::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*(*)(::PVOID, ::MoleMole::Config::EtherEyesObjectType))((::PBYTE)hIl2Cpp + IFCNMBMIJOA_EBHCFBDPELB_OFFSET))(this, KDDBINPLBNP);
	}
};
