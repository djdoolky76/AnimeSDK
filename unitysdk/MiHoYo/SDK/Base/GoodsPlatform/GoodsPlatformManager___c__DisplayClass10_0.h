#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC34880)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0__REQUESTLISTGOODSAPIWITHCDNFALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BC34C40)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0__REQUESTLISTGOODSAPIWITHCDNFALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x1BC34DE0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	class GoodsPlatformManager___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MiHoYo::SDK::JSONObject* queries; // 0x18
		::System::Action* callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestListGoodsAPIWithCDNFallback_b__0(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0__REQUESTLISTGOODSAPIWITHCDNFALLBACK_B__0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RequestListGoodsAPIWithCDNFallback_b__1(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS10_0__REQUESTLISTGOODSAPIWITHCDNFALLBACK_B__1_OFFSET))(this, a1, a2, a3);
		}

	};
}
