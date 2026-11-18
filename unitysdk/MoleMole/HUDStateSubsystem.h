#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PONEGOPCLPF.h"

class EMLJLCEIPIP;
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_HUDSTATESUBSYSTEM_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1191E5A0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_CASTHUDSUBSTATE_OFFSET UNITYSDK_OFFSET(0x1191D850)
#define MOLEMOLE_HUDSTATESUBSYSTEM_CLEARHUDSUBSTATECAST_OFFSET UNITYSDK_OFFSET(0x1191D930)
#define MOLEMOLE_HUDSTATESUBSYSTEM_DEFERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1191D360)
#define MOLEMOLE_HUDSTATESUBSYSTEM_FLUSHDEFERREDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1191D3E0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x1191E240)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1191D3C0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1191E330)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ISBASESTATE_OFFSET UNITYSDK_OFFSET(0x1191DCD0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET UNITYSDK_OFFSET(0x1191E290)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1191E3E0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1191EDD0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1191ED80)
#define MOLEMOLE_HUDSTATESUBSYSTEM_POPOVERLAY_OFFSET UNITYSDK_OFFSET(0x1191E190)
#define MOLEMOLE_HUDSTATESUBSYSTEM_PUSHOVERLAY_OFFSET UNITYSDK_OFFSET(0x1191E120)
#define MOLEMOLE_HUDSTATESUBSYSTEM_REGHUDSUBSTATECAST_OFFSET UNITYSDK_OFFSET(0x1191D4B0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1191D9D0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETBASESTATE_OFFSET UNITYSDK_OFFSET(0x1191DD90)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETINITIALSTATE_OFFSET UNITYSDK_OFFSET(0x1191E440)
#define MOLEMOLE_HUDSTATESUBSYSTEM_UNBINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1191F0C0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_UNREGHUDSUBSTATECAST_1_OFFSET UNITYSDK_OFFSET(0x1191D710)
#define MOLEMOLE_HUDSTATESUBSYSTEM_UNREGHUDSUBSTATECAST_OFFSET UNITYSDK_OFFSET(0x1191D680)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1191FF40)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1191FDF0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ISCOOPMODE_OFFSET UNITYSDK_OFFSET(0x1191DBD0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONAVATARINOUTBATTLECHANGE_OFFSET UNITYSDK_OFFSET(0x1191F8A0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONCOOPREGIONPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0x1191FB70)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONETHERSTRONGSTATEINOUT_OFFSET UNITYSDK_OFFSET(0x1191FB10)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONINOUTBANGBOO_OFFSET UNITYSDK_OFFSET(0x1191FAB0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONMAINCHARACTERDIE_OFFSET UNITYSDK_OFFSET(0x1191FC30)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGGAMEUNSTUCKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1191FC90)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGHUDSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1191FD30)
#define MOLEMOLE_HUDSTATESUBSYSTEM__SETPARTNERDATEINPUTMUTE_OFFSET UNITYSDK_OFFSET(0x1191EED0)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11920300)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11920390)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11920420)

namespace MoleMole
{
	inline static constexpr unsigned int HUDStateSubsystem_TypeDefinitionIndex = 89017;

	class HUDStateSubsystem
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::PONEGOPCLPF>** StaticGet__coopStateMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::PONEGOPCLPF>**)Il2CppClass::FromTypeDefinitionIndex(HUDStateSubsystem_TypeDefinitionIndex)->GetStaticField(0x51760);
		}
		static ::System::Collections::Generic::HashSet_1<::PONEGOPCLPF>** StaticGet_BaseStates()
		{
			return (::System::Collections::Generic::HashSet_1<::PONEGOPCLPF>**)Il2CppClass::FromTypeDefinitionIndex(HUDStateSubsystem_TypeDefinitionIndex)->GetStaticField(0x51768);
		}
		// static const ::System::String* PartnerDateInputTag; // 0x0
		::System::Action_1<::PONEGOPCLPF>* OnChangeToSubState; // 0x10
		::System::Action_2<::PONEGOPCLPF, ::PONEGOPCLPF>* OnChangeToSubStateEx; // 0x18
		::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::PONEGOPCLPF>* _subStateCastMap; // 0x20
		::EMLJLCEIPIP* _stateQueue; // 0x28
		::System::Boolean _hasPendingNotify; // 0x30
		::System::Byte _padding0[0x3];
		::PONEGOPCLPF _lastNotifiedState; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void DeferNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_DEFERNOTIFY_OFFSET))(this);
		}

		::System::Void FlushDeferredNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_FLUSHDEFERREDNOTIFY_OFFSET))(this);
		}

		::System::Void RegHUDSubStateCast(::PONEGOPCLPF source, ::PONEGOPCLPF target)
		{
			return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_REGHUDSUBSTATECAST_OFFSET))(this, source, target);
		}

		::System::Void UnRegHUDSubStateCast(::PONEGOPCLPF source)
		{
			return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_UNREGHUDSUBSTATECAST_OFFSET))(this, source);
		}

		::System::Void UnRegHUDSubStateCast_1(::PONEGOPCLPF source, ::PONEGOPCLPF target)
		{
			return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_UNREGHUDSUBSTATECAST_1_OFFSET))(this, source, target);
		}

		::PONEGOPCLPF CastHUDSubState(::PONEGOPCLPF state)
		{
			return ((::PONEGOPCLPF(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_CASTHUDSUBSTATE_OFFSET))(this, state);
		}

		::System::Void ClearHUDSubStateCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_CLEARHUDSUBSTATECAST_OFFSET))(this);
		}

		::System::Void SetActive(::PONEGOPCLPF state, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SETACTIVE_OFFSET))(this, state, active);
		}

		::PONEGOPCLPF get_CurrentHudState()
		{
			return ((::PONEGOPCLPF(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET))(this);
		}

		::PONEGOPCLPF get_BaseState()
		{
			return ((::PONEGOPCLPF(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_BASESTATE_OFFSET))(this);
		}

		::System::Void SetBaseState(::PONEGOPCLPF state)
		{
			return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SETBASESTATE_OFFSET))(this, state);
		}

		::System::Void PushOverlay(::PONEGOPCLPF state)
		{
			return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_PUSHOVERLAY_OFFSET))(this, state);
		}

		::System::Void PopOverlay(::PONEGOPCLPF state)
		{
			return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_POPOVERLAY_OFFSET))(this, state);
		}

		::System::Boolean IsActive(::PONEGOPCLPF state)
		{
			return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ISACTIVE_OFFSET))(this, state);
		}

		::System::Boolean IsBaseState(::PONEGOPCLPF state)
		{
			return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ISBASESTATE_OFFSET))(this, state);
		}

		::System::Void NotifyIfChanged(::PONEGOPCLPF last)
		{
			return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET))(this, last);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void SetInitialState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SETINITIALSTATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean _isCoopMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ISCOOPMODE_OFFSET))(this);
		}

		::System::Void _OnAvatarInOutBattleChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONAVATARINOUTBATTLECHANGE_OFFSET))(this, args);
		}

		::System::Void _OnInOutBangboo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONINOUTBANGBOO_OFFSET))(this, args);
		}

		::System::Void _OnEtherStrongStateInOut(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONETHERSTRONGSTATEINOUT_OFFSET))(this, args);
		}

		::System::Void _OnCoopRegionPlayChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONCOOPREGIONPLAYCHANGE_OFFSET))(this, args);
		}

		::System::Void _OnMainCharacterDie(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONMAINCHARACTERDIE_OFFSET))(this, args);
		}

		::System::Void _OnStreamingGameUnstuckComplete(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGGAMEUNSTUCKCOMPLETE_OFFSET))(this, args);
		}

		::System::Void _OnStreamingHUDStateChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGHUDSTATECHANGE_OFFSET))(this, args);
		}

		::System::Void BindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_BINDEVENTS_OFFSET))(this);
		}

		::System::Void UnbindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_UNBINDEVENTS_OFFSET))(this);
		}

		::System::Void _SetPartnerDateInputMute(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__SETPARTNERDATEINPUTMUTE_OFFSET))(this, enable);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
