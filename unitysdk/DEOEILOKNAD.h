#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigExQTE; }

#define DEOEILOKNAD_BLILJDONHKD_OFFSET UNITYSDK_OFFSET(0x19A3B200)
#define DEOEILOKNAD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x19A3AFC0)
#define DEOEILOKNAD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x19A3B460)
#define DEOEILOKNAD_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x19A3B530)
#define DEOEILOKNAD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x19A3AF20)
#define DEOEILOKNAD__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3AE90)

inline static constexpr unsigned int DEOEILOKNAD_TypeDefinitionIndex = 59103;

class DEOEILOKNAD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOEILOKNAD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DEOEILOKNAD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigExQTE*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigExQTE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOEILOKNAD_CREATEOP_OFFSET))(this);
	}

	::System::Single BLILJDONHKD(::System::Int32 BFJDCCPPIBB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEOEILOKNAD_BLILJDONHKD_OFFSET))(this, BFJDCCPPIBB);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DEOEILOKNAD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigExQTE* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigExQTE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOEILOKNAD_KGNEJKNNODJ_OFFSET))(this);
	}
};
