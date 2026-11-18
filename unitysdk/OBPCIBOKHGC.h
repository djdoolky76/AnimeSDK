#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject; }

#define OBPCIBOKHGC_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x13A49DA0)
#define OBPCIBOKHGC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13A49A90)
#define OBPCIBOKHGC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13A49CD0)
#define OBPCIBOKHGC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13A499F0)
#define OBPCIBOKHGC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A49960)

inline static constexpr unsigned int OBPCIBOKHGC_TypeDefinitionIndex = 66488;

class OBPCIBOKHGC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPCIBOKHGC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OBPCIBOKHGC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPCIBOKHGC_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OBPCIBOKHGC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigFlowerShopActivityScriptableObject* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPCIBOKHGC_COPIDBEMEIE_OFFSET))(this);
	}
};
