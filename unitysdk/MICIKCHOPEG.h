#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class MonsterMappingConfig; }
namespace MoleMole { class MonsterMappingEntry; }

#define MICIKCHOPEG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13D31AA0)
#define MICIKCHOPEG_GBDNLMFAOLB_OFFSET UNITYSDK_OFFSET(0x13D31DB0)
#define MICIKCHOPEG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13D31CE0)
#define MICIKCHOPEG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13D31A00)
#define MICIKCHOPEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D31970)

inline static constexpr unsigned int MICIKCHOPEG_TypeDefinitionIndex = 60631;

class MICIKCHOPEG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICIKCHOPEG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MICIKCHOPEG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::MonsterMappingConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::MonsterMappingConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICIKCHOPEG_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MICIKCHOPEG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean GBDNLMFAOLB(::System::Int32 GIAOKGFENJD, ::System::Int32 KMFOONLDBFA, ::MoleMole::MonsterMappingEntry*& AAIJGGIEOGK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::MonsterMappingEntry*&))((::PBYTE)hIl2Cpp + MICIKCHOPEG_GBDNLMFAOLB_OFFSET))(this, GIAOKGFENJD, KMFOONLDBFA, AAIJGGIEOGK);
	}
};
