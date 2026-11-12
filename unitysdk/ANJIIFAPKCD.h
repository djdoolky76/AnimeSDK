#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KJLPEOPGAMA;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AbilityElationEchoPointChange; }
namespace RPG::GameCore { class AbilityElationEchoPointMaxChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ANJIIFAPKCD_AFHLEHCHKOM_OFFSET UNITYSDK_OFFSET(0x167046E0)
#define ANJIIFAPKCD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16704E30)
#define ANJIIFAPKCD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16704FD0)
#define ANJIIFAPKCD_BGEFMOIHGIN_OFFSET UNITYSDK_OFFSET(0x16704530)
#define ANJIIFAPKCD_CTOR_OFFSET UNITYSDK_OFFSET(0x16705140)
#define ANJIIFAPKCD_DEMDIHFEGLH_OFFSET UNITYSDK_OFFSET(0x16704350)
#define ANJIIFAPKCD_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16703F70)
#define ANJIIFAPKCD_EICNKILONCK_OFFSET UNITYSDK_OFFSET(0x16704670)
#define ANJIIFAPKCD_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0x16704D30)
#define ANJIIFAPKCD_FHFBNFGJHOJ_OFFSET UNITYSDK_OFFSET(0x167042A0)
#define ANJIIFAPKCD_HOFAONFAFCD_OFFSET UNITYSDK_OFFSET(0x167047D0)
#define ANJIIFAPKCD_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x16704860)
#define ANJIIFAPKCD_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x167040F0)
#define ANJIIFAPKCD_KFOGPBOHDFD_OFFSET UNITYSDK_OFFSET(0x16704760)
#define ANJIIFAPKCD_KOFGHGIMKBM_OFFSET UNITYSDK_OFFSET(0x167045E0)
#define ANJIIFAPKCD_KPJHFIAIFLG_OFFSET UNITYSDK_OFFSET(0x16704050)
#define ANJIIFAPKCD_MDGICOJFKBD_OFFSET UNITYSDK_OFFSET(0x16704A20)
#define ANJIIFAPKCD_MOFNPKEDOMB_OFFSET UNITYSDK_OFFSET(0x16704C30)
#define ANJIIFAPKCD_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x167048D0)
#define ANJIIFAPKCD_NICMECDGKJO_OFFSET UNITYSDK_OFFSET(0x16704B20)
#define ANJIIFAPKCD_NNFBDADMIED_OFFSET UNITYSDK_OFFSET(0x16704480)
#define ANJIIFAPKCD__ONBIND_OFFSET UNITYSDK_OFFSET(0x16703CD0)
#define ANJIIFAPKCD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16703F10)
#define ANJIIFAPKCD__ONTICK_OFFSET UNITYSDK_OFFSET(0x167041C0)
#define ANJIIFAPKCD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16704170)

inline static constexpr unsigned int ANJIIFAPKCD_TypeDefinitionIndex = 73457;

	class ANJIIFAPKCD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::RPG::Client::LocalizedText* HCPKJEKHAPF; // 0x68
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x70
		::KJLPEOPGAMA* APPIHABBCGK; // 0x78
		::UnityEngine::Transform* PIHIJLINMMO; // 0x80
		::System::Int32 NHIPFHBLNEF; // 0x88
		::System::Int32 NGCFNPJDCEM; // 0x8C
		::System::Int32 OOFHFDPECOC; // 0x90
		::System::Nullable_1<::System::Int32> KLLBBLOKMEH; // 0x94
		::System::Int32 JFAFBMKCBMJ; // 0x9C
		::System::Int32 FJFIKJOEHMO; // 0xA0
		::System::Int32 DALCCNHNKHC; // 0xA4
		::System::Nullable_1<::System::Boolean> HOGMAFEHCGD; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ANJIIFAPKCD__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void KPJHFIAIFLG(::KJLPEOPGAMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJLPEOPGAMA*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_KPJHFIAIFLG_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJIIFAPKCD__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANJIIFAPKCD__ONTICK_OFFSET))(this, a1);
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

		::System::Void AFHLEHCHKOM(::RPG::GameCore::AbilityElationEchoPointMaxChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityElationEchoPointMaxChange*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_AFHLEHCHKOM_OFFSET))(this, a1);
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

		::System::Void NICMECDGKJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJIIFAPKCD_NICMECDGKJO_OFFSET))(this, a1);
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
