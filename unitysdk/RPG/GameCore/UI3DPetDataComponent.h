#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::Client { class ManikinLookAtController; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class ManikinPetConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DPETDATACOMPONENT_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1AA14140)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA14920)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA14680)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ENDDRAG_OFFSET UNITYSDK_OFFSET(0x1AA14220)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1AA13EC0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AA13E20)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x1AA148C0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0x1AA14900)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x1AA148E0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_LOOKATENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0x1AA14910)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AA133E0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA147D0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1AA13430)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1AA13B00)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1AA140A0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETDIMMED_OFFSET UNITYSDK_OFFSET(0x1AA14530)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET UNITYSDK_OFFSET(0x1AA14610)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETLOOKAT_1_OFFSET UNITYSDK_OFFSET(0x1AA14300)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0x1AA14280)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETMUTEAUDIO_OFFSET UNITYSDK_OFFSET(0x1AA14580)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1AA143F0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x1AA148D0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0x1AA14780)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x1AA148F0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_LOOKATENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0x1AA13800)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__APPLYDIMMEDSTATE_OFFSET UNITYSDK_OFFSET(0x1AA139C0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__APPLYIDLETIMERSTATE_OFFSET UNITYSDK_OFFSET(0x1AA13850)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__ONGAMEOBJECTENABLED_OFFSET UNITYSDK_OFFSET(0x1AA14860)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1AA13370)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__REGISTERGAMEOBJECTENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AA13630)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__RELEASEIDLETIMERSTATE_OFFSET UNITYSDK_OFFSET(0x1AA13CF0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__UNREGISTERGAMEOBJECTENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AA13BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DPetDataComponent_TypeDefinitionIndex = 58779;

	class UI3DPetDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action* EndOfUpdateCallback; // 0x18
		::RPG::Client::EntityGameObjectConnection* _GameObjectConnection; // 0x20
		::RPG::Client::ManikinLookAtController* _LookAtController; // 0x28
		::RPG::GameCore::ManikinPetConfig* _JsonConfigRef_k__BackingField; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* _CacheRenderers; // 0x38
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* _IdleShowIndexEnableStates; // 0x48
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x50
		::System::Boolean _IsDimmed; // 0x58
		::System::Boolean _bEnableIdleTimer; // 0x59
		::System::Boolean _bLookAtEnableIdleTimer; // 0x5A
		::System::Boolean _IsGameObjectEnableCallbackRegistered; // 0x5B
		// static const ::System::Object DIMMED_DITHER_ALPHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::ManikinPetConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinPetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void FireEffectByPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, a1);
		}

		::System::Void RemoveEffectByPath(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, a1, a2);
		}

		::System::Void BeginDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_BEGINDRAG_OFFSET))(this);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ENDDRAG_OFFSET))(this);
		}

		::System::Void SetLookAt(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETLOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetLookAt_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETLOOKAT_1_OFFSET))(this, a1);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetDimmed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETDIMMED_OFFSET))(this, a1);
		}

		::System::Void SetMuteAudio(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETMUTEAUDIO_OFFSET))(this, a1);
		}

		::System::Void SetEnableIdleShowIndex(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void _ApplyIdleTimerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__APPLYIDLETIMERSTATE_OFFSET))(this);
		}

		::System::Void _ReleaseIdleTimerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__RELEASEIDLETIMERSTATE_OFFSET))(this);
		}

		::System::Void _RegisterGameObjectEnableCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__REGISTERGAMEOBJECTENABLECALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterGameObjectEnableCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__UNREGISTERGAMEOBJECTENABLECALLBACK_OFFSET))(this);
		}

		::System::Void _OnGameObjectEnabled(::RPG::Client::EntityGameObjectConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityGameObjectConnection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__ONGAMEOBJECTENABLED_OFFSET))(this, a1);
		}

		::System::Void _ApplyDimmedState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__APPLYDIMMEDSTATE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ANIMATORREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ManikinPetConfig* get_JsonConfigRef()
		{
			return ((::RPG::GameCore::ManikinPetConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_JSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinPetConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinPetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_EnableIdleTimer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET))(this, a1);
		}

		::System::Boolean get_LookAtEnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_LOOKATENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_LookAtEnableIdleTimer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_LOOKATENABLEIDLETIMER_OFFSET))(this, a1);
		}

	};
}
