#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJAOEIMKKKE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_ABILITYSTATIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE53E610)
#define RPG_GAMECORE_ABILITYSTATIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE53E640)
#define RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__97_0_OFFSET UNITYSDK_OFFSET(0xE53E650)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_0_OFFSET UNITYSDK_OFFSET(0xE53E690)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_1_OFFSET UNITYSDK_OFFSET(0xE53E6D0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_2_OFFSET UNITYSDK_OFFSET(0xE53E720)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_3_OFFSET UNITYSDK_OFFSET(0xE53E760)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_4_OFFSET UNITYSDK_OFFSET(0xE53E7B0)

namespace RPG::GameCore
{
	class AbilityStatic___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x54A30);
		}

		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__97_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x54A38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _FillRestrictTargetList_b__97_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__97_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_1(::OJAOEIMKKKE* a1, ::OJAOEIMKKKE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OJAOEIMKKKE*, ::OJAOEIMKKKE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_2(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_3(::OJAOEIMKKKE* a1, ::OJAOEIMKKKE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OJAOEIMKKKE*, ::OJAOEIMKKKE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_4(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_4_OFFSET))(this, a1, a2);
		}

	};
}
