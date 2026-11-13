#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EFJCLCMOLGO;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define FFGJDKEIJIE_AFCJHIGGPGD_OFFSET UNITYSDK_OFFSET(0x130E2210)
#define FFGJDKEIJIE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x130E2DC0)
#define FFGJDKEIJIE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x130E3080)
#define FFGJDKEIJIE_CTOR_OFFSET UNITYSDK_OFFSET(0x130E3310)
#define FFGJDKEIJIE_DJJPOBNAMNH_OFFSET UNITYSDK_OFFSET(0x130E1E40)
#define FFGJDKEIJIE_EKLNFGIOLBL_OFFSET UNITYSDK_OFFSET(0x130E0CE0)
#define FFGJDKEIJIE_FCJBMIFAFJA_OFFSET UNITYSDK_OFFSET(0x130E0C90)
#define FFGJDKEIJIE_FCMAHMAOPJJ_OFFSET UNITYSDK_OFFSET(0x130E22E0)
#define FFGJDKEIJIE_HBDPILJMCBC_OFFSET UNITYSDK_OFFSET(0x130E2BE0)
#define FFGJDKEIJIE_HJDPFIGBCMA_OFFSET UNITYSDK_OFFSET(0x130E1790)
#define FFGJDKEIJIE_IILKMMLMHBJ_OFFSET UNITYSDK_OFFSET(0x130E18F0)
#define FFGJDKEIJIE_KEJILDLIFLF_OFFSET UNITYSDK_OFFSET(0x130E2D00)
#define FFGJDKEIJIE_KLBFBHOPMDH_OFFSET UNITYSDK_OFFSET(0x130E25E0)
#define FFGJDKEIJIE_KNKEMHHBFJO_OFFSET UNITYSDK_OFFSET(0x130E2AF0)
#define FFGJDKEIJIE_KOEIAOJLKHN_OFFSET UNITYSDK_OFFSET(0x130E1670)
#define FFGJDKEIJIE_MDCJADEFONM_OFFSET UNITYSDK_OFFSET(0x130E21A0)
#define FFGJDKEIJIE_MEBMMDCKNHE_OFFSET UNITYSDK_OFFSET(0x130E1AC0)
#define FFGJDKEIJIE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x130E0D30)
#define FFGJDKEIJIE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x130E1DA0)
#define FFGJDKEIJIE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x130E1DF0)
#define FFGJDKEIJIE__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x130E1BC0)
#define FFGJDKEIJIE__ONBIND_OFFSET UNITYSDK_OFFSET(0x130E0780)
#define FFGJDKEIJIE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x130E1B20)
#define FFGJDKEIJIE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x130E1D30)

inline static constexpr unsigned int FFGJDKEIJIE_TypeDefinitionIndex = 73960;

	class FFGJDKEIJIE : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::UnityEngine::UI::Image* AJDAFKNJNPP; // 0x68
		::UnityEngine::Transform* AGINCDMNDFD; // 0x70
		::UnityEngine::UI::Image* MAOLDDGOHKO; // 0x78
		::RPG::GameCore::SkillData* JDPPBAGBACJ; // 0x80
		::UnityEngine::Transform* MMNAFKKNOJH; // 0x88
		::UnityEngine::Transform* FLNHOLMLGDF; // 0x90
		::RPG::Client::SPProgress* NAAODEIIMCI; // 0x98
		::UnityEngine::UI::Image* KNCPDONFMMG; // 0xA0
		::RPG::Client::SPProgress* LGGEDKJGHNA; // 0xA8
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0xB0
		::UnityEngine::UI::Image* IFPFGDMAJCF; // 0xB8
		::UnityEngine::Animation* FIEHPEGNBEL; // 0xC0
		::RPG::GameCore::FixPoint EEFCFOANBFE; // 0xC8
		::System::Single LNJOADEMHEI; // 0xD0
		::System::Boolean ELBLPNCNALB; // 0xD4
		::System::Boolean HHGNLCAGFLA; // 0xD5
		// static const ::System::Object NAEOMKGBNPP; // 0x0
		// static const ::System::String* BBJHMBBJLIA; // 0x0
		// static const ::System::String* EDGBEKOECBN; // 0x0
		// static const ::System::String* CHNKMMNDMLE; // 0x0
		// static const ::System::String* CDGJPJOIEHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE__ONBIND_OFFSET))(this);
		}

		::UnityEngine::UI::Image* FCJBMIFAFJA()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_FCJBMIFAFJA_OFFSET))(this);
		}

		::RPG::Client::SPProgress* EKLNFGIOLBL()
		{
			return ((::RPG::Client::SPProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_EKLNFGIOLBL_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void IILKMMLMHBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_IILKMMLMHBJ_OFFSET))(this, a1);
		}

		::System::Void MEBMMDCKNHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_MEBMMDCKNHE_OFFSET))(this);
		}

		::System::Void KOEIAOJLKHN(::RPG::Client::SPProgress* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_KOEIAOJLKHN_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FFGJDKEIJIE__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_ONRETURN_OFFSET))(this);
		}

		::System::Void DJJPOBNAMNH(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_DJJPOBNAMNH_OFFSET))(this, a1);
		}

		::System::Void MDCJADEFONM(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_MDCJADEFONM_OFFSET))(this, a1);
		}

		::System::Void AFCJHIGGPGD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_AFCJHIGGPGD_OFFSET))(this, a1);
		}

		::System::Void HJDPFIGBCMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_HJDPFIGBCMA_OFFSET))(this);
		}

		::System::Void FCMAHMAOPJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_FCMAHMAOPJJ_OFFSET))(this);
		}

		::System::Void KLBFBHOPMDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_KLBFBHOPMDH_OFFSET))(this);
		}

		::System::Void KNKEMHHBFJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_KNKEMHHBFJO_OFFSET))(this, a1);
		}

		::System::Void HBDPILJMCBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_HBDPILJMCBC_OFFSET))(this, a1);
		}

		::System::Void KEJILDLIFLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_KEJILDLIFLF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
