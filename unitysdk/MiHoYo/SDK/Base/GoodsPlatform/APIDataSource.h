#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC11810)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE_REQUESTGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1BC11420)

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

		static ::System::Void RequestGoodsList(::MiHoYo::SDK::JSONObject* a1, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE_REQUESTGOODSLIST_OFFSET))(a1, a2);
		}

	};
}
