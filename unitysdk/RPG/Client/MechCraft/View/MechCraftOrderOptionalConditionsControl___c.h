#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl_CBPOMADILDL; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD6502A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD6502E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C___BIND_B__6_1_OFFSET UNITYSDK_OFFSET(0xD6502F0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderOptionalConditionsControl___c_TypeDefinitionIndex = 79994;

	class MechCraftOrderOptionalConditionsControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL** StaticGet___9__6_1()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x55720);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x55728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Action* __Bind_b__6_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C___BIND_B__6_1_OFFSET))(this, a1, a2);
		}

	};
}
