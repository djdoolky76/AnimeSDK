#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xD41CCC0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD41CCB0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0xD41B480)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xD41BCA0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_IMOJCHKGCAA_OFFSET UNITYSDK_OFFSET(0xD41CA90)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_JAIHJDJLGLD_OFFSET UNITYSDK_OFFSET(0xD41C200)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_JPPHNADENJD_OFFSET UNITYSDK_OFFSET(0xD41C850)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xD41C190)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_OANPILEOMJI_OFFSET UNITYSDK_OFFSET(0xD41C410)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_OBKGEBIEKGP_OFFSET UNITYSDK_OFFSET(0xD41C630)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PAIDAEBKNPL_OFFSET UNITYSDK_OFFSET(0xD41BEA0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYBACK_OFFSET UNITYSDK_OFFSET(0xD41BD40)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYEYEANIMATION_OFFSET UNITYSDK_OFFSET(0xD41BB40)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0xD41B430)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	class ChimeraDuelAnimatorView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single HurtCDTimeConfig; // 0x18
		::System::Single LNLADKOLPFM; // 0x1C
		static ::System::Int32* StaticGet_BMOKIOMMCIL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97A0);
		}

		static ::System::Int32* StaticGet_DODGEHMJGNA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97A4);
		}

		static ::System::Int32* StaticGet_LFJHKGPGMKN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97A8);
		}

		static ::System::Int32* StaticGet_OJMAKFGNBOM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97AC);
		}

		static ::System::Int32* StaticGet_DFIPBEILGAH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97B0);
		}

		static ::System::Int32* StaticGet_DEDJFJNKCAG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97B4);
		}

		static ::System::Int32* StaticGet_HCNJEDMDAMK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97B8);
		}

		static ::System::Int32* StaticGet_OJNCNOHNEEH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97BC);
		}

		static ::System::Int32* StaticGet_HILLGOLHOLO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97C0);
		}

		static ::System::Int32* StaticGet_FLDGLNNLAFK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0x97C4);
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
