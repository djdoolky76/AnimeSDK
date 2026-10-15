#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIKBJFOKHL;
class JNALBIEDNLH;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }

#define INKAFKILLMA_CTOR_OFFSET UNITYSDK_OFFSET(0x164F51D0)
#define INKAFKILLMA_HGAKLHFPKKF_OFFSET UNITYSDK_OFFSET(0x164F49C0)

inline static constexpr unsigned int INKAFKILLMA_TypeDefinitionIndex = 77862;

	class INKAFKILLMA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKAFKILLMA_CTOR_OFFSET))(this);
		}

		static ::JNALBIEDNLH* HGAKLHFPKKF(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::JNALBIEDNLH*(*)(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + INKAFKILLMA_HGAKLHFPKKF_OFFSET))(a1, a2);
		}

	};
