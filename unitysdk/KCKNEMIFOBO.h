#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHollowNpc; }

#define KCKNEMIFOBO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13CE59D0)
#define KCKNEMIFOBO_DNMIHEGHHGJ_OFFSET UNITYSDK_OFFSET(0x13CE5E40)
#define KCKNEMIFOBO_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13CE5F40)
#define KCKNEMIFOBO_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13CE5930)
#define KCKNEMIFOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE58A0)

inline static constexpr unsigned int KCKNEMIFOBO_TypeDefinitionIndex = 39814;

class KCKNEMIFOBO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKNEMIFOBO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KCKNEMIFOBO_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowNpc*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowNpc*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKNEMIFOBO_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowNpc* DNMIHEGHHGJ()
	{
		return ((::MoleMole::Config::ConfigHollowNpc*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKNEMIFOBO_DNMIHEGHHGJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KCKNEMIFOBO_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
