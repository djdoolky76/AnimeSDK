#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointPhaseControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointPhaseViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD66DD90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xD66DC80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xD66D820)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD66D9C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD66DAF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xD66D7E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD66D8A0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftTalentPointPhaseControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentPointPhaseControlBinder* _Binder; // 0x20
		::System::String* _StateLocked; // 0x28
		::System::String* _StateUnlocked; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* KCEDLPGDJLN()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
