#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class CutScenePerformConfig; }
namespace MoleMole::Config { class IScenePerformConfig; }
namespace MoleMole::Config { class SceneAvatarCutSceneConfig; }
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBLMONCMBAA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x19494B70)
#define PBLMONCMBAA_DEPMJALDDDC_OFFSET UNITYSDK_OFFSET(0x19495080)
#define PBLMONCMBAA_EHFJPOCELLA_OFFSET UNITYSDK_OFFSET(0x19495320)
#define PBLMONCMBAA_IOOMEOKKPAJ_OFFSET UNITYSDK_OFFSET(0x19494FC0)
#define PBLMONCMBAA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x19495850)
#define PBLMONCMBAA_KDMOAFNOJCD_OFFSET UNITYSDK_OFFSET(0x19494DB0)
#define PBLMONCMBAA_OLPHHJOPIAB_OFFSET UNITYSDK_OFFSET(0x194955D0)
#define PBLMONCMBAA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x19494AD0)
#define PBLMONCMBAA__CTOR_OFFSET UNITYSDK_OFFSET(0x19494A40)

inline static constexpr unsigned int PBLMONCMBAA_TypeDefinitionIndex = 60472;

class PBLMONCMBAA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLMONCMBAA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PBLMONCMBAA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ScenePerformConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ScenePerformConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLMONCMBAA_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::SceneAvatarCutSceneConfig* KDMOAFNOJCD(::System::Int32 LEHABHCOMGH, ::MoleMole::Level::OverrideScenePerformDelayConfig& EKPAIOGJEPO)
	{
		return ((::MoleMole::Config::SceneAvatarCutSceneConfig*(*)(::PVOID, ::System::Int32, ::MoleMole::Level::OverrideScenePerformDelayConfig&))((::PBYTE)hIl2Cpp + PBLMONCMBAA_KDMOAFNOJCD_OFFSET))(this, LEHABHCOMGH, EKPAIOGJEPO);
	}

	::MoleMole::Config::ScenePerformConfig* IOOMEOKKPAJ()
	{
		return ((::MoleMole::Config::ScenePerformConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLMONCMBAA_IOOMEOKKPAJ_OFFSET))(this);
	}

	::MoleMole::Config::CutScenePerformConfig* DEPMJALDDDC(::System::String* FLIOAEBIJDH)
	{
		return ((::MoleMole::Config::CutScenePerformConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PBLMONCMBAA_DEPMJALDDDC_OFFSET))(this, FLIOAEBIJDH);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>* EHFJPOCELLA(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PBLMONCMBAA_EHFJPOCELLA_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::Config::SceneEntityCutSceneConfig* OLPHHJOPIAB(::System::Int32 GIAOKGFENJD)
	{
		return ((::MoleMole::Config::SceneEntityCutSceneConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBLMONCMBAA_OLPHHJOPIAB_OFFSET))(this, GIAOKGFENJD);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PBLMONCMBAA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
