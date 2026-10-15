#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatV2BrandRankingEntry; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC9BE90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCC9BED0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C__PLAYCHANGE_B__12_0_OFFSET UNITYSDK_OFFSET(0xCC9BEE0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BrandRankingList___c_TypeDefinitionIndex = 76206;

	class DiceCombatV2BrandRankingList___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x2BDD0);
		}

		static ::System::Func_3<::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*, ::System::Int32, ::System::Single>** StaticGet___9__12_0()
		{
			return (::System::Func_3<::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*, ::System::Int32, ::System::Single>**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x2BDD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C_CTOR_OFFSET))(this);
		}

		::System::Single _PlayChange_b__12_0(::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C__PLAYCHANGE_B__12_0_OFFSET))(this, a1, a2);
		}

	};
}
