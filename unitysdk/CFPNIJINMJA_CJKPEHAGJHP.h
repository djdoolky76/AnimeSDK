#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFPNIJINMJA;
class CFPNIJINMJA_PEFBMMJJAMI;
class ILDNJGBJGPF;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel_Factory; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CFPNIJINMJA_CJKPEHAGJHP_BICFODMDJPH_OFFSET UNITYSDK_OFFSET(0xCC60B60)
#define CFPNIJINMJA_CJKPEHAGJHP_CTOR_OFFSET UNITYSDK_OFFSET(0xCC605C0)
#define CFPNIJINMJA_CJKPEHAGJHP_EFIKHAHHAIM_OFFSET UNITYSDK_OFFSET(0xCC606B0)
#define CFPNIJINMJA_CJKPEHAGJHP_EPBIHGNFANB_OFFSET UNITYSDK_OFFSET(0xCC605D0)

inline static constexpr unsigned int CFPNIJINMJA_CJKPEHAGJHP_TypeDefinitionIndex = 81609;

	class CFPNIJINMJA_CJKPEHAGJHP : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory* BNKKJGNCMHG; // 0x10
		::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP_CTOR_OFFSET))(this, a1);
		}

		::CFPNIJINMJA* EPBIHGNFANB(::ILDNJGBJGPF* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::CFPNIJINMJA*(*)(::PVOID, ::ILDNJGBJGPF*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP_EPBIHGNFANB_OFFSET))(this, a1, a2, a3);
		}

		::CFPNIJINMJA_PEFBMMJJAMI* EFIKHAHHAIM(::ILDNJGBJGPF* a1, ::System::Int32 a2)
		{
			return ((::CFPNIJINMJA_PEFBMMJJAMI*(*)(::PVOID, ::ILDNJGBJGPF*, ::System::Int32))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP_EFIKHAHHAIM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::CFPNIJINMJA*>* BICFODMDJPH(::ILDNJGBJGPF* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::CFPNIJINMJA*>*(*)(::PVOID, ::ILDNJGBJGPF*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP_BICFODMDJPH_OFFSET))(this, a1, a2, a3);
		}

	};
