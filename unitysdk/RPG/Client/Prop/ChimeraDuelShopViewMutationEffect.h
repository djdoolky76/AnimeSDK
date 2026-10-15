#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelShopViewEffectBase.h"
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace System { class Action; }
namespace System { class Nullable; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC73F40)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_DELTAATTACK_OFFSET UNITYSDK_OFFSET(0xDC73F20)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_DELTAHEALTH_OFFSET UNITYSDK_OFFSET(0xDC73F30)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_MUTATED_OFFSET UNITYSDK_OFFSET(0xDC73F10)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_VISITTARGETS_OFFSET UNITYSDK_OFFSET(0xDC740A0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT__IGNOREZERO_OFFSET UNITYSDK_OFFSET(0xDC74040)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopViewMutationEffect_TypeDefinitionIndex = 78367;

	class ChimeraDuelShopViewMutationEffect : public ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionChimera* _Mutated_k__BackingField; // 0x10
		::System::Nullable* _DeltaHealth_k__BackingField; // 0x18
		::System::Nullable* _DeltaAttack_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::ChimeraDuelGameSessionChimera* get_Mutated()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_MUTATED_OFFSET))(this);
		}

		::System::Nullable* get_DeltaAttack()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_DELTAATTACK_OFFSET))(this);
		}

		::System::Nullable* get_DeltaHealth()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_GET_DELTAHEALTH_OFFSET))(this);
		}

		::System::Void VisitTargets(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT_VISITTARGETS_OFFSET))(this, a1);
		}

		static ::System::Nullable* _IgnoreZero(::System::Int32 a1)
		{
			return ((::System::Nullable*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWMUTATIONEFFECT__IGNOREZERO_OFFSET))(a1);
		}

	};
}
