#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class HighLightAirCombatConfig; }
namespace System { class String; }

#define PALEKBBMFKL_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1845BC50)
#define PALEKBBMFKL_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1845C0A0)
#define PALEKBBMFKL_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1845C2D0)
#define PALEKBBMFKL_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1845C190)
#define PALEKBBMFKL_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1845BBB0)
#define PALEKBBMFKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1845BB70)

inline static constexpr unsigned int PALEKBBMFKL_TypeDefinitionIndex = 68937;

class PALEKBBMFKL
{
public:
	// static const ::System::String* EJJIOGJANKL; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALEKBBMFKL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PALEKBBMFKL_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PALEKBBMFKL_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + PALEKBBMFKL_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::MoleMole::Config::HighLightAirCombatConfig* KGNEJKNNODJ(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::HighLightAirCombatConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PALEKBBMFKL_KGNEJKNNODJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PALEKBBMFKL_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
