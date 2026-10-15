#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMGGIHEHJE;
class IOGNBKGNPFD;
class JIJBCGDANLJ;
namespace RPG::Client { class RoadRashGameAbilityTargetSelector_SlamTargetConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CEGKBGOLKIP_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xC9D4FB0)
#define CEGKBGOLKIP_CTOR_OFFSET UNITYSDK_OFFSET(0xC9D5110)
#define CEGKBGOLKIP_PMEMJPBAKNO_OFFSET UNITYSDK_OFFSET(0xC9D4540)

inline static constexpr unsigned int CEGKBGOLKIP_TypeDefinitionIndex = 77406;

	class CEGKBGOLKIP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGKBGOLKIP_CTOR_OFFSET))(this);
		}

		static ::GHMGGIHEHJE* PMEMJPBAKNO(::GHMGGIHEHJE* a1, ::JIJBCGDANLJ* a2, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig* a3)
		{
			return ((::GHMGGIHEHJE*(*)(::GHMGGIHEHJE*, ::JIJBCGDANLJ*, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig*))((::PBYTE)hIl2Cpp + CEGKBGOLKIP_PMEMJPBAKNO_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CEGKBGOLKIP_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

	};
