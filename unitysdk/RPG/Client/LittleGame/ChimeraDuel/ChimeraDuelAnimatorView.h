#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE70060)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE70050)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0xDE6E820)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xDE6F040)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_IMOJCHKGCAA_OFFSET UNITYSDK_OFFSET(0xDE6FE30)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_JAIHJDJLGLD_OFFSET UNITYSDK_OFFSET(0xDE6F5A0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_JPPHNADENJD_OFFSET UNITYSDK_OFFSET(0xDE6FBF0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xDE6F530)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_OANPILEOMJI_OFFSET UNITYSDK_OFFSET(0xDE6F7B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_OBKGEBIEKGP_OFFSET UNITYSDK_OFFSET(0xDE6F9D0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PAIDAEBKNPL_OFFSET UNITYSDK_OFFSET(0xDE6F240)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYBACK_OFFSET UNITYSDK_OFFSET(0xDE6F0E0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYEYEANIMATION_OFFSET UNITYSDK_OFFSET(0xDE6EEE0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0xDE6E7D0)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelAnimatorView_TypeDefinitionIndex = 80444;

	class ChimeraDuelAnimatorView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single HurtCDTimeConfig; // 0x18
		::System::Single LNLADKOLPFM; // 0x1C
		static ::System::Int32* StaticGet_OJMAKFGNBOM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0A0);
		}

		static ::System::Int32* StaticGet_BMOKIOMMCIL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0A4);
		}

		static ::System::Int32* StaticGet_DODGEHMJGNA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0A8);
		}

		static ::System::Int32* StaticGet_HILLGOLHOLO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0AC);
		}

		static ::System::Int32* StaticGet_LFJHKGPGMKN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0B0);
		}

		static ::System::Int32* StaticGet_HCNJEDMDAMK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0B4);
		}

		static ::System::Int32* StaticGet_OJNCNOHNEEH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0B8);
		}

		static ::System::Int32* StaticGet_DEDJFJNKCAG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0BC);
		}

		static ::System::Int32* StaticGet_DFIPBEILGAH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0C0);
		}

		static ::System::Int32* StaticGet_FLDGLNNLAFK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC0C4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_CCTOR_OFFSET))();
		}

		::System::Void Play(::RPG::GameCore::ChimeraBattleAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAY_OFFSET))(this, a1);
		}

		::System::Void PlayEyeAnimation(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYEYEANIMATION_OFFSET))(this, a1);
		}

		::System::Void PlayBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYBACK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void EGNMELNENAC(::RPG::GameCore::ChimeraBattleAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_EGNMELNENAC_OFFSET))(this, a1);
		}

		::System::Void PAIDAEBKNPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PAIDAEBKNPL_OFFSET))(this);
		}

		::System::Void JPPHNADENJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_JPPHNADENJD_OFFSET))(this);
		}

		::System::Void IMOJCHKGCAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_IMOJCHKGCAA_OFFSET))(this);
		}

		::System::Void OBKGEBIEKGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_OBKGEBIEKGP_OFFSET))(this);
		}

		::System::Void JAIHJDJLGLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_JAIHJDJLGLD_OFFSET))(this);
		}

		::System::Void OANPILEOMJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_OANPILEOMJI_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_GET_ANIMATOR_OFFSET))(this);
		}

	};
}
