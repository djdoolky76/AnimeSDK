#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillUIState.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace RPG::Client { class BattleSilverWolf999UltraSkillUIData; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define PMCKIIMPIIA_CPKJAFPMBDC_OFFSET UNITYSDK_OFFSET(0xC3162F0)
#define PMCKIIMPIIA_CTOR_OFFSET UNITYSDK_OFFSET(0xC316850)
#define PMCKIIMPIIA_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC315FA0)
#define PMCKIIMPIIA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC316000)
#define PMCKIIMPIIA_ENAALJAHDBL_OFFSET UNITYSDK_OFFSET(0xC3166B0)
#define PMCKIIMPIIA_FPONJAKLBAN_OFFSET UNITYSDK_OFFSET(0xC3162A0)
#define PMCKIIMPIIA_IGMFCMMBJKK_OFFSET UNITYSDK_OFFSET(0xC316390)
#define PMCKIIMPIIA_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC316050)
#define PMCKIIMPIIA_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xC316580)
#define PMCKIIMPIIA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC3160E0)
#define PMCKIIMPIIA_OEDFFAKANMI_OFFSET UNITYSDK_OFFSET(0xC316250)
#define PMCKIIMPIIA_OOHFDIKFCIK_OFFSET UNITYSDK_OFFSET(0xC316170)
#define PMCKIIMPIIA__ONBIND_OFFSET UNITYSDK_OFFSET(0xC315EB0)

	class PMCKIIMPIIA : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraSkillUIState, ::System::String*>* HFANKPJEHDA; // 0x68
		::UnityEngine::UI::Image* LKBKDNAMNEG; // 0x70
		::RPG::Client::BattleSilverWolf999CustomUIData* APPIHABBCGK; // 0x78
		::UnityEngine::Animation* PMOJILOJEPE; // 0x80
		::RPG::GameCore::SilverWolf999UltraSkillUIState LDAJGMLDPHM; // 0x88
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Boolean OOHFDIKFCIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_OOHFDIKFCIK_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void CPKJAFPMBDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_CPKJAFPMBDC_OFFSET))(this);
		}

		::System::Void IGMFCMMBJKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_IGMFCMMBJKK_OFFSET))(this);
		}

		::System::Void ENAALJAHDBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_ENAALJAHDBL_OFFSET))(this);
		}

		::System::Void FPONJAKLBAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_FPONJAKLBAN_OFFSET))(this);
		}

		::System::Void LEEEAMMHPFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_LEEEAMMHPFM_OFFSET))(this);
		}

		::RPG::Client::BattleSilverWolf999UltraSkillUIData* OEDFFAKANMI()
		{
			return ((::RPG::Client::BattleSilverWolf999UltraSkillUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCKIIMPIIA_OEDFFAKANMI_OFFSET))(this);
		}

	};
