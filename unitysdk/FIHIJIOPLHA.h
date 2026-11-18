#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ChessboardTextureSheetTagsData; }
namespace MoleMole { class ChessboardTextureTagConfig; }
namespace System { class String; }

#define FIHIJIOPLHA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x191C5540)
#define FIHIJIOPLHA_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x191C5680)
#define FIHIJIOPLHA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x191C5870)
#define FIHIJIOPLHA_LMCCIOGBBAA_OFFSET UNITYSDK_OFFSET(0x191C5740)
#define FIHIJIOPLHA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x191C54A0)
#define FIHIJIOPLHA__CTOR_OFFSET UNITYSDK_OFFSET(0x191C5410)

inline static constexpr unsigned int FIHIJIOPLHA_TypeDefinitionIndex = 48179;

class FIHIJIOPLHA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHIJIOPLHA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FIHIJIOPLHA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ChessboardTextureSheetTagsData*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ChessboardTextureSheetTagsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHIJIOPLHA_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ChessboardTextureSheetTagsData* GACPDCEMJOA()
	{
		return ((::MoleMole::ChessboardTextureSheetTagsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHIJIOPLHA_GACPDCEMJOA_OFFSET))(this);
	}

	::MoleMole::ChessboardTextureTagConfig* LMCCIOGBBAA(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ChessboardTextureTagConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIHIJIOPLHA_LMCCIOGBBAA_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FIHIJIOPLHA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
