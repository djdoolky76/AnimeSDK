#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigCameraTelescope; }
namespace MoleMole { class ConfigUIStoreCamera; }
namespace MoleMole { class UIStorePageConfig; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class String; }

#define JGKOPCADNHI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x19458DE0)
#define JGKOPCADNHI_FDEPKOAGAEK_OFFSET UNITYSDK_OFFSET(0x19459560)
#define JGKOPCADNHI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x19458F10)
#define JGKOPCADNHI_JMDEBELAGIN_OFFSET UNITYSDK_OFFSET(0x19458FE0)
#define JGKOPCADNHI_MFILKCPKKBN_OFFSET UNITYSDK_OFFSET(0x19459820)
#define JGKOPCADNHI_NMDHMNBNNNE_OFFSET UNITYSDK_OFFSET(0x194592A0)
#define JGKOPCADNHI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x19458D40)
#define JGKOPCADNHI__CTOR_OFFSET UNITYSDK_OFFSET(0x19458CB0)

inline static constexpr unsigned int JGKOPCADNHI_TypeDefinitionIndex = 64581;

class JGKOPCADNHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKOPCADNHI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JGKOPCADNHI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIStoreCamera*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIStoreCamera*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKOPCADNHI_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JGKOPCADNHI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::UIVirtualCameraConfigs* JMDEBELAGIN(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::UIVirtualCameraConfigs*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JGKOPCADNHI_JMDEBELAGIN_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::ConfigCameraTelescope* NMDHMNBNNNE(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ConfigCameraTelescope*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JGKOPCADNHI_NMDHMNBNNNE_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::UIStorePageConfig* FDEPKOAGAEK(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::UIStorePageConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JGKOPCADNHI_FDEPKOAGAEK_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::ConfigUIStoreCamera* MFILKCPKKBN()
	{
		return ((::MoleMole::ConfigUIStoreCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKOPCADNHI_MFILKCPKKBN_OFFSET))(this);
	}
};
