#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JCIMMGKBPJM_OCPBKGDENAN.h"
class GHMGGIHEHJE;
class IOGNBKGNPFD;
class JIJBCGDANLJ;
namespace RPG::Client { class RoadRashGameAbilityTargetSelector_FireTargetConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JCIMMGKBPJM_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0x16595230)
#define JCIMMGKBPJM_CTOR_OFFSET UNITYSDK_OFFSET(0x16596670)
#define JCIMMGKBPJM_MEHFBLBEGMA_OFFSET UNITYSDK_OFFSET(0x16595CE0)
#define JCIMMGKBPJM_PMEMJPBAKNO_OFFSET UNITYSDK_OFFSET(0x16596050)

	class JCIMMGKBPJM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIMMGKBPJM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + JCIMMGKBPJM_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		static ::GHMGGIHEHJE* PMEMJPBAKNO(::GHMGGIHEHJE* a1, ::JIJBCGDANLJ* a2, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig* a3)
		{
			return ((::GHMGGIHEHJE*(*)(::GHMGGIHEHJE*, ::JIJBCGDANLJ*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*))((::PBYTE)hIl2Cpp + JCIMMGKBPJM_PMEMJPBAKNO_OFFSET))(a1, a2, a3);
		}

		static ::JCIMMGKBPJM_OCPBKGDENAN MEHFBLBEGMA(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig* a2)
		{
			return ((::JCIMMGKBPJM_OCPBKGDENAN(*)(::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*))((::PBYTE)hIl2Cpp + JCIMMGKBPJM_MEHFBLBEGMA_OFFSET))(a1, a2);
		}

	};
