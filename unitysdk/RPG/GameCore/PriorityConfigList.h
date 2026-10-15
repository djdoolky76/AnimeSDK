#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PriorityConfig; }
namespace RPG::GameCore { class PriorityConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PRIORITYCONFIGLIST_CCMECMOPGNK_OFFSET UNITYSDK_OFFSET(0x1D942320)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D940DB0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_DGDNJNAGDHC_OFFSET UNITYSDK_OFFSET(0x1D9419A0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_DKOHOMJAIKC_OFFSET UNITYSDK_OFFSET(0x1D942490)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_EOMLIAELGEE_OFFSET UNITYSDK_OFFSET(0x1D9412A0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_FLMEABGGAPH_OFFSET UNITYSDK_OFFSET(0x1D942020)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_GET_AIULTRASKILLPRIORITYDEFAULTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D9421B0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_GET_INSERTABILITYDEFAULTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D941500)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_GET_LIMBOWAITHEALPRIORITYDEFAULTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D942010)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_GET_MODIFIERBEHAVIORVISUALDEFAULTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D941880)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_GET_MODIFIEROVERRIDEONHITEFFECTDEFAULTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D941C40)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_GET_MODIFIERUIDEFAULTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D941070)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_GET_SPECIALBPPRIORITYDEFAULTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D941E70)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_GET_SWITCHBATTLEAREADEFAULTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D942480)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_GGMJDNIJPFO_OFFSET UNITYSDK_OFFSET(0x1D941190)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0x1D940DC0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_IBKEAJMNGPD_OFFSET UNITYSDK_OFFSET(0x1D941E80)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_IKOBLAEJOAA_OFFSET UNITYSDK_OFFSET(0x1D941620)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_ILDPOCHFAMO_OFFSET UNITYSDK_OFFSET(0x1D940F60)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_JEBBHFAILHL_OFFSET UNITYSDK_OFFSET(0x1D9426D0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_KONMJAIMPHB_OFFSET UNITYSDK_OFFSET(0x1D941730)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_LFDBLCAJOGK_OFFSET UNITYSDK_OFFSET(0x1D9421C0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_MMIJIFLBMMD_OFFSET UNITYSDK_OFFSET(0x1D9413F0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_NFHJMIKOMHP_OFFSET UNITYSDK_OFFSET(0x1D941AB0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_OENOKIALHKB_OFFSET UNITYSDK_OFFSET(0x1D940ED0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D940BF0)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_OMJBKAEJAON_OFFSET UNITYSDK_OFFSET(0x1D942620)
#define RPG_GAMECORE_PRIORITYCONFIGLIST_PJGPJKEPIBG_OFFSET UNITYSDK_OFFSET(0x1D941D60)

namespace RPG::GameCore
{
	class PriorityConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PriorityConfig*>* ConfigList; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierEvent, ::RPG::GameCore::PriorityConfig*>* TurnBasedModifierEventConfigList; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtModifierEvent, ::RPG::GameCore::PriorityConfig*>* RtModifierEventConfigList; // 0x20
		// static const ::System::String* DefaultKey; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PriorityConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PriorityConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Int32 HNPOGLCAHPK(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_HNPOGLCAHPK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* OENOKIALHKB(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_OENOKIALHKB_OFFSET))(this, a1);
		}

		::System::Int32 ILDPOCHFAMO(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_ILDPOCHFAMO_OFFSET))(this, a1);
		}

		::System::Int32 get_ModifierUIDefaultPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_GET_MODIFIERUIDEFAULTPRIORITY_OFFSET))(this);
		}

		::System::Int32 GGMJDNIJPFO(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_GGMJDNIJPFO_OFFSET))(this, a1);
		}

		::System::Int32 EOMLIAELGEE(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_EOMLIAELGEE_OFFSET))(this, a1);
		}

		::System::Int32 MMIJIFLBMMD(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_MMIJIFLBMMD_OFFSET))(this, a1);
		}

		::System::Int32 get_InsertAbilityDefaultPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_GET_INSERTABILITYDEFAULTPRIORITY_OFFSET))(this);
		}

		::System::Int32 IKOBLAEJOAA(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_IKOBLAEJOAA_OFFSET))(this, a1);
		}

		::System::Int32 KONMJAIMPHB(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_KONMJAIMPHB_OFFSET))(this, a1);
		}

		::System::Int32 get_ModifierBehaviorVisualDefaultPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_GET_MODIFIERBEHAVIORVISUALDEFAULTPRIORITY_OFFSET))(this);
		}

		::System::Int32 DGDNJNAGDHC(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_DGDNJNAGDHC_OFFSET))(this, a1);
		}

		::System::Int32 NFHJMIKOMHP(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_NFHJMIKOMHP_OFFSET))(this, a1);
		}

		::System::Int32 get_ModifierOverrideOnHitEffectDefaultPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_GET_MODIFIEROVERRIDEONHITEFFECTDEFAULTPRIORITY_OFFSET))(this);
		}

		::System::Int32 PJGPJKEPIBG(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_PJGPJKEPIBG_OFFSET))(this, a1);
		}

		::System::Int32 get_SpecialBpPriorityDefaultPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_GET_SPECIALBPPRIORITYDEFAULTPRIORITY_OFFSET))(this);
		}

		::System::Int32 IBKEAJMNGPD(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_IBKEAJMNGPD_OFFSET))(this, a1);
		}

		::System::Int32 get_LimboWaitHealPriorityDefaultPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_GET_LIMBOWAITHEALPRIORITYDEFAULTPRIORITY_OFFSET))(this);
		}

		::System::Int32 FLMEABGGAPH(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_FLMEABGGAPH_OFFSET))(this, a1);
		}

		::System::Int32 get_AIUltraSkillPriorityDefaultPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_GET_AIULTRASKILLPRIORITYDEFAULTPRIORITY_OFFSET))(this);
		}

		::System::Int32 LFDBLCAJOGK(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_LFDBLCAJOGK_OFFSET))(this, a1);
		}

		::System::Int32 CCMECMOPGNK(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_CCMECMOPGNK_OFFSET))(this, a1);
		}

		::System::Int32 get_SwitchBattleAreaDefaultPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_GET_SWITCHBATTLEAREADEFAULTPRIORITY_OFFSET))(this);
		}

		::System::Int32 DKOHOMJAIKC(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_DKOHOMJAIKC_OFFSET))(this, a1);
		}

		::System::Int32 OMJBKAEJAON(::RPG::GameCore::TurnBasedModifierEvent a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_OMJBKAEJAON_OFFSET))(this, a1, a2);
		}

		::System::Int32 JEBBHFAILHL(::RPG::GameCore::RtModifierEvent a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIGLIST_JEBBHFAILHL_OFFSET))(this, a1, a2);
		}

	};
}
