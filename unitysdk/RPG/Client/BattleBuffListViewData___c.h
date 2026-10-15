#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC814C40)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC814C80)
#define RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C___SORTBUFFS_B__9_0_OFFSET UNITYSDK_OFFSET(0xC814C90)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffListViewData___c_TypeDefinitionIndex = 71516;

	class BattleBuffListViewData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59690);
		}

		static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortBuffs_b__9_0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFLISTVIEWDATA___C___SORTBUFFS_B__9_0_OFFSET))(this, a1, a2);
		}

	};
}
