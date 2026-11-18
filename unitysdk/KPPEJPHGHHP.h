#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class EffectLODDataConfig; }

#define KPPEJPHGHHP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x126BDB00)
#define KPPEJPHGHHP_HADDGEAKMIO_OFFSET UNITYSDK_OFFSET(0x126BE000)
#define KPPEJPHGHHP_INFEDDCIPHP_OFFSET UNITYSDK_OFFSET(0x126BDE60)
#define KPPEJPHGHHP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x126BDD90)
#define KPPEJPHGHHP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x126BDA60)
#define KPPEJPHGHHP__CTOR_OFFSET UNITYSDK_OFFSET(0x126BD9D0)

inline static constexpr unsigned int KPPEJPHGHHP_TypeDefinitionIndex = 47545;

class KPPEJPHGHHP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPEJPHGHHP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KPPEJPHGHHP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::EffectLODDataConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::EffectLODDataConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPEJPHGHHP_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KPPEJPHGHHP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Single INFEDDCIPHP(::MoleMole::Config::EffectLODType JOEFEIGHKPF)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + KPPEJPHGHHP_INFEDDCIPHP_OFFSET))(this, JOEFEIGHKPF);
	}

	::System::Int32 HADDGEAKMIO(::MoleMole::Config::EffectLODType JOEFEIGHKPF)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + KPPEJPHGHHP_HADDGEAKMIO_OFFSET))(this, JOEFEIGHKPF);
	}
};
