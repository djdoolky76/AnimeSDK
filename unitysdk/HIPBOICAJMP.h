#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigBigSceneStoreLight; }

#define HIPBOICAJMP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16F40470)
#define HIPBOICAJMP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16F406A0)
#define HIPBOICAJMP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x16F405A0)
#define HIPBOICAJMP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16F403D0)
#define HIPBOICAJMP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F40340)

inline static constexpr unsigned int HIPBOICAJMP_TypeDefinitionIndex = 75091;

class HIPBOICAJMP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPBOICAJMP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HIPBOICAJMP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigBigSceneStoreLight*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigBigSceneStoreLight*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPBOICAJMP_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigBigSceneStoreLight* KGNEJKNNODJ()
	{
		return ((::MoleMole::ConfigBigSceneStoreLight*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPBOICAJMP_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HIPBOICAJMP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
