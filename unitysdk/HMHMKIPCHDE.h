#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigEntitySkills; }

#define HMHMKIPCHDE_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x15DC97F0)
#define HMHMKIPCHDE_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x15DC9950)
#define HMHMKIPCHDE_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x15DC9A40)
#define HMHMKIPCHDE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC97B0)

inline static constexpr unsigned int HMHMKIPCHDE_TypeDefinitionIndex = 86826;

class HMHMKIPCHDE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHMKIPCHDE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHMKIPCHDE_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HMHMKIPCHDE_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigEntitySkills* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigEntitySkills*))((::PBYTE)hIl2Cpp + HMHMKIPCHDE_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
