#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E134E80)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E134E70)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0x1E133640)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1E133E60)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_IMOJCHKGCAA_OFFSET UNITYSDK_OFFSET(0x1E134C50)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_JAIHJDJLGLD_OFFSET UNITYSDK_OFFSET(0x1E1343C0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_JPPHNADENJD_OFFSET UNITYSDK_OFFSET(0x1E134A10)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x1E134350)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_OANPILEOMJI_OFFSET UNITYSDK_OFFSET(0x1E1345D0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_OBKGEBIEKGP_OFFSET UNITYSDK_OFFSET(0x1E1347F0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PAIDAEBKNPL_OFFSET UNITYSDK_OFFSET(0x1E134060)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYBACK_OFFSET UNITYSDK_OFFSET(0x1E133F00)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYEYEANIMATION_OFFSET UNITYSDK_OFFSET(0x1E133D00)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0x1E1335F0)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelAnimatorView_TypeDefinitionIndex = 80443;

	class ChimeraDuelAnimatorView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single HurtCDTimeConfig; // 0x18
		::System::Single LNLADKOLPFM; // 0x1C
		static ::System::Int32* StaticGet_DEDJFJNKCAG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8D0);
		}

		static ::System::Int32* StaticGet_OJNCNOHNEEH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8D4);
		}

		static ::System::Int32* StaticGet_OJMAKFGNBOM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8D8);
		}

		static ::System::Int32* StaticGet_HILLGOLHOLO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8DC);
		}

		static ::System::Int32* StaticGet_FLDGLNNLAFK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8E0);
		}

		static ::System::Int32* StaticGet_BMOKIOMMCIL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8E4);
		}

		static ::System::Int32* StaticGet_DODGEHMJGNA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8E8);
		}

		static ::System::Int32* StaticGet_LFJHKGPGMKN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8EC);
		}

		static ::System::Int32* StaticGet_DFIPBEILGAH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8F0);
		}

		static ::System::Int32* StaticGet_HCNJEDMDAMK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame.ChimeraDuel", "ChimeraDuelAnimatorView")->GetStaticField(0xC8F4);
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
