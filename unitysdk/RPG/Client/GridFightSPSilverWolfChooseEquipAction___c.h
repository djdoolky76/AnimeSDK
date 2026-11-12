#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC65790)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC657D0)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION___C___SYNCSELECTIONS_B__11_0_OFFSET UNITYSDK_OFFSET(0xDC657E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSPSilverWolfChooseEquipAction___c_TypeDefinitionIndex = 66718;

	class GridFightSPSilverWolfChooseEquipAction___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xBCC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xBCC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* __SyncSelections_b__11_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION___C___SYNCSELECTIONS_B__11_0_OFFSET))(this, a1);
		}

	};
}
