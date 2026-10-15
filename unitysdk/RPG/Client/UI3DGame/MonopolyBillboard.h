#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class MonopolyClickContentConfigRow; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xE350DF0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CLICK_OFFSET UNITYSDK_OFFSET(0xE3508E0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xE350DE0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xE350C00)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xE350BA0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_PLAYFINALANIM_OFFSET UNITYSDK_OFFSET(0xE350D40)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_START_OFFSET UNITYSDK_OFFSET(0xE350830)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyBillboard_TypeDefinitionIndex = 75810;

	class MonopolyBillboard : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::UnityEngine::Animator* AnimController; // 0x30
		::RPG::Client::RPGAnimationEvent* RPGAnimEvent; // 0x38
		::System::UInt32 AKKAAOGBDNL; // 0x40
		::System::UInt32 JBMOIEJNEFD; // 0x44
		::System::UInt32 HKAHFHHICEN; // 0x48
		::System::UInt32 IHHNMMBAAGN; // 0x4C
		::System::Boolean BPPKFLKGMIN; // 0x50
		static ::System::Int32* StaticGet_FACBDJMIOCH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "MonopolyBillboard")->GetStaticField(0x93D0);
		}

		static ::System::Int32* StaticGet_MEPFOEEGBEA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "MonopolyBillboard")->GetStaticField(0x93D4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_START_OFFSET))(this);
		}

		::System::Void Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CLICK_OFFSET))(this);
		}

		::System::Void GHIFMGPKFPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_GHIFMGPKFPF_OFFSET))(this);
		}

		::System::Void PlayFinalAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_PLAYFINALANIM_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyClickContentConfigRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::MonopolyClickContentConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_PDAENODHFCM_OFFSET))(this);
		}

	};
}
