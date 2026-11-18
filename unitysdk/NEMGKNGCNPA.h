#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class SlideRopeCameraConfig; }
namespace System { class String; }

#define NEMGKNGCNPA_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x120FC940)
#define NEMGKNGCNPA_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x120FCDA0)
#define NEMGKNGCNPA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x120FCE90)
#define NEMGKNGCNPA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x120FCF60)
#define NEMGKNGCNPA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x120FC8A0)
#define NEMGKNGCNPA__CTOR_OFFSET UNITYSDK_OFFSET(0x120FC860)

inline static constexpr unsigned int NEMGKNGCNPA_TypeDefinitionIndex = 72227;

class NEMGKNGCNPA
{
public:
	// static const ::System::String* EJJIOGJANKL; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMGKNGCNPA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NEMGKNGCNPA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMGKNGCNPA_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NEMGKNGCNPA_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NEMGKNGCNPA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::SlideRopeCameraConfig* KGNEJKNNODJ(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::SlideRopeCameraConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEMGKNGCNPA_KGNEJKNNODJ_OFFSET))(this, MCOHLHMKLIP);
	}
};
