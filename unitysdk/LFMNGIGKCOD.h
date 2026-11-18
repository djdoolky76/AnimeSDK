#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class CinemaSingleBeatMapConfig; }
namespace MoleMole { class CinemaSingleBeatMapConfig_BeatMap; }
namespace System { class String; }

#define LFMNGIGKCOD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1A30AAB0)
#define LFMNGIGKCOD_FNLGOHBMMKA_OFFSET UNITYSDK_OFFSET(0x1A30AEF0)
#define LFMNGIGKCOD_GOIABKLCAAG_OFFSET UNITYSDK_OFFSET(0x1A30AD20)
#define LFMNGIGKCOD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1A30B150)
#define LFMNGIGKCOD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1A30AA10)
#define LFMNGIGKCOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30A980)

inline static constexpr unsigned int LFMNGIGKCOD_TypeDefinitionIndex = 41434;

class LFMNGIGKCOD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNGIGKCOD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LFMNGIGKCOD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::CinemaSingleBeatMapConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::CinemaSingleBeatMapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNGIGKCOD_CREATEOP_OFFSET))(this);
	}

	::MoleMole::CinemaSingleBeatMapConfig_BeatMap* GOIABKLCAAG(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::CinemaSingleBeatMapConfig_BeatMap*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFMNGIGKCOD_GOIABKLCAAG_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Int32 FNLGOHBMMKA(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFMNGIGKCOD_FNLGOHBMMKA_OFFSET))(this, HIAIKHDFCLN);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LFMNGIGKCOD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
