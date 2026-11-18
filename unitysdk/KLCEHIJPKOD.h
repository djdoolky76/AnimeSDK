#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace Code::Logic::Data::ScriptObject::SlideRopePattern { class SlideRopePatternConfig; }
namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace System { class String; }

#define KLCEHIJPKOD_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x17918490)
#define KLCEHIJPKOD_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x179188E0)
#define KLCEHIJPKOD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17918AC0)
#define KLCEHIJPKOD_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x179189D0)
#define KLCEHIJPKOD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x179183F0)
#define KLCEHIJPKOD__CTOR_OFFSET UNITYSDK_OFFSET(0x179183B0)

inline static constexpr unsigned int KLCEHIJPKOD_TypeDefinitionIndex = 75290;

class KLCEHIJPKOD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCEHIJPKOD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KLCEHIJPKOD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCEHIJPKOD_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + KLCEHIJPKOD_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::Code::Logic::Data::ScriptObject::SlideRopePattern::SlideRopePatternConfig* KGNEJKNNODJ(::System::String* MCOHLHMKLIP)
	{
		return ((::Code::Logic::Data::ScriptObject::SlideRopePattern::SlideRopePatternConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLCEHIJPKOD_KGNEJKNNODJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KLCEHIJPKOD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
