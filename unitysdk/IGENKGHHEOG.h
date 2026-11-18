#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSpecialEffectHitData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGENKGHHEOG_BIFPIPLMCFF_OFFSET UNITYSDK_OFFSET(0x1A39FC60)
#define IGENKGHHEOG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1A39FA20)
#define IGENKGHHEOG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1A3A02A0)
#define IGENKGHHEOG_NFLFFKJNKAA_OFFSET UNITYSDK_OFFSET(0x1A39FCD0)
#define IGENKGHHEOG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1A39F980)
#define IGENKGHHEOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39F890)

inline static constexpr unsigned int IGENKGHHEOG_TypeDefinitionIndex = 73118;

class IGENKGHHEOG
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>* BPMICFOIONG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGENKGHHEOG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IGENKGHHEOG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSpecialEffectHitData*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSpecialEffectHitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGENKGHHEOG_CREATEOP_OFFSET))(this);
	}

	static ::System::Int32 BIFPIPLMCFF(::MoleMole::Config::AnimatorHitEffect AADMNLBGGMI, ::MoleMole::Config::AnimatorGroundHitType FOAAPLIHJGF, ::MoleMole::Config::AnimatorAirHitType OLKFNFILGAM)
	{
		return ((::System::Int32(*)(::MoleMole::Config::AnimatorHitEffect, ::MoleMole::Config::AnimatorGroundHitType, ::MoleMole::Config::AnimatorAirHitType))((::PBYTE)hIl2Cpp + IGENKGHHEOG_BIFPIPLMCFF_OFFSET))(AADMNLBGGMI, FOAAPLIHJGF, OLKFNFILGAM);
	}

	::System::Boolean NFLFFKJNKAA(::MoleMole::Config::AnimatorBeHitTag AELLPLBJELA, ::MoleMole::Config::CharacterAnimatorStateType EBFAHNFHDJG, ::MoleMole::Config::AnimatorHitEffect& AADMNLBGGMI, ::MoleMole::Config::AnimatorGroundHitType& FOAAPLIHJGF, ::MoleMole::Config::AnimatorAirHitType& OLKFNFILGAM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::Config::CharacterAnimatorStateType, ::MoleMole::Config::AnimatorHitEffect&, ::MoleMole::Config::AnimatorGroundHitType&, ::MoleMole::Config::AnimatorAirHitType&))((::PBYTE)hIl2Cpp + IGENKGHHEOG_NFLFFKJNKAA_OFFSET))(this, AELLPLBJELA, EBFAHNFHDJG, AADMNLBGGMI, FOAAPLIHJGF, OLKFNFILGAM);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IGENKGHHEOG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
