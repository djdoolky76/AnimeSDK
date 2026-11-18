#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ActivityRhythmClickBeatmapConfig; }
namespace MoleMole { class ActivityRhythmClickBeatmapConfig_BeatMap; }
namespace System { class String; }

#define ALKKMGGGLOB_CKEPMOBKLMP_OFFSET UNITYSDK_OFFSET(0x12D072D0)
#define ALKKMGGGLOB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12D06BE0)
#define ALKKMGGGLOB_GOIABKLCAAG_OFFSET UNITYSDK_OFFSET(0x12D07100)
#define ALKKMGGGLOB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12D07330)
#define ALKKMGGGLOB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12D06B40)
#define ALKKMGGGLOB__CTOR_OFFSET UNITYSDK_OFFSET(0x12D06AB0)

inline static constexpr unsigned int ALKKMGGGLOB_TypeDefinitionIndex = 58902;

class ALKKMGGGLOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKKMGGGLOB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ALKKMGGGLOB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ActivityRhythmClickBeatmapConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ActivityRhythmClickBeatmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKKMGGGLOB_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap* GOIABKLCAAG(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALKKMGGGLOB_GOIABKLCAAG_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Single CKEPMOBKLMP(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALKKMGGGLOB_CKEPMOBKLMP_OFFSET))(this, HIAIKHDFCLN);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ALKKMGGGLOB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
