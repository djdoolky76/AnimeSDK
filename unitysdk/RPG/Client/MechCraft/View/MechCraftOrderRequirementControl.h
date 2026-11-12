#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftOrderRequirementControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderRequirementViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE0E02C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xE0DFFA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE0DF720)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xE0DF880)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE0DF9B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xE0DF760)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE0DAD70)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderRequirementControl_TypeDefinitionIndex = 82773;

	class MechCraftOrderRequirementControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftOrderRequirementControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
