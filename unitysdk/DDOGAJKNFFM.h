#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIAvatarShowSettings; }

#define DDOGAJKNFFM_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x19742A80)
#define DDOGAJKNFFM_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0x19742A10)
#define DDOGAJKNFFM__CTOR_OFFSET UNITYSDK_OFFSET(0x197429D0)

inline static constexpr unsigned int DDOGAJKNFFM_TypeDefinitionIndex = 89158;

class DDOGAJKNFFM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOGAJKNFFM__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::Foundation::AssetPath MCOHLHMKLIP)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + DDOGAJKNFFM_RESOLVEASSETPATH_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIAvatarShowSettings*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIAvatarShowSettings*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + DDOGAJKNFFM_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};
