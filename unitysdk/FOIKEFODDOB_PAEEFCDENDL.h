#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUIScriptableAnimationV2; }

#define FOIKEFODDOB_PAEEFCDENDL_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x142BCF50)
#define FOIKEFODDOB_PAEEFCDENDL_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0x142BCEE0)
#define FOIKEFODDOB_PAEEFCDENDL__CTOR_OFFSET UNITYSDK_OFFSET(0x142BCEA0)

inline static constexpr unsigned int FOIKEFODDOB_PAEEFCDENDL_TypeDefinitionIndex = 66539;

class FOIKEFODDOB_PAEEFCDENDL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_PAEEFCDENDL__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::Foundation::AssetPath MCOHLHMKLIP)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOIKEFODDOB_PAEEFCDENDL_RESOLVEASSETPATH_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIScriptableAnimationV2*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIScriptableAnimationV2*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOIKEFODDOB_PAEEFCDENDL_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};
