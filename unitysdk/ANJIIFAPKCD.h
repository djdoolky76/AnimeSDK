#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KJLPEOPGAMA;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AbilityElationEchoPointChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ANJIIFAPKCD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1559B1C0)
#define ANJIIFAPKCD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1559B320)
#define ANJIIFAPKCD_BGEFMOIHGIN_OFFSET UNITYSDK_OFFSET(0x1559AA50)
#define ANJIIFAPKCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1559B450)
#define ANJIIFAPKCD_DEMDIHFEGLH_OFFSET UNITYSDK_OFFSET(0x1559A870)
#define ANJIIFAPKCD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x1559A1A0)
#define ANJIIFAPKCD_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1559A350)
#define ANJIIFAPKCD_EICNKILONCK_OFFSET UNITYSDK_OFFSET(0x1559AB90)
#define ANJIIFAPKCD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1559A6F0)
#define ANJIIFAPKCD_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0x1559B0C0)
#define ANJIIFAPKCD_FHFBNFGJHOJ_OFFSET UNITYSDK_OFFSET(0x1559A7C0)
#define ANJIIFAPKCD_HOFAONFAFCD_OFFSET UNITYSDK_OFFSET(0x1559AC70)
#define ANJIIFAPKCD_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x1559AD00)
#define ANJIIFAPKCD_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1559A510)
#define ANJIIFAPKCD_KFOGPBOHDFD_OFFSET UNITYSDK_OFFSET(0x1559AC00)
#define ANJIIFAPKCD_KOFGHGIMKBM_OFFSET UNITYSDK_OFFSET(0x1559AB00)
#define ANJIIFAPKCD_KPJHFIAIFLG_OFFSET UNITYSDK_OFFSET(0x1559A6A0)
#define ANJIIFAPKCD_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x1559A2A0)
#define ANJIIFAPKCD_MDGICOJFKBD_OFFSET UNITYSDK_OFFSET(0x1559AEC0)
#define ANJIIFAPKCD_MOFNPKEDOMB_OFFSET UNITYSDK_OFFSET(0x1559AFC0)
#define ANJIIFAPKCD_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x1559AD70)
#define ANJIIFAPKCD_NNFBDADMIED_OFFSET UNITYSDK_OFFSET(0x1559A9A0)
#define ANJIIFAPKCD_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1559A430)
#define ANJIIFAPKCD_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1559A590)
#define ANJIIFAPKCD__ONBIND_OFFSET UNITYSDK_OFFSET(0x1559A0E0)
#define ANJIIFAPKCD__ONTICK_OFFSET UNITYSDK_OFFSET(0x1559A740)

	class ANJIIFAPKCD : public ::FMPCODLIOLG
	{
	public:
		::KJLPEOPGAMA* APPIHABBCGK; // 0x60
		::RPG::Client::LocalizedText* HCPKJEKHAPF; // 0x68
		::UnityEngine::Animator* APPGGMLEPLN; // 0x70
		::UnityEngine::Transform* PIHIJLINMMO; // 0x78
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x80
		::System::Int32 DALCCNHNKHC; // 0x88
		::System::Int32 JFAFBMKCBMJ; // 0x8C
		::System::Int32 OOFHFDPECOC; // 0x90
		::System::Int32 NGCFNPJDCEM; // 0x94
		::System::Int32 NHIPFHBLNEF; // 0x98
		::System::Nullable* KLLBBLOKMEH; // 0x9C
		::System::Int32 FJFIKJOEHMO; // 0xA4
		::System::Nullable* HOGMAFEHCGD; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_ONRETURN_OFFSET))(this);
		}

		::System::Void KPJHFIAIFLG(::KJLPEOPGAMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJLPEOPGAMA*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_KPJHFIAIFLG_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANJIIFAPKCD__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void FHFBNFGJHOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_FHFBNFGJHOJ_OFFSET))(this);
		}

		::System::Void DEMDIHFEGLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_DEMDIHFEGLH_OFFSET))(this);
		}

		::System::Void EICNKILONCK(::RPG::GameCore::AbilityElationEchoPointChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityElationEchoPointChange*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_EICNKILONCK_OFFSET))(this, a1);
		}

		::System::Void KFOGPBOHDFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_KFOGPBOHDFD_OFFSET))(this, a1);
		}

		::System::Void JMBFOHAMFGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_JMBFOHAMFGI_OFFSET))(this, a1);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_NEOFNEBLKKL_OFFSET))(this, a1);
		}

		::System::Void KOFGHGIMKBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_KOFGHGIMKBM_OFFSET))(this);
		}

		::System::Void HOFAONFAFCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_HOFAONFAFCD_OFFSET))(this);
		}

		::System::Void BGEFMOIHGIN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_BGEFMOIHGIN_OFFSET))(this, a1);
		}

		::System::Void NNFBDADMIED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_NNFBDADMIED_OFFSET))(this, a1);
		}

		::System::Void MDGICOJFKBD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_MDGICOJFKBD_OFFSET))(this, a1);
		}

		::System::Void MOFNPKEDOMB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_MOFNPKEDOMB_OFFSET))(this, a1);
		}

		::System::Void EMFNEAJDHHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_EMFNEAJDHHB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
