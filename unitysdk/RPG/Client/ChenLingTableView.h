#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingTableSceneType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class ChenLingTableBattleScene; }
namespace RPG::Client { class ChenLingTablePrepareScene; }
namespace RPG::Client { class ChenLingTableScene; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGTABLEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88B1F0)
#define RPG_CLIENT_CHENLINGTABLEVIEW_GET_CURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x1D88A590)
#define RPG_CLIENT_CHENLINGTABLEVIEW_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D88AB40)
#define RPG_CLIENT_CHENLINGTABLEVIEW_ONUISCREENSIZECHANGE_OFFSET UNITYSDK_OFFSET(0x1D88B0A0)
#define RPG_CLIENT_CHENLINGTABLEVIEW_RESETAUDIOLISTENER_OFFSET UNITYSDK_OFFSET(0x1D88A6D0)
#define RPG_CLIENT_CHENLINGTABLEVIEW_SET_CURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x1D88A5A0)
#define RPG_CLIENT_CHENLINGTABLEVIEW_SWITCHAUDIOLISTENER_OFFSET UNITYSDK_OFFSET(0x1D88A5B0)
#define RPG_CLIENT_CHENLINGTABLEVIEW_SWITCHSCENE_OFFSET UNITYSDK_OFFSET(0x1D88A830)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingTableView_TypeDefinitionIndex = 74549;

	class ChenLingTableView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ChenLingTablePrepareScene* _PrepareScene; // 0x18
		::RPG::Client::ChenLingTableBattleScene* _BattleScene; // 0x20
		::UnityEngine::Transform* _AudioListener; // 0x28
		::RPG::Client::ChenLingTableScene* _CurrentScene_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_CTOR_OFFSET))(this);
		}

		::RPG::Client::ChenLingTableScene* get_CurrentScene()
		{
			return ((::RPG::Client::ChenLingTableScene*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_GET_CURRENTSCENE_OFFSET))(this);
		}

		::System::Void set_CurrentScene(::RPG::Client::ChenLingTableScene* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableScene*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_SET_CURRENTSCENE_OFFSET))(this, a1);
		}

		::System::Void SwitchAudioListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_SWITCHAUDIOLISTENER_OFFSET))(this);
		}

		::System::Void ResetAudioListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_RESETAUDIOLISTENER_OFFSET))(this);
		}

		::System::Void SwitchScene(::RPG::Client::ChenLingTableSceneType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableSceneType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_SWITCHSCENE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnUIScreenSizeChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_ONUISCREENSIZECHANGE_OFFSET))(this);
		}

	};
}
