#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0D2E70)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D2EB0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__51_0_OFFSET UNITYSDK_OFFSET(0xD0D2EC0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__51_1_OFFSET UNITYSDK_OFFSET(0xD0D2F30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c_TypeDefinitionIndex = 64397;

	class GridFightBattleGameContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__51_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65310);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65318);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__51_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__51_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__51_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__51_1_OFFSET))(this, a1);
		}

	};
}
