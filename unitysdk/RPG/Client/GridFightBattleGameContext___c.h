#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C737C30)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C737C70)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__53_0_OFFSET UNITYSDK_OFFSET(0x1C737C80)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__53_1_OFFSET UNITYSDK_OFFSET(0x1C737CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c_TypeDefinitionIndex = 65844;

	class GridFightBattleGameContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FBF0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FBF8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__53_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__53_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__53_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__53_1_OFFSET))(this, a1);
		}

	};
}
