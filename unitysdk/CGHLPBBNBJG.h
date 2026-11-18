#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class HighLightAirCombatCameraConfig; }
namespace System { class String; }

#define CGHLPBBNBJG_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x139C4AD0)
#define CGHLPBBNBJG_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x139C4F20)
#define CGHLPBBNBJG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x139C5010)
#define CGHLPBBNBJG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x139C50E0)
#define CGHLPBBNBJG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x139C4A30)
#define CGHLPBBNBJG__CTOR_OFFSET UNITYSDK_OFFSET(0x139C49F0)

inline static constexpr unsigned int CGHLPBBNBJG_TypeDefinitionIndex = 78247;

class CGHLPBBNBJG
{
public:
	// static const ::System::String* EJJIOGJANKL; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHLPBBNBJG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CGHLPBBNBJG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHLPBBNBJG_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CGHLPBBNBJG_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CGHLPBBNBJG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::HighLightAirCombatCameraConfig* KGNEJKNNODJ(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::HighLightAirCombatCameraConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGHLPBBNBJG_KGNEJKNNODJ_OFFSET))(this, MCOHLHMKLIP);
	}
};
