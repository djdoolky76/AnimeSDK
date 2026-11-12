#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_GAMEPLAYSTATIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF1C2B10)
#define RPG_GAMECORE_GAMEPLAYSTATIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF1C2B50)
#define RPG_GAMECORE_GAMEPLAYSTATIC___C__GETMONSTERDROPREWARDDATA_B__101_0_OFFSET UNITYSDK_OFFSET(0xF1C2B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GamePlayStatic___c_TypeDefinitionIndex = 60289;

	class GamePlayStatic___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DD20);
		}

		static ::System::Comparison_1<::RPG::GameCore::StageMonsterRewardItem*>** StaticGet___9__101_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::StageMonsterRewardItem*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DD28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMonsterDropRewardData_b__101_0(::RPG::GameCore::StageMonsterRewardItem* a1, ::RPG::GameCore::StageMonsterRewardItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__GETMONSTERDROPREWARDDATA_B__101_0_OFFSET))(this, a1, a2);
		}

	};
}
