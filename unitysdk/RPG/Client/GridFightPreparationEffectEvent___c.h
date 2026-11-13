#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF369E0)
#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF36A20)
#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT___C__CREATEROLECRAFTEQUIPAFTERBATTLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1DF36A30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPreparationEffectEvent___c_TypeDefinitionIndex = 66027;

	class GridFightPreparationEffectEvent___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72DD0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72DD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateRoleCraftEquipAfterBattle_b__2_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT___C__CREATEROLECRAFTEQUIPAFTERBATTLE_B__2_0_OFFSET))(this, a1);
		}

	};
}
