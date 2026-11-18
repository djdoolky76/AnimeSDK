#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigBattlePhotoActivity; }

#define ONIJJFKCPEO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13A74C80)
#define ONIJJFKCPEO_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13A74EC0)
#define ONIJJFKCPEO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x13A74F90)
#define ONIJJFKCPEO_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13A74BE0)
#define ONIJJFKCPEO__CTOR_OFFSET UNITYSDK_OFFSET(0x13A74B50)

inline static constexpr unsigned int ONIJJFKCPEO_TypeDefinitionIndex = 71514;

class ONIJJFKCPEO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJJFKCPEO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ONIJJFKCPEO_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigBattlePhotoActivity*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigBattlePhotoActivity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJJFKCPEO_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ONIJJFKCPEO_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigBattlePhotoActivity* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigBattlePhotoActivity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJJFKCPEO_KGNEJKNNODJ_OFFSET))(this);
	}
};
