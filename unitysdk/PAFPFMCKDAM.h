#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }
namespace System { class String; }

#define PAFPFMCKDAM_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x178AB570)
#define PAFPFMCKDAM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x178AAED0)
#define PAFPFMCKDAM_DANCMPJLIBB_OFFSET UNITYSDK_OFFSET(0x178AB0E0)
#define PAFPFMCKDAM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x178AB630)
#define PAFPFMCKDAM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x178AAE30)
#define PAFPFMCKDAM__CTOR_OFFSET UNITYSDK_OFFSET(0x178AADA0)

inline static constexpr unsigned int PAFPFMCKDAM_TypeDefinitionIndex = 67116;

class PAFPFMCKDAM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPFMCKDAM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PAFPFMCKDAM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSpecialEffectHitWall*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSpecialEffectHitWall*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPFMCKDAM_CREATEOP_OFFSET))(this);
	}

	::System::Boolean DANCMPJLIBB(::System::String* PEGLCDCAHDC, ::MoleMole::Config::DamageDecalData& DMLDPLFNJGE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::DamageDecalData&))((::PBYTE)hIl2Cpp + PAFPFMCKDAM_DANCMPJLIBB_OFFSET))(this, PEGLCDCAHDC, DMLDPLFNJGE);
	}

	::MoleMole::Config::ConfigSpecialEffectHitWall* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigSpecialEffectHitWall*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPFMCKDAM_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PAFPFMCKDAM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
