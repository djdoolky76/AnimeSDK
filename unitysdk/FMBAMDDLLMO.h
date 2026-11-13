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

#define FMBAMDDLLMO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18976AF0)
#define FMBAMDDLLMO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18976D70)
#define FMBAMDDLLMO_CPPEDLEIALN_OFFSET UNITYSDK_OFFSET(0x18975C00)
#define FMBAMDDLLMO_CTOR_OFFSET UNITYSDK_OFFSET(0x18976FB0)
#define FMBAMDDLLMO_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x18974D90)
#define FMBAMDDLLMO_EIEGENKODBN_OFFSET UNITYSDK_OFFSET(0x18975800)
#define FMBAMDDLLMO_EMIHBGIHCMD_OFFSET UNITYSDK_OFFSET(0x189768D0)
#define FMBAMDDLLMO_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0x18976810)
#define FMBAMDDLLMO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18974060)
#define FMBAMDDLLMO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x18974080)
#define FMBAMDDLLMO_HMKFHMKIOPK_OFFSET UNITYSDK_OFFSET(0x18975880)
#define FMBAMDDLLMO_IAHKKGHGJFN_OFFSET UNITYSDK_OFFSET(0x18975900)
#define FMBAMDDLLMO_IPCBFOGOKKG_OFFSET UNITYSDK_OFFSET(0x189769C0)
#define FMBAMDDLLMO_OMHAOIEPNCB_OFFSET UNITYSDK_OFFSET(0x18975A80)
#define FMBAMDDLLMO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x18974070)
#define FMBAMDDLLMO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18974F50)
#define FMBAMDDLLMO__ONBIND_OFFSET UNITYSDK_OFFSET(0x189740C0)
#define FMBAMDDLLMO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x189750C0)

inline static constexpr unsigned int FMBAMDDLLMO_TypeDefinitionIndex = 74145;

	class FMBAMDDLLMO : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* FGPACFGPMIF; // 0x60
		::UnityEngine::UI::Button* PEBNIHKBICH; // 0x68
		::UnityEngine::Transform* PLNEDDNHEPC; // 0x70
		::UnityEngine::UI::Text* CDDKKEHPBAO; // 0x78
		::UnityEngine::Animation* LJDAFFMNCBH; // 0x80
		::RPG::Client::StoryFeverPileToast* NPAFJPLHKDM; // 0x88
		::System::String* IECFNAFDEGN; // 0x90
		::UnityEngine::UI::Text* KHEKAEPGEFJ; // 0x98
		::UnityEngine::Transform* CPGEABJPLMB; // 0xA0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* HCJAHGMOGPH; // 0xA8
		::System::String* KIKBMCDIJJD; // 0xB0
		::UnityEngine::UI::Button* LMBPJMHGLBE; // 0xB8
		::System::String* PABPGCLAAMF; // 0xC0
		::UnityEngine::UI::Text* ACPBNFHIHID; // 0xC8
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xD0
		::UnityEngine::Animator* KMDJLABGAIL; // 0xD8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* FBJDADLJKBK; // 0xE0
		::UnityEngine::Transform* MCNEMMCFEIK; // 0xE8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* JPNMJNMNJEB; // 0xF0
		::UnityEngine::Transform* OCFPCNALDKP; // 0xF8
		::RPG::GameCore::FeverTimePeriodType DAEKEPDOFOG; // 0x100
		::System::UInt32 LKGLNFBMHOG; // 0x104
		::System::UInt32 JGBABANKIKL; // 0x108
		::System::Int32 MDLFDFILLJP; // 0x10C
		::RPG::GameCore::FeverTimePeriodType AOMDAKBACJL; // 0x110
		::System::Int32 _Index_k__BackingField; // 0x114
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
