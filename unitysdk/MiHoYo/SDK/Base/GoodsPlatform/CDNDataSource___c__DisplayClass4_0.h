#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC32E40)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS4_0__REQUESTALLSONYPRODUCTID_B__0_OFFSET UNITYSDK_OFFSET(0x1BC336C0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int CDNDataSource___c__DisplayClass4_0_TypeDefinitionIndex = 8839;

	class CDNDataSource___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestAllSonyProductID_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS4_0__REQUESTALLSONYPRODUCTID_B__0_OFFSET))(this, a1);
		}

	};
}
