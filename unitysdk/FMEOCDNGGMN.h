#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole { class TimelineDataExtra; }
namespace System { class String; }

#define FMEOCDNGGMN_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1750AD50)
#define FMEOCDNGGMN_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1750AF50)
#define FMEOCDNGGMN_FBHFDLLNOKH_OFFSET UNITYSDK_OFFSET(0x1750B2A0)
#define FMEOCDNGGMN_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1750B160)
#define FMEOCDNGGMN_JKHMCFEACJH_OFFSET UNITYSDK_OFFSET(0x1750B0F0)
#define FMEOCDNGGMN_LMEGBLHMIEM_OFFSET UNITYSDK_OFFSET(0x1750B310)
#define FMEOCDNGGMN_NHMGNHOPMJH_OFFSET UNITYSDK_OFFSET(0x1750B040)
#define FMEOCDNGGMN_PMJGJNFGMEI_OFFSET UNITYSDK_OFFSET(0x1750B230)
#define FMEOCDNGGMN_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1750ACB0)
#define FMEOCDNGGMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1750AC70)

inline static constexpr unsigned int FMEOCDNGGMN_TypeDefinitionIndex = 84865;

class FMEOCDNGGMN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEOCDNGGMN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::MoleMole::TimelineDataExtra* NHMGNHOPMJH(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::TimelineDataExtra*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_NHMGNHOPMJH_OFFSET))(this, ANGLHCBLFNK);
	}

	::System::Boolean JKHMCFEACJH(::MoleMole::TimelineDataExtra* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TimelineDataExtra*))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_JKHMCFEACJH_OFFSET))(this, LJBPECKCCEA);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean PMJGJNFGMEI(::MoleMole::TimelineDataExtra* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TimelineDataExtra*))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_PMJGJNFGMEI_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean FBHFDLLNOKH(::MoleMole::TimelineDataExtra* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TimelineDataExtra*))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_FBHFDLLNOKH_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean LMEGBLHMIEM(::MoleMole::TimelineDataExtra* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TimelineDataExtra*))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_LMEGBLHMIEM_OFFSET))(this, LJBPECKCCEA);
	}
};
