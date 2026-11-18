#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigTempleLevelUp; }

#define LHBEEJPCLKL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x158E0C40)
#define LHBEEJPCLKL_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x158E0D70)
#define LHBEEJPCLKL_JNANCAIDLBI_OFFSET UNITYSDK_OFFSET(0x158E0E40)
#define LHBEEJPCLKL_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x158E0BA0)
#define LHBEEJPCLKL__CTOR_OFFSET UNITYSDK_OFFSET(0x158E0B10)

inline static constexpr unsigned int LHBEEJPCLKL_TypeDefinitionIndex = 83826;

class LHBEEJPCLKL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBEEJPCLKL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LHBEEJPCLKL_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigTempleLevelUp*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigTempleLevelUp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBEEJPCLKL_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LHBEEJPCLKL_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::ConfigTempleLevelUp* JNANCAIDLBI()
	{
		return ((::MoleMole::ConfigTempleLevelUp*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBEEJPCLKL_JNANCAIDLBI_OFFSET))(this);
	}
};
