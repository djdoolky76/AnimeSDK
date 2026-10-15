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
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define FFGJDKEIJIE_AFCJHIGGPGD_OFFSET UNITYSDK_OFFSET(0x1572FCE0)
#define FFGJDKEIJIE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15730800)
#define FFGJDKEIJIE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15730AC0)
#define FFGJDKEIJIE_CTOR_OFFSET UNITYSDK_OFFSET(0x15730D40)
#define FFGJDKEIJIE_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x1572F5F0)
#define FFGJDKEIJIE_DJJPOBNAMNH_OFFSET UNITYSDK_OFFSET(0x1572F910)
#define FFGJDKEIJIE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1572F800)
#define FFGJDKEIJIE_EKLNFGIOLBL_OFFSET UNITYSDK_OFFSET(0x1572E7E0)
#define FFGJDKEIJIE_FCJBMIFAFJA_OFFSET UNITYSDK_OFFSET(0x1572E7A0)
#define FFGJDKEIJIE_FCMAHMAOPJJ_OFFSET UNITYSDK_OFFSET(0x1572FDB0)
#define FFGJDKEIJIE_HBDPILJMCBC_OFFSET UNITYSDK_OFFSET(0x15730620)
#define FFGJDKEIJIE_HJDPFIGBCMA_OFFSET UNITYSDK_OFFSET(0x1572F260)
#define FFGJDKEIJIE_IILKMMLMHBJ_OFFSET UNITYSDK_OFFSET(0x1572F3C0)
#define FFGJDKEIJIE_KEJILDLIFLF_OFFSET UNITYSDK_OFFSET(0x15730740)
#define FFGJDKEIJIE_KLBFBHOPMDH_OFFSET UNITYSDK_OFFSET(0x15730050)
#define FFGJDKEIJIE_KNKEMHHBFJO_OFFSET UNITYSDK_OFFSET(0x15730530)
#define FFGJDKEIJIE_KOEIAOJLKHN_OFFSET UNITYSDK_OFFSET(0x1572F140)
#define FFGJDKEIJIE_MDCJADEFONM_OFFSET UNITYSDK_OFFSET(0x1572FC70)
#define FFGJDKEIJIE_MEBMMDCKNHE_OFFSET UNITYSDK_OFFSET(0x1572F590)
#define FFGJDKEIJIE_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x1572F690)
#define FFGJDKEIJIE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1572E820)
#define FFGJDKEIJIE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1572F870)
#define FFGJDKEIJIE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1572F8C0)
#define FFGJDKEIJIE__ONBIND_OFFSET UNITYSDK_OFFSET(0x1572E520)

inline static constexpr unsigned int FFGJDKEIJIE_TypeDefinitionIndex = 71936;

	class FFGJDKEIJIE : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::SPProgress* LGGEDKJGHNA; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::RPG::Client::SPProgress* NAAODEIIMCI; // 0x70
		::UnityEngine::UI::Image* IFPFGDMAJCF; // 0x78
		::UnityEngine::Transform* MMNAFKKNOJH; // 0x80
		::UnityEngine::Animation* FIEHPEGNBEL; // 0x88
		::UnityEngine::UI::Image* MAOLDDGOHKO; // 0x90
		::UnityEngine::UI::Image* KNCPDONFMMG; // 0x98
		::UnityEngine::UI::Image* AJDAFKNJNPP; // 0xA0
		::UnityEngine::Transform* FLNHOLMLGDF; // 0xA8
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0xB0
		::UnityEngine::Transform* AGINCDMNDFD; // 0xB8
		::System::Single LNJOADEMHEI; // 0xC0
		::System::Boolean ELBLPNCNALB; // 0xC4
		::System::Boolean HHGNLCAGFLA; // 0xC5
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FixPoint EEFCFOANBFE; // 0xC8
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJDKEIJIE_EKGCGIDIFJJ_OFFSET))(this);
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
