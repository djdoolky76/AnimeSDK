#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSEASONROLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4F9250)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F9290)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CREATE_B__78_0_OFFSET UNITYSDK_OFFSET(0x1D4F92A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonRole___c_TypeDefinitionIndex = 66843;

	class GridFightSeasonRole___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xDF90);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__78_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xDF98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _Create_b__78_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CREATE_B__78_0_OFFSET))(this, a1);
		}

	};
}
