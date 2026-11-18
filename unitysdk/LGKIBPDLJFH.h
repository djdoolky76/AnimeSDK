#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigTimelineDataExtraTargetEnumMap; }
namespace System { class String; }

#define LGKIBPDLJFH_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x158D8AC0)
#define LGKIBPDLJFH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x158D8990)
#define LGKIBPDLJFH_EKGAOECLKKD_OFFSET UNITYSDK_OFFSET(0x158D8B80)
#define LGKIBPDLJFH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x158D8E10)
#define LGKIBPDLJFH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x158D88F0)
#define LGKIBPDLJFH__CTOR_OFFSET UNITYSDK_OFFSET(0x158D8860)

inline static constexpr unsigned int LGKIBPDLJFH_TypeDefinitionIndex = 91978;

class LGKIBPDLJFH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKIBPDLJFH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LGKIBPDLJFH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigTimelineDataExtraTargetEnumMap*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigTimelineDataExtraTargetEnumMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKIBPDLJFH_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigTimelineDataExtraTargetEnumMap* COPIDBEMEIE()
	{
		return ((::MoleMole::ConfigTimelineDataExtraTargetEnumMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKIBPDLJFH_COPIDBEMEIE_OFFSET))(this);
	}

	::System::String* EKGAOECLKKD(::System::String* JBMBFNCJGCB)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGKIBPDLJFH_EKGAOECLKKD_OFFSET))(this, JBMBFNCJGCB);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LGKIBPDLJFH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
