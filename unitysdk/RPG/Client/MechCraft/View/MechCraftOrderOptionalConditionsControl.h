#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftOrderOptionalConditionsControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderOptionalConditionsViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE0DF290)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xE0DF180)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE0DE830)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xE0DEA10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE0DEEB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xE0DE8F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE0DE870)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___BIND_B__6_0_OFFSET UNITYSDK_OFFSET(0xE0DF2A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderOptionalConditionsControl_TypeDefinitionIndex = 82770;

	class MechCraftOrderOptionalConditionsControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* LFGMLJCCPCH; // 0x18
		::System::Boolean PHBCJPCHDHC; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::Client::MechCraft::View::MechCraftOrderOptionalConditionsControlBinder* _Binder; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* __Bind_b__6_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___BIND_B__6_0_OFFSET))(this);
		}

	};
}
