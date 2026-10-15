#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftTalentActorIconControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD667100)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xD666F40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xD6667C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD666960)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD666A90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xD666780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD666840)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentActorIconControl_TypeDefinitionIndex = 80052;

	class MechCraftTalentActorIconControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentActorIconControlBinder* _Binder; // 0x20
		::System::String* _StateDefault; // 0x28
		::System::String* _StateLocked; // 0x30
		::System::String* _StateHighlight; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* KCEDLPGDJLN()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORICONCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
