#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class GamepadRumbleEntry; }
namespace System { class String; }

#define LCJBPDEPJPE_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x15DECB40)
#define LCJBPDEPJPE_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x15DECD40)
#define LCJBPDEPJPE_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15DECEF0)
#define LCJBPDEPJPE_OFPDNNGPLGI_OFFSET UNITYSDK_OFFSET(0x15DECE30)
#define LCJBPDEPJPE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15DECAA0)
#define LCJBPDEPJPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DECA60)

inline static constexpr unsigned int LCJBPDEPJPE_TypeDefinitionIndex = 46156;

class LCJBPDEPJPE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBPDEPJPE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LCJBPDEPJPE_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBPDEPJPE_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LCJBPDEPJPE_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::MoleMole::Config::GamepadRumbleEntry* OFPDNNGPLGI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::GamepadRumbleEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJBPDEPJPE_OFPDNNGPLGI_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LCJBPDEPJPE_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
