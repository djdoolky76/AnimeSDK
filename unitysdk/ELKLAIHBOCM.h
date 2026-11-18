#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

class GCOLLFLNDJD;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class EffectPatternInfoConfig; }

#define ELKLAIHBOCM_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0xFE202D0)
#define ELKLAIHBOCM_GOKONGDMBLN_OFFSET UNITYSDK_OFFSET(0xFE20380)
#define ELKLAIHBOCM_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0xFE20260)
#define ELKLAIHBOCM__CTOR_OFFSET UNITYSDK_OFFSET(0xFE20220)

inline static constexpr unsigned int ELKLAIHBOCM_TypeDefinitionIndex = 67026;

class ELKLAIHBOCM
{
public:
	::GCOLLFLNDJD* CJHKKDKFGJE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKLAIHBOCM__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::Foundation::AssetPath MCOHLHMKLIP)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + ELKLAIHBOCM_RESOLVEASSETPATH_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::EffectPatternInfoConfig*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::EffectPatternInfoConfig*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + ELKLAIHBOCM_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void GOKONGDMBLN(::MoleMole::Config::EffectPatternInfoConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoConfig*))((::PBYTE)hIl2Cpp + ELKLAIHBOCM_GOKONGDMBLN_OFFSET))(this, DFMKILICPFB);
	}
};
