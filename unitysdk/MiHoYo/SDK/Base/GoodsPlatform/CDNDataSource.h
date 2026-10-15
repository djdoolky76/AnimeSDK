#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC33300)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_FILTERGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1BC32E50)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTALLSONYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1BC32C40)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1BC32340)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int CDNDataSource_TypeDefinitionIndex = 8837;

	class CDNDataSource : public ::System::Object
	{
	public:
		// static const ::System::Object CDN_DATA_RESPONSE_OK; // 0x0
		// static const ::System::String* PAY_LISTGOODS_CND_RESPONSE; // 0x0
		// static const ::System::String* SONY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void RequestGoodsList(::MiHoYo::SDK::JSONObject* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTGOODSLIST_OFFSET))(a1, a2);
		}

		static ::System::Void RequestAllSonyProductID(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTALLSONYPRODUCTID_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::JSONArray* FilterGoodsList(::MiHoYo::SDK::JSONObject* a1, ::MiHoYo::SDK::JSONArray* a2)
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::MiHoYo::SDK::JSONObject*, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_FILTERGOODSLIST_OFFSET))(a1, a2);
		}

	};
}
