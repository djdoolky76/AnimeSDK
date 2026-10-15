#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC31F40)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE___C__DISPLAYCLASS6_0__REQUESTGOODSLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1BC31F60)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	class APIDataSource___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestGoodsList_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE___C__DISPLAYCLASS6_0__REQUESTGOODSLIST_B__0_OFFSET))(this, a1);
		}

	};
}
