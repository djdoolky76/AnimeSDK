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
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define LLIOIOHMNEP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB7732B0)
#define LLIOIOHMNEP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB7734F0)
#define LLIOIOHMNEP_CPPEDLEIALN_OFFSET UNITYSDK_OFFSET(0xB772680)
#define LLIOIOHMNEP_CTOR_OFFSET UNITYSDK_OFFSET(0xB7736F0)
#define LLIOIOHMNEP_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB771C20)
#define LLIOIOHMNEP_EIEGENKODBN_OFFSET UNITYSDK_OFFSET(0xB772DC0)
#define LLIOIOHMNEP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB772090)
#define LLIOIOHMNEP_EMIHBGIHCMD_OFFSET UNITYSDK_OFFSET(0xB7731C0)
#define LLIOIOHMNEP_HMKFHMKIOPK_OFFSET UNITYSDK_OFFSET(0xB772E40)
#define LLIOIOHMNEP_IAHKKGHGJFN_OFFSET UNITYSDK_OFFSET(0xB772EC0)
#define LLIOIOHMNEP_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB771F20)
#define LLIOIOHMNEP_OMHAOIEPNCB_OFFSET UNITYSDK_OFFSET(0xB773040)
#define LLIOIOHMNEP__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7712B0)

inline static constexpr unsigned int LLIOIOHMNEP_TypeDefinitionIndex = 72104;

	class LLIOIOHMNEP : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* KHEKAEPGEFJ; // 0x60
		::UnityEngine::Animator* KMDJLABGAIL; // 0x68
		::UnityEngine::Animation* LJDAFFMNCBH; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* FBJDADLJKBK; // 0x78
		::UnityEngine::UI::Text* CDDKKEHPBAO; // 0x80
		::UnityEngine::UI::Button* PEBNIHKBICH; // 0x88
		::UnityEngine::UI::Button* NNKMCKBIKEI; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* FGPACFGPMIF; // 0x98
		::UnityEngine::UI::Text* ACPBNFHIHID; // 0xA0
		::System::String* IECFNAFDEGN; // 0xA8
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xB0
		::UnityEngine::Transform* OCFPCNALDKP; // 0xB8
		::UnityEngine::Transform* KCBNCGDICGN; // 0xC0
		::UnityEngine::UI::Button* LMBPJMHGLBE; // 0xC8
		::UnityEngine::UI::Button* KHPBNLJHDNN; // 0xD0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* HCJAHGMOGPH; // 0xD8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* JPNMJNMNJEB; // 0xE0
		::UnityEngine::Transform* MCNEMMCFEIK; // 0xE8
		::RPG::Client::ActivityFeverTimePileToast* LNNOLHNKOJJ; // 0xF0
		::System::String* PABPGCLAAMF; // 0xF8
		::System::Int32 MBIKNBEBMCH; // 0x100
		::System::UInt32 JGBABANKIKL; // 0x104
		::System::Boolean IDBEBIDMHME; // 0x108
		::System::Byte _padding0[0x3];
		::System::UInt32 LKGLNFBMHOG; // 0x10C
		::RPG::GameCore::FeverTimePeriodType DAEKEPDOFOG; // 0x110
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIOIOHMNEP__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void EIEGENKODBN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_EIEGENKODBN_OFFSET))(this, a1);
		}

		::System::Void HMKFHMKIOPK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_HMKFHMKIOPK_OFFSET))(this, a1);
		}

		::System::Void IAHKKGHGJFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_IAHKKGHGJFN_OFFSET))(this, a1);
		}

		::System::Void OMHAOIEPNCB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_OMHAOIEPNCB_OFFSET))(this, a1);
		}

		::System::Void CPPEDLEIALN(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_CPPEDLEIALN_OFFSET))(this, a1);
		}

		::System::Void EMIHBGIHCMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_EMIHBGIHCMD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIOIOHMNEP_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
