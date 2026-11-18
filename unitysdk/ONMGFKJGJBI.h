#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define ONMGFKJGJBI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1AF94810)
#define ONMGFKJGJBI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1AF94D80)
#define ONMGFKJGJBI_LMFINNMOPIL_OFFSET UNITYSDK_OFFSET(0x1AF94C80)
#define ONMGFKJGJBI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1AF94770)
#define ONMGFKJGJBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF946E0)

inline static constexpr unsigned int ONMGFKJGJBI_TypeDefinitionIndex = 75500;

class ONMGFKJGJBI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMGFKJGJBI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ONMGFKJGJBI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboard*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMGFKJGJBI_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboard* LMFINNMOPIL()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMGFKJGJBI_LMFINNMOPIL_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ONMGFKJGJBI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
