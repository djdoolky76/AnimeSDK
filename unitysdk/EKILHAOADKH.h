#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigControllableObject; }

#define EKILHAOADKH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14AA2AB0)
#define EKILHAOADKH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14AA2CF0)
#define EKILHAOADKH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x14AA2DC0)
#define EKILHAOADKH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14AA2A10)
#define EKILHAOADKH__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA2980)

inline static constexpr unsigned int EKILHAOADKH_TypeDefinitionIndex = 89201;

class EKILHAOADKH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKILHAOADKH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EKILHAOADKH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigControllableObject*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigControllableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKILHAOADKH_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EKILHAOADKH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigControllableObject* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigControllableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKILHAOADKH_KGNEJKNNODJ_OFFSET))(this);
	}
};
