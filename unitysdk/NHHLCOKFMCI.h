#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupModule.h"

class HMHMKIPCHDE;
class PFNPCHIOAMJ;
namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }

#define NHHLCOKFMCI_AKHHFAMJNCN_OFFSET UNITYSDK_OFFSET(0x12103400)
#define NHHLCOKFMCI_GEEPPNBIKHF_OFFSET UNITYSDK_OFFSET(0x12103550)
#define NHHLCOKFMCI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12103330)
#define NHHLCOKFMCI_MIGOMDIIHNA_OFFSET UNITYSDK_OFFSET(0x12103610)
#define NHHLCOKFMCI_NIDBCKIIMJK_OFFSET UNITYSDK_OFFSET(0x121034A0)
#define NHHLCOKFMCI_ONENENCFKHI_OFFSET UNITYSDK_OFFSET(0x12103600)
#define NHHLCOKFMCI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12103170)
#define NHHLCOKFMCI__CTOR_OFFSET UNITYSDK_OFFSET(0x12103080)

inline static constexpr unsigned int NHHLCOKFMCI_TypeDefinitionIndex = 87271;

class NHHLCOKFMCI
{
public:
	::HMHMKIPCHDE* _KLHACGHEOBP_k__BackingField; // 0x28
	::PFNPCHIOAMJ* _AJMFNOHGIBL_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHLCOKFMCI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NHHLCOKFMCI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NHHLCOKFMCI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean AKHHFAMJNCN(::System::String* AADJPMHPNAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHHLCOKFMCI_AKHHFAMJNCN_OFFSET))(this, AADJPMHPNAH);
	}

	::System::Boolean NIDBCKIIMJK(::System::String* MCOHLHMKLIP, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule&))((::PBYTE)hIl2Cpp + NHHLCOKFMCI_NIDBCKIIMJK_OFFSET))(this, MCOHLHMKLIP, LJBPECKCCEA);
	}

	::MoleMole::Config::ConfigEntitySkill* GEEPPNBIKHF(::System::String* AADJPMHPNAH)
	{
		return ((::MoleMole::Config::ConfigEntitySkill*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHHLCOKFMCI_GEEPPNBIKHF_OFFSET))(this, AADJPMHPNAH);
	}

	::PFNPCHIOAMJ* ONENENCFKHI()
	{
		return ((::PFNPCHIOAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHLCOKFMCI_ONENENCFKHI_OFFSET))(this);
	}

	::HMHMKIPCHDE* MIGOMDIIHNA()
	{
		return ((::HMHMKIPCHDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHLCOKFMCI_MIGOMDIIHNA_OFFSET))(this);
	}
};
