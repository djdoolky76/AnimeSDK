#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigChessEntity; }
namespace MoleMole { class ConfigChessEntityMap; }
namespace System { class String; }

#define CONFIGCHESSENTITYDATAMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x18318AC0)
#define CONFIGCHESSENTITYDATAMODULE_GETCONFIGENTITY_OFFSET UNITYSDK_OFFSET(0x18318D00)
#define CONFIGCHESSENTITYDATAMODULE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18318A20)
#define CONFIGCHESSENTITYDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x18318990)
#define CONFIGCHESSENTITYDATAMODULE___BASE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18318EB0)

inline static constexpr unsigned int ConfigChessEntityDataModule_TypeDefinitionIndex = 84565;

class ConfigChessEntityDataModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATAMODULE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase phase)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATAMODULE_PRELOADFORPHASE_OFFSET))(this, phase);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigChessEntityMap*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigChessEntityMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATAMODULE_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigChessEntity* GetConfigEntity(::System::String* key)
	{
		return ((::MoleMole::ConfigChessEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATAMODULE_GETCONFIGENTITY_OFFSET))(this, key);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle __base_PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase P0)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATAMODULE___BASE_PRELOADFORPHASE_OFFSET))(this, P0);
	}
};
