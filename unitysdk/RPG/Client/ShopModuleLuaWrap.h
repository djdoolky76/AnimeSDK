#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class BuyGoodsScRsp; }
namespace RPG::Client { class ShopBuyGoodsFailAction; }
namespace RPG::Client { class ShopBuyGoodsRspAction; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_SHOPMODULELUAWRAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0ADC40)
#define RPG_CLIENT_SHOPMODULELUAWRAP_FINDSHOPTYPEOFITEM_OFFSET UNITYSDK_OFFSET(0x1C0AD8E0)
#define RPG_CLIENT_SHOPMODULELUAWRAP_ONBUYGOODSFAILED_OFFSET UNITYSDK_OFFSET(0x1C0ADF00)
#define RPG_CLIENT_SHOPMODULELUAWRAP_ONBUYGOODSRSP_OFFSET UNITYSDK_OFFSET(0x1C0AE050)
#define RPG_CLIENT_SHOPMODULELUAWRAP_SETFINDSHOPIDOFITEMFUNC_OFFSET UNITYSDK_OFFSET(0x1C0AE200)
#define RPG_CLIENT_SHOPMODULELUAWRAP_SETLUATABLE_OFFSET UNITYSDK_OFFSET(0x1C0AE1B0)
#define RPG_CLIENT_SHOPMODULELUAWRAP_SETONBUYGOODSFAILEDFUNC_OFFSET UNITYSDK_OFFSET(0x1C0AE2A0)
#define RPG_CLIENT_SHOPMODULELUAWRAP_SETONBUYGOODSRSPFUNC_OFFSET UNITYSDK_OFFSET(0x1C0AE250)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopModuleLuaWrap_TypeDefinitionIndex = 69899;

	class ShopModuleLuaWrap : public ::System::Object
	{
	public:
		::System::Func_3<::XLua::LuaTable*, ::System::UInt32, ::System::UInt32>* _FindShopIDOfItemLuaFunc; // 0x10
		::RPG::Client::ShopBuyGoodsFailAction* _OnBuyGoodsFailedLuaFunc; // 0x18
		::XLua::LuaTable* _LuaTable; // 0x20
		::RPG::Client::ShopBuyGoodsRspAction* _OnBuyGoodsRspLuaFunc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_CTOR_OFFSET))(this);
		}

		::System::UInt32 FindShopTypeOfItem(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_FINDSHOPTYPEOFITEM_OFFSET))(this, a1);
		}

		::System::Void OnBuyGoodsRsp(::System::UInt32 a1, ::Proto::BuyGoodsScRsp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Proto::BuyGoodsScRsp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_ONBUYGOODSRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnBuyGoodsFailed(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_ONBUYGOODSFAILED_OFFSET))(this, a1, a2);
		}

		::System::Void SetLuaTable(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_SETLUATABLE_OFFSET))(this, a1);
		}

		::System::Void SetFindShopIDOfItemFunc(::System::Func_3<::XLua::LuaTable*, ::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_SETFINDSHOPIDOFITEMFUNC_OFFSET))(this, a1);
		}

		::System::Void SetOnBuyGoodsRspFunc(::RPG::Client::ShopBuyGoodsRspAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShopBuyGoodsRspAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_SETONBUYGOODSRSPFUNC_OFFSET))(this, a1);
		}

		::System::Void SetOnBuyGoodsFailedFunc(::RPG::Client::ShopBuyGoodsFailAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShopBuyGoodsFailAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULELUAWRAP_SETONBUYGOODSFAILEDFUNC_OFFSET))(this, a1);
		}

	};
}
