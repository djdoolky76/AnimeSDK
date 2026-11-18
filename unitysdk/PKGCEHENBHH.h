#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class OverlayOutlineCollectionConfig; }
namespace MoleMole::Config { class OverlayOutlineConfig; }
namespace System { class String; }

#define PKGCEHENBHH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1C1D98D0)
#define PKGCEHENBHH_EIILEPBAKKD_OFFSET UNITYSDK_OFFSET(0x1C1D9CF0)
#define PKGCEHENBHH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1C1D9C20)
#define PKGCEHENBHH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1C1D9B20)
#define PKGCEHENBHH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1C1D9830)
#define PKGCEHENBHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D97A0)

inline static constexpr unsigned int PKGCEHENBHH_TypeDefinitionIndex = 72928;

class PKGCEHENBHH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGCEHENBHH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PKGCEHENBHH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::OverlayOutlineCollectionConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::OverlayOutlineCollectionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGCEHENBHH_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::OverlayOutlineCollectionConfig* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::OverlayOutlineCollectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGCEHENBHH_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PKGCEHENBHH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean EIILEPBAKKD(::System::String* MCOHLHMKLIP, ::MoleMole::Config::OverlayOutlineConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::OverlayOutlineConfig*&))((::PBYTE)hIl2Cpp + PKGCEHENBHH_EIILEPBAKKD_OFFSET))(this, MCOHLHMKLIP, DFMKILICPFB);
	}
};
