#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinViewModel; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE048370)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE0481F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE048290)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xE048230)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCoinIconControl_TypeDefinitionIndex = 82588;

	class MechCraftCoinIconControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* LFGMLJCCPCH; // 0x18
		::UnityEngine::UI::Image* _Icon; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* get_Content()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
