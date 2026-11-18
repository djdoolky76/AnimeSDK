#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class PerformConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOPCGOHIPLE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x158C5170)
#define EOPCGOHIPLE_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x158C52E0)
#define EOPCGOHIPLE_MDNJKDIOBBP_OFFSET UNITYSDK_OFFSET(0x158C53B0)
#define EOPCGOHIPLE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x158C50D0)
#define EOPCGOHIPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x158C5040)

inline static constexpr unsigned int EOPCGOHIPLE_TypeDefinitionIndex = 56542;

class EOPCGOHIPLE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPCGOHIPLE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EOPCGOHIPLE_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPCGOHIPLE_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EOPCGOHIPLE_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::PerformConfig* MDNJKDIOBBP(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::PerformConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EOPCGOHIPLE_MDNJKDIOBBP_OFFSET))(this, MGMDLMBEDJF);
	}
};
