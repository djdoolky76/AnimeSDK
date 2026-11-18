#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUICoopTeam3D; }

#define NABMOCCBKCL_CREATEOP_OFFSET UNITYSDK_OFFSET(0xEB70A10)
#define NABMOCCBKCL_HIKJBGJBGBP_OFFSET UNITYSDK_OFFSET(0xEB70D20)
#define NABMOCCBKCL_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0xEB70C50)
#define NABMOCCBKCL_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xEB70970)
#define NABMOCCBKCL__CTOR_OFFSET UNITYSDK_OFFSET(0xEB708E0)

inline static constexpr unsigned int NABMOCCBKCL_TypeDefinitionIndex = 54920;

class NABMOCCBKCL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABMOCCBKCL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NABMOCCBKCL_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUICoopTeam3D*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUICoopTeam3D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABMOCCBKCL_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NABMOCCBKCL_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::ConfigUICoopTeam3D* HIKJBGJBGBP()
	{
		return ((::MoleMole::ConfigUICoopTeam3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABMOCCBKCL_HIKJBGJBGBP_OFFSET))(this);
	}
};
