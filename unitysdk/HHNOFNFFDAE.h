#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class HollowEntityLayerMaskConfig; }

#define HHNOFNFFDAE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x146FC0D0)
#define HHNOFNFFDAE_GPAGOABIFFP_OFFSET UNITYSDK_OFFSET(0x146FC4D0)
#define HHNOFNFFDAE_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x146FC400)
#define HHNOFNFFDAE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x146FC030)
#define HHNOFNFFDAE__CTOR_OFFSET UNITYSDK_OFFSET(0x146FBFA0)

inline static constexpr unsigned int HHNOFNFFDAE_TypeDefinitionIndex = 42377;

class HHNOFNFFDAE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNOFNFFDAE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HHNOFNFFDAE_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::HollowEntityLayerMaskConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::HollowEntityLayerMaskConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNOFNFFDAE_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HHNOFNFFDAE_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::HollowEntityLayerMaskConfig* GPAGOABIFFP()
	{
		return ((::MoleMole::HollowEntityLayerMaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNOFNFFDAE_GPAGOABIFFP_OFFSET))(this);
	}
};
