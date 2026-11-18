#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }

#define KGONENGABGI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14FD69B0)
#define KGONENGABGI_FABNEHAKKBM_OFFSET UNITYSDK_OFFSET(0x14FD6E20)
#define KGONENGABGI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14FD6F20)
#define KGONENGABGI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14FD6910)
#define KGONENGABGI__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD6880)

inline static constexpr unsigned int KGONENGABGI_TypeDefinitionIndex = 44821;

class KGONENGABGI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGONENGABGI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KGONENGABGI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardCamera*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardCamera*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGONENGABGI_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboardCamera* FABNEHAKKBM()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGONENGABGI_FABNEHAKKBM_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KGONENGABGI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
