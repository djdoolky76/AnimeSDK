#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace RPG::GameCore { class GridFightSeasonPortalConfigRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSEASON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD26D690)
#define RPG_CLIENT_GRIDFIGHTSEASON___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD26D6C0)
#define RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xD26D6F0)
#define RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xD26D720)
#define RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_2_OFFSET UNITYSDK_OFFSET(0xD26D790)
#define RPG_CLIENT_GRIDFIGHTSEASON___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0xD26D6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeason___c_TypeDefinitionIndex = 65204;

	class GridFightSeason___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E6A0);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E6A8);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightSeasonPortalConfigRow*, ::System::UInt32>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightSeasonPortalConfigRow*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E6B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E6B8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__0_1(::RPG::GameCore::GridFightSeasonPortalConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightSeasonPortalConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C___CTOR_B__0_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _GetRolesByTrait_b__1_0(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRolesByTrait_b__1_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRolesByTrait_b__1_2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__GETROLESBYTRAIT_B__1_2_OFFSET))(this, a1);
		}

	};
}
