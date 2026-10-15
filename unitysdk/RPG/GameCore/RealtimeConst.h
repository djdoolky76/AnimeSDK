#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierStatusTypeList; }
namespace RPG::GameCore { class RealtimeConst; }
namespace RPG::GameCore { class RtBehaviorFlagList; }
namespace RPG::GameCore { class RtBehaviorFlagListPair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_REALTIMECONST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96FC70)
#define RPG_GAMECORE_REALTIMECONST_GET_REVERSEDMODIFIERSTATUSTYPEIMMUNEMAP_OFFSET UNITYSDK_OFFSET(0x1D96FDE0)
#define RPG_GAMECORE_REALTIMECONST_GET_REVERSEMODIFIERBEHAVIORFLAGIMMUNEMAP_OFFSET UNITYSDK_OFFSET(0x1D970200)
#define RPG_GAMECORE_REALTIMECONST_HAELGOMHLKP_OFFSET UNITYSDK_OFFSET(0x1D96FD30)
#define RPG_GAMECORE_REALTIMECONST_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x1D96FC90)
#define RPG_GAMECORE_REALTIMECONST_LMEAHGFFMIB_OFFSET UNITYSDK_OFFSET(0x1D96FD10)
#define RPG_GAMECORE_REALTIMECONST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96F900)

namespace RPG::GameCore
{
	class RealtimeConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtCharacterState, ::System::Single>* StateHitLayerWeightMap; // 0x10
		::RPG::GameCore::FixPoint DefaultDieTime; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::RPG::GameCore::RtBehaviorFlagList*>* ModifierBehaviorFlagImmuneMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::RPG::GameCore::ModifierStatusTypeList*>* ModifierStatusTypeImmuneMap; // 0x28
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlagListPair*>* ModifierBehaviorFlagAntiDebuffResistList; // 0x30
		::System::Int32 ModifierRecallLimit; // 0x38
		::System::Int32 RangePropertyRecallLimit; // 0x3C
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>* _reversedModifierStatusTypeImmuneMap; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>* _reverseModifierBehaviorFlagImmuneMap; // 0x48
		static ::RPG::GameCore::RealtimeConst** StaticGet_Config()
		{
			return (::RPG::GameCore::RealtimeConst**)UnitySDK::FromName("RPG.GameCore", "RealtimeConst")->GetStaticField(0x10650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RealtimeConst* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RealtimeConst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void LMEAHGFFMIB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_LMEAHGFFMIB_OFFSET))();
		}

		::System::Single HAELGOMHLKP(::RPG::GameCore::RtCharacterState a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_HAELGOMHLKP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>* get_ReversedModifierStatusTypeImmuneMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_GET_REVERSEDMODIFIERSTATUSTYPEIMMUNEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>* get_ReverseModifierBehaviorFlagImmuneMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_GET_REVERSEMODIFIERBEHAVIORFLAGIMMUNEMAP_OFFSET))(this);
		}

	};
}
