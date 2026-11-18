#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class SlideRopeCameraLockConfig; }
namespace System { class String; }

#define KBMCEBMLEAJ_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x155DA610)
#define KBMCEBMLEAJ_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x155DAA60)
#define KBMCEBMLEAJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x155DACA0)
#define KBMCEBMLEAJ_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x155DAB60)
#define KBMCEBMLEAJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x155DA570)
#define KBMCEBMLEAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x155DA530)

inline static constexpr unsigned int KBMCEBMLEAJ_TypeDefinitionIndex = 61150;

class KBMCEBMLEAJ
{
public:
	// static const ::System::String* EJJIOGJANKL; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::MoleMole::Config::SlideRopeCameraLockConfig* KGNEJKNNODJ(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::SlideRopeCameraLockConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ_KGNEJKNNODJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
