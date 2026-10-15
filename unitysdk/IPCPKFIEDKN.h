#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }
namespace RPG::Client { class TabContentAnimation; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define IPCPKFIEDKN_ALMEACDMKPD_OFFSET UNITYSDK_OFFSET(0x1651DAD0)
#define IPCPKFIEDKN_CHDHFIFHDCH_OFFSET UNITYSDK_OFFSET(0x1651DD00)
#define IPCPKFIEDKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1651D7A0)
#define IPCPKFIEDKN_FFBMIEFHAPL_OFFSET UNITYSDK_OFFSET(0x1651E030)
#define IPCPKFIEDKN_HKMGGMCDCAO_OFFSET UNITYSDK_OFFSET(0x1651DFE0)
#define IPCPKFIEDKN_IHOPMDIIEIH_OFFSET UNITYSDK_OFFSET(0x1651DC90)
#define IPCPKFIEDKN_JEFBHFHNGGN_OFFSET UNITYSDK_OFFSET(0x1651D7B0)
#define IPCPKFIEDKN_JLGEMCDBJPN_OFFSET UNITYSDK_OFFSET(0x1651DBD0)
#define IPCPKFIEDKN_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0x1651D7F0)

	class IPCPKFIEDKN : public ::System::Object
	{
	public:
		::RPG::Client::RPGAnimationEvent* OCJEMLGOFEI; // 0x10
		::UnityEngine::Transform* BKPOHOCNDOL; // 0x18
		::RPG::Client::TabContentAnimation* KCOAILOHDND; // 0x20
		::System::String* KKBNFAICNNG; // 0x28
		::System::Boolean AHEHOBIGGLM; // 0x30
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IPCPKFIEDKN_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* JEFBHFHNGGN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCPKFIEDKN_JEFBHFHNGGN_OFFSET))(this);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IPCPKFIEDKN_NJOBMENFBFJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HKMGGMCDCAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCPKFIEDKN_HKMGGMCDCAO_OFFSET))(this);
		}

		::System::Boolean IHOPMDIIEIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCPKFIEDKN_IHOPMDIIEIH_OFFSET))(this);
		}

		::RPG::Client::TabContentAnimation* ALMEACDMKPD()
		{
			return ((::RPG::Client::TabContentAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCPKFIEDKN_ALMEACDMKPD_OFFSET))(this);
		}

		::System::Boolean CHDHFIFHDCH(::RPG::Client::TabContentAnimation* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TabContentAnimation*, ::System::Boolean, ::System::Boolean, ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack*))((::PBYTE)hIl2Cpp + IPCPKFIEDKN_CHDHFIFHDCH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FFBMIEFHAPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCPKFIEDKN_FFBMIEFHAPL_OFFSET))(this);
		}

		::System::Void JLGEMCDBJPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCPKFIEDKN_JLGEMCDBJPN_OFFSET))(this);
		}

	};
