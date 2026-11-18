#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class GamifiedPropConfig; }

#define GJELPGPNOPH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15B1E100)
#define GJELPGPNOPH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15B1E340)
#define GJELPGPNOPH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x15B1E410)
#define GJELPGPNOPH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15B1E060)
#define GJELPGPNOPH__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1DFD0)

inline static constexpr unsigned int GJELPGPNOPH_TypeDefinitionIndex = 45952;

class GJELPGPNOPH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJELPGPNOPH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GJELPGPNOPH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::GamifiedPropConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::GamifiedPropConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJELPGPNOPH_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GJELPGPNOPH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::GamifiedPropConfig* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::GamifiedPropConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJELPGPNOPH_KGNEJKNNODJ_OFFSET))(this);
	}
};
