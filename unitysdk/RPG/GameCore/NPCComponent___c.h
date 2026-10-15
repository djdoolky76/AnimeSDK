#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_GAMECORE_NPCCOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE707F60)
#define RPG_GAMECORE_NPCCOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE707FA0)
#define RPG_GAMECORE_NPCCOMPONENT___C___BEGINFADEIN_B__36_0_OFFSET UNITYSDK_OFFSET(0xE707FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCComponent___c_TypeDefinitionIndex = 57108;

	class NPCComponent___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x68730);
		}

		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x68738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT___C_CTOR_OFFSET))(this);
		}

		::System::Void __BeginFadein_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT___C___BEGINFADEIN_B__36_0_OFFSET))(this);
		}

	};
}
