#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC31F50)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE_REQUESTGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1BC31B60)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int APIDataSource_TypeDefinitionIndex = 8835;

	class APIDataSource : public ::System::Object
	{
	public:
		// static const ::System::Object DefaultTimeoutInSeconds; // 0x0
		// static const ::System::Object DefaultRetryLimit; // 0x0
		// static const ::System::String* XRPC_HEADER_ROUTING_ACCOUNT; // 0x0
		// static const ::System::String* XRPC_HEADER_ROUTING_BIZ; // 0x0
		// static const ::System::String* PAY_LISTGOODS_API_RESPONSE; // 0x0
		// static const ::System::String* JSON_ERROR_CODE_KEY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void RequestGoodsList(::MiHoYo::SDK::JSONObject* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE_REQUESTGOODSLIST_OFFSET))(a1, a2);
		}

	};
}
