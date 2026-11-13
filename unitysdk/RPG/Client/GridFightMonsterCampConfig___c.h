#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightMonsterData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC59C70)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC59CB0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETBOSS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CC59CC0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETELITE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CC59D00)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETMINION_B__3_0_OFFSET UNITYSDK_OFFSET(0x1CC59D40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterCampConfig___c_TypeDefinitionIndex = 66682;

	class GridFightMonsterCampConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72730);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72738);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72740);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBoss_b__1_0(::RPG::Client::GridFightMonsterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETBOSS_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetElite_b__2_0(::RPG::Client::GridFightMonsterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETELITE_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetMinion_b__3_0(::RPG::Client::GridFightMonsterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETMINION_B__3_0_OFFSET))(this, a1);
		}

	};
}
