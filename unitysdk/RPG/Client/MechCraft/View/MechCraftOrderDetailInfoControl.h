#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftOrderDetailInfoControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderDetailInfoViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD64BE90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xD64BCD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD64B660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD64B840)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD64B970)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD64B720)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD64B6A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderDetailInfoControl_TypeDefinitionIndex = 79987;

	class MechCraftOrderDetailInfoControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftOrderDetailInfoControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
