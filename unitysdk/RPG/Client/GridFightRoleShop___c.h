#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOPHDCKJMMN;
namespace RPG::Client { class GridFightShopGood; }
namespace RPG::Client { class GridFightShopRole; }
namespace RPG::Client { class GridFightShopSpecialGood; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC5AEF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC5AF30)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPGOODS_B__41_0_OFFSET UNITYSDK_OFFSET(0xDC5B000)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__101_0_OFFSET UNITYSDK_OFFSET(0xDC5B0D0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__101_1_OFFSET UNITYSDK_OFFSET(0xDC5B140)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__103_0_OFFSET UNITYSDK_OFFSET(0xDC5B1B0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__103_1_OFFSET UNITYSDK_OFFSET(0xDC5B220)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__14_0_OFFSET UNITYSDK_OFFSET(0xDC5AF40)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__19_1_OFFSET UNITYSDK_OFFSET(0xDC5AF80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__19_2_OFFSET UNITYSDK_OFFSET(0xDC5AFE0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__15_0_OFFSET UNITYSDK_OFFSET(0xDC5AF60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c_TypeDefinitionIndex = 66936;

	class GridFightRoleShop___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__101_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xAD90);
		}

		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>** StaticGet___9__19_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xAD98);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xADA0);
		}

		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xADA8);
		}

		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>** StaticGet___9__103_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xADB0);
		}

		static ::System::Func_2<::BOPHDCKJMMN*, ::System::UInt32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::BOPHDCKJMMN*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xADB8);
		}

		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xADC0);
		}

		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>** StaticGet___9__101_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xADC8);
		}

		static ::System::Func_2<::BOPHDCKJMMN*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::BOPHDCKJMMN*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xADD0);
		}

		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__103_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xADD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _Sync_b__14_0(::BOPHDCKJMMN* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::BOPHDCKJMMN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__14_0_OFFSET))(this, a1);
		}

		::System::UInt32 _Update_b__15_0(::BOPHDCKJMMN* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::BOPHDCKJMMN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__15_0_OFFSET))(this, a1);
		}

		::System::Int64 _TryBuyRole_b__19_1(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__19_1_OFFSET))(this, a1);
		}

		::System::UInt32 _TryBuyRole_b__19_2(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__19_2_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnsoldShopGoods_b__41_0(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPGOODS_B__41_0_OFFSET))(this, a1);
		}

		::System::Boolean _get__ShopRoles_b__101_0(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__101_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightShopRole* _get__ShopRoles_b__101_1(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::RPG::Client::GridFightShopRole*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__101_1_OFFSET))(this, a1);
		}

		::System::Boolean _get__ShopSpecial_b__103_0(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__103_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightShopSpecialGood* _get__ShopSpecial_b__103_1(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::RPG::Client::GridFightShopSpecialGood*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__103_1_OFFSET))(this, a1);
		}

	};
}
