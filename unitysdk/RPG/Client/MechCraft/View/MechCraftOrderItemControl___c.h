#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl_CBPOMADILDL; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0DC8C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE0DC900)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C___REFRESH_B__14_2_OFFSET UNITYSDK_OFFSET(0xE0DC910)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderItemControl___c_TypeDefinitionIndex = 82791;

	class MechCraftOrderItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL** StaticGet___9__14_2()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x65600);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x65608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Action* __Refresh_b__14_2(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C___REFRESH_B__14_2_OFFSET))(this, a1, a2);
		}

	};
}
