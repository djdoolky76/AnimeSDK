#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
namespace RPG::Client { class ProgressBar; }
namespace RPG::Client { class StoryFeverPileToast; }
namespace RPG::GameCore { class FeverTimeInfoChangeParam; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define FMBAMDDLLMO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x167B7290)
#define FMBAMDDLLMO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x167B7510)
#define FMBAMDDLLMO_CPPEDLEIALN_OFFSET UNITYSDK_OFFSET(0x167B63B0)
#define FMBAMDDLLMO_CTOR_OFFSET UNITYSDK_OFFSET(0x167B7750)
#define FMBAMDDLLMO_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x167B5540)
#define FMBAMDDLLMO_EIEGENKODBN_OFFSET UNITYSDK_OFFSET(0x167B5FB0)
#define FMBAMDDLLMO_EMIHBGIHCMD_OFFSET UNITYSDK_OFFSET(0x167B7070)
#define FMBAMDDLLMO_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0x167B6FB0)
#define FMBAMDDLLMO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x167B4810)
#define FMBAMDDLLMO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x167B4830)
#define FMBAMDDLLMO_HMKFHMKIOPK_OFFSET UNITYSDK_OFFSET(0x167B6030)
#define FMBAMDDLLMO_IAHKKGHGJFN_OFFSET UNITYSDK_OFFSET(0x167B60B0)
#define FMBAMDDLLMO_IPCBFOGOKKG_OFFSET UNITYSDK_OFFSET(0x167B7160)
#define FMBAMDDLLMO_OMHAOIEPNCB_OFFSET UNITYSDK_OFFSET(0x167B6230)
#define FMBAMDDLLMO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x167B4820)
#define FMBAMDDLLMO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x167B5700)
#define FMBAMDDLLMO__ONBIND_OFFSET UNITYSDK_OFFSET(0x167B4870)
#define FMBAMDDLLMO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x167B5870)

inline static constexpr unsigned int FMBAMDDLLMO_TypeDefinitionIndex = 74146;

	class FMBAMDDLLMO : public ::FMPCODLIOLG
	{
	public:
		::System::String* PABPGCLAAMF; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* FGPACFGPMIF; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* FBJDADLJKBK; // 0x70
		::UnityEngine::UI::Text* KHEKAEPGEFJ; // 0x78
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x80
		::RPG::Client::StoryFeverPileToast* NPAFJPLHKDM; // 0x88
		::UnityEngine::UI::Button* LMBPJMHGLBE; // 0x90
		::UnityEngine::Transform* CPGEABJPLMB; // 0x98
		::System::String* IECFNAFDEGN; // 0xA0
		::UnityEngine::UI::Text* CDDKKEHPBAO; // 0xA8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* JPNMJNMNJEB; // 0xB0
		::System::String* KIKBMCDIJJD; // 0xB8
		::UnityEngine::Transform* MCNEMMCFEIK; // 0xC0
		::UnityEngine::Animation* LJDAFFMNCBH; // 0xC8
		::UnityEngine::UI::Text* ACPBNFHIHID; // 0xD0
		::UnityEngine::Transform* PLNEDDNHEPC; // 0xD8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* HCJAHGMOGPH; // 0xE0
		::UnityEngine::UI::Button* PEBNIHKBICH; // 0xE8
		::UnityEngine::Animator* KMDJLABGAIL; // 0xF0
		::UnityEngine::Transform* OCFPCNALDKP; // 0xF8
		::RPG::GameCore::FeverTimePeriodType AOMDAKBACJL; // 0x100
		::System::Int32 _Index_k__BackingField; // 0x104
		::System::Int32 MDLFDFILLJP; // 0x108
		::System::UInt32 JGBABANKIKL; // 0x10C
		::RPG::GameCore::FeverTimePeriodType DAEKEPDOFOG; // 0x110
		::System::UInt32 LKGLNFBMHOG; // 0x114
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_GET_TRANS_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAMDDLLMO__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAMDDLLMO__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAMDDLLMO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void EIEGENKODBN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_EIEGENKODBN_OFFSET))(this, a1);
		}

		::System::Void HMKFHMKIOPK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_HMKFHMKIOPK_OFFSET))(this, a1);
		}

		::System::Void IAHKKGHGJFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_IAHKKGHGJFN_OFFSET))(this, a1);
		}

		::System::Void OMHAOIEPNCB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_OMHAOIEPNCB_OFFSET))(this, a1);
		}

		::System::Void CPPEDLEIALN(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_CPPEDLEIALN_OFFSET))(this, a1);
		}

		::System::Void FKEBMDNHDFK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_FKEBMDNHDFK_OFFSET))(this, a1);
		}

		::System::Void EMIHBGIHCMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_EMIHBGIHCMD_OFFSET))(this, a1);
		}

		::System::Void IPCBFOGOKKG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_IPCBFOGOKKG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAMDDLLMO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
