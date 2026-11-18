#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole { class TimelineData; }
namespace System { class String; }

#define HPCFOEMJIEK_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x16D07100)
#define HPCFOEMJIEK_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x16D07300)
#define HPCFOEMJIEK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16D073F0)
#define HPCFOEMJIEK_NHMGNHOPMJH_OFFSET UNITYSDK_OFFSET(0x16D074C0)
#define HPCFOEMJIEK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16D07060)
#define HPCFOEMJIEK__CTOR_OFFSET UNITYSDK_OFFSET(0x16D07020)

inline static constexpr unsigned int HPCFOEMJIEK_TypeDefinitionIndex = 83292;

class HPCFOEMJIEK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCFOEMJIEK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::TimelineData* NHMGNHOPMJH(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::TimelineData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_NHMGNHOPMJH_OFFSET))(this, ANGLHCBLFNK);
	}
};
