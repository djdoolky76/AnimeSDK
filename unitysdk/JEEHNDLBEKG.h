#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigInteractEntry; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define JEEHNDLBEKG_CAAAICBKKPJ_OFFSET UNITYSDK_OFFSET(0x1944F460)
#define JEEHNDLBEKG_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1944F140)
#define JEEHNDLBEKG_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1944F2A0)
#define JEEHNDLBEKG_FLJLDDIFLBG_OFFSET UNITYSDK_OFFSET(0x1944F660)
#define JEEHNDLBEKG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1944F390)
#define JEEHNDLBEKG_NFGBODGPBAN_OFFSET UNITYSDK_OFFSET(0x1944F4F0)
#define JEEHNDLBEKG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1944F0A0)
#define JEEHNDLBEKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1944F060)

inline static constexpr unsigned int JEEHNDLBEKG_TypeDefinitionIndex = 92169;

class JEEHNDLBEKG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHNDLBEKG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JEEHNDLBEKG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHNDLBEKG_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + JEEHNDLBEKG_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JEEHNDLBEKG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean CAAAICBKKPJ(::System::String* MAHKLGDLHJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEEHNDLBEKG_CAAAICBKKPJ_OFFSET))(this, MAHKLGDLHJI);
	}

	::System::Void NFGBODGPBAN(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigInteractEntry* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigInteractEntry*))((::PBYTE)hIl2Cpp + JEEHNDLBEKG_NFGBODGPBAN_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}

	::MoleMole::Config::InteractEntry* FLJLDDIFLBG(::System::String* MAHKLGDLHJI)
	{
		return ((::MoleMole::Config::InteractEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEEHNDLBEKG_FLJLDDIFLBG_OFFSET))(this, MAHKLGDLHJI);
	}
};
