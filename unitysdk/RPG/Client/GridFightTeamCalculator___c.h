#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD29AC30)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD29AC70)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C___CALCULATEEMBLEMSCORE_B__28_0_OFFSET UNITYSDK_OFFSET(0xD29AC80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamCalculator___c_TypeDefinitionIndex = 64825;

	class GridFightTeamCalculator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2610);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CalculateEmblemScore_b__28_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C___CALCULATEEMBLEMSCORE_B__28_0_OFFSET))(this, a1);
		}

	};
}
