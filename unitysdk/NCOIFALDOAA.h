#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUINewMap; }

#define NCOIFALDOAA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16B64350)
#define NCOIFALDOAA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16B64650)
#define NCOIFALDOAA_LNAPDEPBNIJ_OFFSET UNITYSDK_OFFSET(0x16B64590)
#define NCOIFALDOAA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16B642B0)
#define NCOIFALDOAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B64220)

inline static constexpr unsigned int NCOIFALDOAA_TypeDefinitionIndex = 50203;

class NCOIFALDOAA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOIFALDOAA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NCOIFALDOAA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUINewMap*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUINewMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOIFALDOAA_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigUINewMap* LNAPDEPBNIJ()
	{
		return ((::MoleMole::ConfigUINewMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOIFALDOAA_LNAPDEPBNIJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NCOIFALDOAA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
