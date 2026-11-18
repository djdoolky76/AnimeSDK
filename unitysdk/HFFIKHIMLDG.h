#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace System { class String; }

#define HFFIKHIMLDG_BJNEKLCGFMI_OFFSET UNITYSDK_OFFSET(0x16CEB980)
#define HFFIKHIMLDG_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x16CEB700)
#define HFFIKHIMLDG_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x16CEB890)
#define HFFIKHIMLDG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16CEBA40)
#define HFFIKHIMLDG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16CEB660)
#define HFFIKHIMLDG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEB620)

inline static constexpr unsigned int HFFIKHIMLDG_TypeDefinitionIndex = 74669;

class HFFIKHIMLDG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFIKHIMLDG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HFFIKHIMLDG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFIKHIMLDG_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HFFIKHIMLDG_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::MoleMole::Config::ConfigAbilityTarget* BJNEKLCGFMI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigAbilityTarget*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFFIKHIMLDG_BJNEKLCGFMI_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HFFIKHIMLDG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
