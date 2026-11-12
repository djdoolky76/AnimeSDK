#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIBJGIEGOML;
class OJAOEIMKKKE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_ABILITYSTATIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEFBBCA0)
#define RPG_GAMECORE_ABILITYSTATIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEFBBCD0)
#define RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__100_0_OFFSET UNITYSDK_OFFSET(0xEFBBD20)
#define RPG_GAMECORE_ABILITYSTATIC___C__GETEXRANKIDLIST_B__6_0_OFFSET UNITYSDK_OFFSET(0xEFBBCE0)
#define RPG_GAMECORE_ABILITYSTATIC___C__GETEXRANKIDLIST_B__7_0_OFFSET UNITYSDK_OFFSET(0xEFBBD00)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_0_OFFSET UNITYSDK_OFFSET(0xEFBBD60)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_1_OFFSET UNITYSDK_OFFSET(0xEFBBDA0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_2_OFFSET UNITYSDK_OFFSET(0xEFBBDF0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_3_OFFSET UNITYSDK_OFFSET(0xEFBBE30)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_4_OFFSET UNITYSDK_OFFSET(0xEFBBE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStatic___c_TypeDefinitionIndex = 55569;

	class AbilityStatic___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__100_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x5C030);
		}

		static ::System::Func_2<::EIBJGIEGOML*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::EIBJGIEGOML*, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x5C038);
		}

		static ::System::Func_2<::EIBJGIEGOML*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::EIBJGIEGOML*, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x5C040);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x5C048);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetExRankIDList_b__6_0(::EIBJGIEGOML* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EIBJGIEGOML*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__GETEXRANKIDLIST_B__6_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetExRankIDList_b__7_0(::EIBJGIEGOML* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EIBJGIEGOML*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__GETEXRANKIDLIST_B__7_0_OFFSET))(this, a1);
		}

		::System::Int32 _FillRestrictTargetList_b__100_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__100_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__321_0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__321_1(::OJAOEIMKKKE* a1, ::OJAOEIMKKKE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OJAOEIMKKKE*, ::OJAOEIMKKKE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__321_2(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__321_3(::OJAOEIMKKKE* a1, ::OJAOEIMKKKE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OJAOEIMKKKE*, ::OJAOEIMKKKE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__321_4(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__321_4_OFFSET))(this, a1, a2);
		}

	};
}
