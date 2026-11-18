#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigIndicatedLight; }
namespace MoleMole::Config { class ConfigIndicatedLights; }
namespace System { class String; }

#define IGGKIPJBEEF_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1A464AE0)
#define IGGKIPJBEEF_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1A4643B0)
#define IGGKIPJBEEF_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1A4645C0)
#define IGGKIPJBEEF_MIFODGBNCOB_OFFSET UNITYSDK_OFFSET(0x1A464690)
#define IGGKIPJBEEF_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1A464310)
#define IGGKIPJBEEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A464280)

inline static constexpr unsigned int IGGKIPJBEEF_TypeDefinitionIndex = 90964;

class IGGKIPJBEEF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGKIPJBEEF__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IGGKIPJBEEF_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigIndicatedLights*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigIndicatedLights*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGKIPJBEEF_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IGGKIPJBEEF_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigIndicatedLight* MIFODGBNCOB(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigIndicatedLight*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IGGKIPJBEEF_MIFODGBNCOB_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::Config::ConfigIndicatedLights* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigIndicatedLights*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGKIPJBEEF_COPIDBEMEIE_OFFSET))(this);
	}
};
