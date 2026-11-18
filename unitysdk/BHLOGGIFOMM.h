#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigInLevelCustomized; }

#define BHLOGGIFOMM_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x14C43D00)
#define BHLOGGIFOMM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14C43B10)
#define BHLOGGIFOMM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14C43DC0)
#define BHLOGGIFOMM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14C43A70)
#define BHLOGGIFOMM__CTOR_OFFSET UNITYSDK_OFFSET(0x14C439E0)

inline static constexpr unsigned int BHLOGGIFOMM_TypeDefinitionIndex = 57399;

class BHLOGGIFOMM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLOGGIFOMM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BHLOGGIFOMM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigInLevelCustomized*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigInLevelCustomized*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLOGGIFOMM_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigInLevelCustomized* COPIDBEMEIE()
	{
		return ((::MoleMole::ConfigInLevelCustomized*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLOGGIFOMM_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BHLOGGIFOMM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
