#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigAttachments; }
namespace MoleMole::Config { class ConfigCharacterAttachment; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKBJCBADLJB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14C4D500)
#define BKBJCBADLJB_EHOKEMPEOFF_OFFSET UNITYSDK_OFFSET(0x14C4D700)
#define BKBJCBADLJB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14C4D630)
#define BKBJCBADLJB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14C4D460)
#define BKBJCBADLJB__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4D3D0)

inline static constexpr unsigned int BKBJCBADLJB_TypeDefinitionIndex = 47896;

class BKBJCBADLJB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBJCBADLJB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BKBJCBADLJB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAttachments*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAttachments*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBJCBADLJB_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BKBJCBADLJB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCharacterAttachment*>* EHOKEMPEOFF()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCharacterAttachment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBJCBADLJB_EHOKEMPEOFF_OFFSET))(this);
	}
};
