#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_TURNBASEDGAMEMODE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9EF9F0)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9EFA20)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETALLENTITYACTIONDELAY_B__151_0_OFFSET UNITYSDK_OFFSET(0x1A9EFA30)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETENTITYLISTACTIONDELAY_B__152_0_OFFSET UNITYSDK_OFFSET(0x1A9EFA70)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__SETIMMEDIATEACTIONENTITIES_B__581_0_OFFSET UNITYSDK_OFFSET(0x1A9EFAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedGameMode___c_TypeDefinitionIndex = 54769;

	class TurnBasedGameMode___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>** StaticGet___9__151_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x734B0);
		}

		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>** StaticGet___9__152_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x734B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x734C0);
		}

		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>** StaticGet___9__581_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x734C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _ResetAllEntityActionDelay_b__151_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETALLENTITYACTIONDELAY_B__151_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _ResetEntityListActionDelay_b__152_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETENTITYLISTACTIONDELAY_B__152_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _SetImmediateActionEntities_b__581_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__SETIMMEDIATEACTIONENTITIES_B__581_0_OFFSET))(this, a1);
		}

	};
}
