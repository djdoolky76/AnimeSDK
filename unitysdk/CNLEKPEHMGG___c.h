#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityFinalityBattle::Level { class FinalityBattleBattleTargetItem; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define CNLEKPEHMGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE5F15E0)
#define CNLEKPEHMGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE5F1620)
#define CNLEKPEHMGG___C__GETBATTLETARGETITEMSINBATTLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xE5F1630)

inline static constexpr unsigned int CNLEKPEHMGG___c_TypeDefinitionIndex = 84973;

	class CNLEKPEHMGG___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B0A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B0A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNLEKPEHMGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLEKPEHMGG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBattleTargetItemsInBattle_b__2_0(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem* a1, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*))((::PBYTE)hIl2Cpp + CNLEKPEHMGG___C__GETBATTLETARGETITEMSINBATTLE_B__2_0_OFFSET))(this, a1, a2);
		}

	};
