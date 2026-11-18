#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigLockTargets; }

#define KPAKKGFDMCJ_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x16352790)
#define KPAKKGFDMCJ_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x163528F0)
#define KPAKKGFDMCJ_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x163529E0)
#define KPAKKGFDMCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16352750)

inline static constexpr unsigned int KPAKKGFDMCJ_TypeDefinitionIndex = 79269;

class KPAKKGFDMCJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAKKGFDMCJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAKKGFDMCJ_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + KPAKKGFDMCJ_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigLockTargets* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigLockTargets*))((::PBYTE)hIl2Cpp + KPAKKGFDMCJ_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
