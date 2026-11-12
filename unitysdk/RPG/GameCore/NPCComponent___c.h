#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_GAMECORE_NPCCOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF215C00)
#define RPG_GAMECORE_NPCCOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF215C40)
#define RPG_GAMECORE_NPCCOMPONENT___C___BEGINFADEIN_B__36_0_OFFSET UNITYSDK_OFFSET(0xF215C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCComponent___c_TypeDefinitionIndex = 58337;

	class NPCComponent___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x71DD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x71DD8);
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
