#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
namespace RPG::Client { class ActivityFeverTimePileToast; }
namespace RPG::Client { class ProgressBar; }
namespace RPG::GameCore { class FeverTimeInfoChangeParam; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define OFOICEDIGKB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18DF3360)
#define OFOICEDIGKB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18DF35A0)
#define OFOICEDIGKB_CPPEDLEIALN_OFFSET UNITYSDK_OFFSET(0x18DF2A20)
#define OFOICEDIGKB_CTOR_OFFSET UNITYSDK_OFFSET(0x18DF37A0)
#define OFOICEDIGKB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x18DF1490)
#define OFOICEDIGKB_EIEGENKODBN_OFFSET UNITYSDK_OFFSET(0x18DF2620)
#define OFOICEDIGKB_EMIHBGIHCMD_OFFSET UNITYSDK_OFFSET(0x18DF3270)
#define OFOICEDIGKB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18DF1430)
#define OFOICEDIGKB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x18DF1450)
#define OFOICEDIGKB_HMKFHMKIOPK_OFFSET UNITYSDK_OFFSET(0x18DF26A0)
#define OFOICEDIGKB_IAHKKGHGJFN_OFFSET UNITYSDK_OFFSET(0x18DF2720)
#define OFOICEDIGKB_OMHAOIEPNCB_OFFSET UNITYSDK_OFFSET(0x18DF28A0)
#define OFOICEDIGKB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x18DF1440)
#define OFOICEDIGKB__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18DF1790)
#define OFOICEDIGKB__ONBIND_OFFSET UNITYSDK_OFFSET(0x18DEFD30)
#define OFOICEDIGKB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18DF1900)

inline static constexpr unsigned int OFOICEDIGKB_TypeDefinitionIndex = 73352;

	class OFOICEDIGKB : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* FGPACFGPMIF; // 0x60
		::UnityEngine::UI::Image* ODLNIKEKHHB; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* JPNMJNMNJEB; // 0x70
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x78
		::UnityEngine::Transform* MCNEMMCFEIK; // 0x80
		::System::String* PABPGCLAAMF; // 0x88
		::UnityEngine::Animation* MKGKFMNCCLH; // 0x90
		::UnityEngine::UI::Button* PEBNIHKBICH; // 0x98
		::UnityEngine::Animator* KMDJLABGAIL; // 0xA0
		::UnityEngine::Animation* LJDAFFMNCBH; // 0xA8
		::RPG::Client::ActivityFeverTimePileToast* LNNOLHNKOJJ; // 0xB0
		::UnityEngine::UI::Text* CDDKKEHPBAO; // 0xB8
		::UnityEngine::Animation* COJLBDCOEIG; // 0xC0
		::UnityEngine::Transform* OCFPCNALDKP; // 0xC8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* FBJDADLJKBK; // 0xD0
		::UnityEngine::UI::Button* KHPBNLJHDNN; // 0xD8
		::UnityEngine::UI::Button* NNKMCKBIKEI; // 0xE0
		::UnityEngine::UI::Image* JHHAHIDEMHG; // 0xE8
		::UnityEngine::Animation* JOCOCFOPFBI; // 0xF0
		::System::String* IECFNAFDEGN; // 0xF8
		::UnityEngine::UI::Button* LMBPJMHGLBE; // 0x100
		::UnityEngine::UI::Image* LFOCDPEMLOH; // 0x108
		::UnityEngine::UI::Text* ACPBNFHIHID; // 0x110
		::UnityEngine::Transform* KCBNCGDICGN; // 0x118
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* HCJAHGMOGPH; // 0x120
		::UnityEngine::UI::Text* KHEKAEPGEFJ; // 0x128
		::System::UInt32 LKGLNFBMHOG; // 0x130
		::System::Int32 _Index_k__BackingField; // 0x134
		::System::Int32 MBIKNBEBMCH; // 0x138
		::System::UInt32 JGBABANKIKL; // 0x13C
		::RPG::GameCore::FeverTimePeriodType DAEKEPDOFOG; // 0x140
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOICEDIGKB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOICEDIGKB__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOICEDIGKB_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFOICEDIGKB_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOICEDIGKB_GET_TRANS_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOICEDIGKB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOICEDIGKB__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOICEDIGKB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void EIEGENKODBN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFOICEDIGKB_EIEGENKODBN_OFFSET))(this, a1);
		}

		::System::Void HMKFHMKIOPK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFOICEDIGKB_HMKFHMKIOPK_OFFSET))(this, a1);
		}

		::System::Void IAHKKGHGJFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFOICEDIGKB_IAHKKGHGJFN_OFFSET))(this, a1);
		}

		::System::Void OMHAOIEPNCB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFOICEDIGKB_OMHAOIEPNCB_OFFSET))(this, a1);
		}

		::System::Void CPPEDLEIALN(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + OFOICEDIGKB_CPPEDLEIALN_OFFSET))(this, a1);
		}

		::System::Void EMIHBGIHCMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFOICEDIGKB_EMIHBGIHCMD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOICEDIGKB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOICEDIGKB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
