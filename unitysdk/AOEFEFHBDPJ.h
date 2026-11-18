#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigBuddyAvatarShowSettings; }

#define AOEFEFHBDPJ_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x18542620)
#define AOEFEFHBDPJ_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0x185425B0)
#define AOEFEFHBDPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18542570)

inline static constexpr unsigned int AOEFEFHBDPJ_TypeDefinitionIndex = 61970;

class AOEFEFHBDPJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOEFEFHBDPJ__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::Foundation::AssetPath MCOHLHMKLIP)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + AOEFEFHBDPJ_RESOLVEASSETPATH_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigBuddyAvatarShowSettings*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigBuddyAvatarShowSettings*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + AOEFEFHBDPJ_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};
