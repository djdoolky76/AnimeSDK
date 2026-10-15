#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_AHECPMILGFN_OFFSET UNITYSDK_OFFSET(0xD868580)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xD867CC0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_BREATHING_OFFSET UNITYSDK_OFFSET(0xD867C70)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xD8687E0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_CLKGPNLAKGN_OFFSET UNITYSDK_OFFSET(0xD868280)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD8687D0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_FKKDPBMEEOD_OFFSET UNITYSDK_OFFSET(0xD868060)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_HCJHFBEPHLL_OFFSET UNITYSDK_OFFSET(0xD867FC0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_IDGCMDPIFML_OFFSET UNITYSDK_OFFSET(0xD868140)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xD867970)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_OGLEBKPOLED_OFFSET UNITYSDK_OFFSET(0xD868730)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD868480)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD868180)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD867F20)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD8680A0)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_REPLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD867B40)
#define RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xD867D20)

namespace RPG::Client
{
	class MonoSwitchHandHighLightItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Duration; // 0x18
		::System::Boolean IsTrigger; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x20
		::UnityEngine::Material* HighLightMaterial; // 0x28
		::UnityEngine::AnimationCurve* BreathingCurve; // 0x30
		::System::Single CLKJEOCKGKE; // 0x38
		::System::Single NDFEPODIHOH; // 0x3C
		::System::Single DKOFFPPGEFI; // 0x40
		::System::Boolean OPFEOOCLOOL; // 0x44
		::System::Boolean MAOMNJFNJIK; // 0x45
		::System::Byte _padding1[0x2];
		::Il2CppArray<::UnityEngine::Material*>* ABAJIOEFDFB; // 0x48
		::RPG::Client::EntityGameObjectConnection* HDGIEDAAPFF; // 0x50
		static ::System::Int32* StaticGet_LKMJIANNDJF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoSwitchHandHighLightItem")->GetStaticField(0x15050);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_CCTOR_OFFSET))();
		}

		::System::Boolean IsHighLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ISHIGHLIGHT_OFFSET))(this);
		}

		::System::Void ReplayFadeIn(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_REPLAYFADEIN_OFFSET))(this, a1);
		}

		::System::Void Breathing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_BREATHING_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_UPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void OGLEBKPOLED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_OGLEBKPOLED_OFFSET))(this, a1);
		}

		::System::Void FKKDPBMEEOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_FKKDPBMEEOD_OFFSET))(this);
		}

		::System::Void IDGCMDPIFML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_IDGCMDPIFML_OFFSET))(this);
		}

		::System::Void CLKGPNLAKGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_CLKGPNLAKGN_OFFSET))(this);
		}

		::System::Void AHECPMILGFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_AHECPMILGFN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* HCJHFBEPHLL(::UnityEngine::Collider* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDHIGHLIGHTITEM_HCJHFBEPHLL_OFFSET))(this, a1);
		}

	};
}
