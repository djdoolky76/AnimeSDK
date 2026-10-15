#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftOrderItemControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD64D900)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xD64D6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_GET_PARTICLECAMERA_OFFSET UNITYSDK_OFFSET(0xD64BEF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xD64C0B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD64D110)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD64C140)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xD64C070)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD64CE60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_SET_PARTICLECAMERA_OFFSET UNITYSDK_OFFSET(0xD64BF30)

namespace RPG::Client::MechCraft::View
{
	class MechCraftOrderItemControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* OBNMPEJCBAO; // 0x18
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* LFGMLJCCPCH; // 0x20
		::RPG::Client::MechCraft::View::MechCraftOrderItemControlBinder* _Binder; // 0x28
		::UnityEngine::Transform* _RedDotNew; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* _ParticleRenderers; // 0x38
		::System::String* _AnimNameNew; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_ParticleCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_GET_PARTICLECAMERA_OFFSET))(this);
		}

		::System::Void set_ParticleCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_SET_PARTICLECAMERA_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* KCEDLPGDJLN()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

	};
}
