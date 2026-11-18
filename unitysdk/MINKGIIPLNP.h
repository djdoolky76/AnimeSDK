#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class BaseConfigAnimatorBeHitPriority; }
namespace MoleMole::Config { class ConfigAnimatorBeHitPriorities; }
namespace MoleMole::Config { class HitEffectConfigAnimatorBeHitPriority; }
namespace MoleMole::Config { class TagConfigAnimatorBeHitPriority; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MINKGIIPLNP_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16C8DB80)
#define MINKGIIPLNP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16C8D0D0)
#define MINKGIIPLNP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16C8D4F0)
#define MINKGIIPLNP_JKCLKNOOCAF_OFFSET UNITYSDK_OFFSET(0x16C8D790)
#define MINKGIIPLNP_KPPGGCFCFMA_1_OFFSET UNITYSDK_OFFSET(0x16C8D5C0)
#define MINKGIIPLNP_KPPGGCFCFMA_OFFSET UNITYSDK_OFFSET(0x16C8D340)
#define MINKGIIPLNP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16C8D030)
#define MINKGIIPLNP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8CE80)

inline static constexpr unsigned int MINKGIIPLNP_TypeDefinitionIndex = 44093;

class MINKGIIPLNP
{
public:
	// static const ::System::Int32 LHODKEJIFMD = 0x0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::TagConfigAnimatorBeHitPriority*>* PDLGKAEPHCL; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>* KHBEGLALLDC; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Config::HitEffectConfigAnimatorBeHitPriority*>* AHFJNCMDHLK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINKGIIPLNP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MINKGIIPLNP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAnimatorBeHitPriorities*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAnimatorBeHitPriorities*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINKGIIPLNP_CREATEOP_OFFSET))(this);
	}

	::System::Int32 KPPGGCFCFMA(::MoleMole::Config::AnimatorBeHitTag AELLPLBJELA)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::AnimatorBeHitTag))((::PBYTE)hIl2Cpp + MINKGIIPLNP_KPPGGCFCFMA_OFFSET))(this, AELLPLBJELA);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MINKGIIPLNP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 KPPGGCFCFMA_1(::MoleMole::Config::AnimatorHitEffect OGIGOPHMJEP, ::System::Int32 LAIGJIOIELN)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::AnimatorHitEffect, ::System::Int32))((::PBYTE)hIl2Cpp + MINKGIIPLNP_KPPGGCFCFMA_1_OFFSET))(this, OGIGOPHMJEP, LAIGJIOIELN);
	}

	::System::Void JKCLKNOOCAF(::MoleMole::Config::ConfigAnimatorBeHitPriorities* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorBeHitPriorities*))((::PBYTE)hIl2Cpp + MINKGIIPLNP_JKCLKNOOCAF_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigAnimatorBeHitPriorities* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigAnimatorBeHitPriorities*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINKGIIPLNP_COPIDBEMEIE_OFFSET))(this);
	}
};
