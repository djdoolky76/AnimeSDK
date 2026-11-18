#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSubSystemSettingBase; }

#define MLKLOBCCHNH_OEMONJDMOJD_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x14DF1810)
#define MLKLOBCCHNH_OEMONJDMOJD_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0x14DF14C0)
#define MLKLOBCCHNH_OEMONJDMOJD__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF1480)

inline static constexpr unsigned int MLKLOBCCHNH_OEMONJDMOJD_TypeDefinitionIndex = 55566;

class MLKLOBCCHNH_OEMONJDMOJD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_OEMONJDMOJD__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::MoleMole::ESystemSettingType MCOHLHMKLIP)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_OEMONJDMOJD_RESOLVEASSETPATH_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSubSystemSettingBase*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSubSystemSettingBase*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_OEMONJDMOJD_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};
