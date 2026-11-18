#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHollowChessboardParticle; }

#define BHMDKJNPIFM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14C45120)
#define BHMDKJNPIFM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14C45590)
#define BHMDKJNPIFM_NFMNEDAFCEC_OFFSET UNITYSDK_OFFSET(0x14C45660)
#define BHMDKJNPIFM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14C45080)
#define BHMDKJNPIFM__CTOR_OFFSET UNITYSDK_OFFSET(0x14C44FF0)

inline static constexpr unsigned int BHMDKJNPIFM_TypeDefinitionIndex = 61861;

class BHMDKJNPIFM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMDKJNPIFM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BHMDKJNPIFM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardParticle*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardParticle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMDKJNPIFM_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BHMDKJNPIFM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigHollowChessboardParticle* NFMNEDAFCEC()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMDKJNPIFM_NFMNEDAFCEC_OFFSET))(this);
	}
};
