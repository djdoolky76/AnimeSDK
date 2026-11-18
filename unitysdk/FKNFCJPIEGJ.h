#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIScripts; }

#define FKNFCJPIEGJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1410B000)
#define FKNFCJPIEGJ_DLHPJCPOFFI_OFFSET UNITYSDK_OFFSET(0x1410B240)
#define FKNFCJPIEGJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1410B300)
#define FKNFCJPIEGJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1410AF60)
#define FKNFCJPIEGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1410AED0)

inline static constexpr unsigned int FKNFCJPIEGJ_TypeDefinitionIndex = 63087;

class FKNFCJPIEGJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNFCJPIEGJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FKNFCJPIEGJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIScripts*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIScripts*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNFCJPIEGJ_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigUIScripts* DLHPJCPOFFI()
	{
		return ((::MoleMole::ConfigUIScripts*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNFCJPIEGJ_DLHPJCPOFFI_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FKNFCJPIEGJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
