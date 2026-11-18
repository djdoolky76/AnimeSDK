#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class TagLibraryConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJHKKPLGEMJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14C48020)
#define BJHKKPLGEMJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14C48260)
#define BJHKKPLGEMJ_JLNDNIELIIE_OFFSET UNITYSDK_OFFSET(0x14C48330)
#define BJHKKPLGEMJ_LGDABIFNOIM_OFFSET UNITYSDK_OFFSET(0x14C486C0)
#define BJHKKPLGEMJ_LNEDNIMPCKG_OFFSET UNITYSDK_OFFSET(0x14C48780)
#define BJHKKPLGEMJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14C47F80)
#define BJHKKPLGEMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14C47EF0)

inline static constexpr unsigned int BJHKKPLGEMJ_TypeDefinitionIndex = 53562;

class BJHKKPLGEMJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHKKPLGEMJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BJHKKPLGEMJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::TagLibraryConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::TagLibraryConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHKKPLGEMJ_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BJHKKPLGEMJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::System::String*>* JLNDNIELIIE(::System::String* IHDCGPLNEBJ)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJHKKPLGEMJ_JLNDNIELIIE_OFFSET))(this, IHDCGPLNEBJ);
	}

	::System::Collections::Generic::List_1<::System::String*>* LNEDNIMPCKG(::System::String* IHDCGPLNEBJ)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJHKKPLGEMJ_LNEDNIMPCKG_OFFSET))(this, IHDCGPLNEBJ);
	}

	::MoleMole::Config::TagLibraryConfig* LGDABIFNOIM()
	{
		return ((::MoleMole::Config::TagLibraryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHKKPLGEMJ_LGDABIFNOIM_OFFSET))(this);
	}
};
