#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS34_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDE4F670)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS34_1__BUYGIFT_B__1_OFFSET UNITYSDK_OFFSET(0xDE4F680)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule___c__DisplayClass34_1_TypeDefinitionIndex = 66800;

	template <typename T>
	class RechargeShopModule___c__DisplayClass34_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean purchaseSuccess; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS34_1_CTOR_OFFSET))(this);
		}

		::System::Void _BuyGift_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS34_1__BUYGIFT_B__1_OFFSET))(this, a1);
		}

	};
}
