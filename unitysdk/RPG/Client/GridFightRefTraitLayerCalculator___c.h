#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1EE7D0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1EE810)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C___UPDATETRAITLAYER_B__13_0_OFFSET UNITYSDK_OFFSET(0xD1EE820)

namespace RPG::Client
{
	class GridFightRefTraitLayerCalculator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E1C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E1C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateTraitLayer_b__13_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C___UPDATETRAITLAYER_B__13_0_OFFSET))(this, a1);
		}

	};
}
