#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftCustomerActorControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftActorViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD63B180)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xD63AF10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD63A8F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD63AAD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD63AC00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD63A9B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD63A930)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCustomerActorControl_TypeDefinitionIndex = 79985;

	class MechCraftCustomerActorControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCustomerActorControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
