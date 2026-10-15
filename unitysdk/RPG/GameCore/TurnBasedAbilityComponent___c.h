#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE7E4010)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE7E4050)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__ADDMODIFIEREXTRAMAXLAYER_B__164_0_OFFSET UNITYSDK_OFFSET(0xE7E4060)
#define RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__REMOVEMODIFIEREXTRAMAXLAYER_B__165_0_OFFSET UNITYSDK_OFFSET(0xE7E41B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityComponent___c_TypeDefinitionIndex = 54851;

	class TurnBasedAbilityComponent___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__165_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6E8A0);
		}

		static ::System::Action** StaticGet___9__164_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6E8A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6E8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C_CTOR_OFFSET))(this);
		}

		::System::Void _AddModifierExtraMaxLayer_b__164_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__ADDMODIFIEREXTRAMAXLAYER_B__164_0_OFFSET))(this, a1);
		}

		::System::Void _RemoveModifierExtraMaxLayer_b__165_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCOMPONENT___C__REMOVEMODIFIEREXTRAMAXLAYER_B__165_0_OFFSET))(this, a1);
		}

	};
}
