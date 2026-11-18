#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Config { class ConfigFixedCameraEntry; }
namespace System { class String; }

#define DGEHGNECNEC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1240DEA0)
#define DGEHGNECNEC_DMPFINIJPKD_OFFSET UNITYSDK_OFFSET(0x1240E0E0)
#define DGEHGNECNEC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1240E3B0)
#define DGEHGNECNEC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1240E480)
#define DGEHGNECNEC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1240DE00)
#define DGEHGNECNEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1240DD70)

inline static constexpr unsigned int DGEHGNECNEC_TypeDefinitionIndex = 66925;

class DGEHGNECNEC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEHGNECNEC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DGEHGNECNEC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigFixedCameraEntry*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigFixedCameraEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEHGNECNEC_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Cameras::FixedCameraConfig* DMPFINIJPKD(::System::String* IINNHCHKKBP)
	{
		return ((::MoleMole::Cameras::FixedCameraConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DGEHGNECNEC_DMPFINIJPKD_OFFSET))(this, IINNHCHKKBP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DGEHGNECNEC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigFixedCameraEntry* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigFixedCameraEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEHGNECNEC_KGNEJKNNODJ_OFFSET))(this);
	}
};
