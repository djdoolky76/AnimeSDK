#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class LevelGlobalAIModule; }
namespace MoleMole::Config { class LevelGlobalAIScriptConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPJGAMBCHDM_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x11E488D0)
#define MPJGAMBCHDM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11E487A0)
#define MPJGAMBCHDM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x11E495E0)
#define MPJGAMBCHDM_JHLKBLPAPMJ_OFFSET UNITYSDK_OFFSET(0x11E49070)
#define MPJGAMBCHDM_LGBFHBLIKLM_OFFSET UNITYSDK_OFFSET(0x11E48990)
#define MPJGAMBCHDM_LIMKNMNAPDP_OFFSET UNITYSDK_OFFSET(0x11E496B0)
#define MPJGAMBCHDM_OBONFKANHNC_OFFSET UNITYSDK_OFFSET(0x11E48D00)
#define MPJGAMBCHDM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x11E48700)
#define MPJGAMBCHDM__CTOR_OFFSET UNITYSDK_OFFSET(0x11E48670)

inline static constexpr unsigned int MPJGAMBCHDM_TypeDefinitionIndex = 58488;

class MPJGAMBCHDM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJGAMBCHDM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MPJGAMBCHDM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::LevelGlobalAIScriptConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::LevelGlobalAIScriptConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJGAMBCHDM_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::LevelGlobalAIScriptConfig* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::LevelGlobalAIScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJGAMBCHDM_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Single LGBFHBLIKLM(::MoleMole::Config::CharacterSize HFDNOJOPHME, ::MoleMole::Config::CharacterSize OOCGEGAAMMC)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::CharacterSize, ::MoleMole::Config::CharacterSize))((::PBYTE)hIl2Cpp + MPJGAMBCHDM_LGBFHBLIKLM_OFFSET))(this, HFDNOJOPHME, OOCGEGAAMMC);
	}

	::System::Single OBONFKANHNC(::MoleMole::Config::CharacterSize HFDNOJOPHME, ::MoleMole::Config::CharacterSize OOCGEGAAMMC)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::CharacterSize, ::MoleMole::Config::CharacterSize))((::PBYTE)hIl2Cpp + MPJGAMBCHDM_OBONFKANHNC_OFFSET))(this, HFDNOJOPHME, OOCGEGAAMMC);
	}

	::MoleMole::Config::LevelGlobalAIModule* JHLKBLPAPMJ(::System::String* ONMOHEILJJL)
	{
		return ((::MoleMole::Config::LevelGlobalAIModule*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MPJGAMBCHDM_JHLKBLPAPMJ_OFFSET))(this, ONMOHEILJJL);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MPJGAMBCHDM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::System::String*>* LIMKNMNAPDP()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJGAMBCHDM_LIMKNMNAPDP_OFFSET))(this);
	}
};
