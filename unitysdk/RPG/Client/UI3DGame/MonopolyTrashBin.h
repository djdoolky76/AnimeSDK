#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
#include "unitysdk/RPG/Client/UI3DGame/MonopolyTrashBin_TrashBinState.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class MonopolyClickContentConfigRow; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xE358360)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_CLICK_OFFSET UNITYSDK_OFFSET(0xE357A30)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE358350)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xE357F40)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_ONAKHMPMKIE_OFFSET UNITYSDK_OFFSET(0xE357C90)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xE358080)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_PLAYFINALANIM_OFFSET UNITYSDK_OFFSET(0xE3580E0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_START_OFFSET UNITYSDK_OFFSET(0xE3582C0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyTrashBin_TypeDefinitionIndex = 75814;

	class MonopolyTrashBin : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::System::UInt32 AKKAAOGBDNL; // 0x30
		::System::UInt32 JBMOIEJNEFD; // 0x34
		::System::UInt32 HKAHFHHICEN; // 0x38
		::System::UInt32 IHHNMMBAAGN; // 0x3C
		::RPG::Client::UI3DGame::MonopolyTrashBin_TrashBinState DLNIGFGLPLJ; // 0x40
		::System::Byte _padding0[0x4];
		::UnityEngine::Animator* AnimController; // 0x48
		::RPG::Client::RPGAnimationEvent* RPGAnimEvent; // 0x50
		static ::System::Int32* StaticGet_MKBNALHKDHF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "MonopolyTrashBin")->GetStaticField(0x9520);
		}

		static ::System::Int32* StaticGet_LBDNACFMIJB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "MonopolyTrashBin")->GetStaticField(0x9524);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_CCTOR_OFFSET))();
		}

		::System::Void Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_CLICK_OFFSET))(this);
		}

		::System::Void ONAKHMPMKIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_ONAKHMPMKIE_OFFSET))(this);
		}

		::System::Void GHIFMGPKFPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_GHIFMGPKFPF_OFFSET))(this);
		}

		::System::Void PlayFinalAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_PLAYFINALANIM_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_START_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyClickContentConfigRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::MonopolyClickContentConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_PDAENODHFCM_OFFSET))(this);
		}

	};
}
