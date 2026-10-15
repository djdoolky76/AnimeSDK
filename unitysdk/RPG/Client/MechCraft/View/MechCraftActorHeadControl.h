#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftActorHeadControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftActorViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD5E8350)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xD5E7F70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD5E7FD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xD5E7F30)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftActorHeadControl_TypeDefinitionIndex = 80011;

	class MechCraftActorHeadControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftActorHeadControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* KCEDLPGDJLN()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
