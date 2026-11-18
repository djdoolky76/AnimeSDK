#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace System { class String; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC176D0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_1__RETRIEVEGOODSLIST_B__2_OFFSET UNITYSDK_OFFSET(0x1DC176E0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int GoodsPlatformManager___c__DisplayClass9_1_TypeDefinitionIndex = 20141;

	template <typename T>
	class GoodsPlatformManager___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MiHoYo::SDK::JSONArray* goods; // 0x18
		::System::String* message; // 0x20
		::System::Int32 code; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 listGoodsTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Void _RetrieveGoodsList_b__2(::MiHoYo::SDK::JSONArray* updatedGoods, ::System::Boolean fromCache, ::System::Int32 errorCodeThirdParty, ::System::Int64 thirdPartyDuration)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_GOODSPLATFORMMANAGER___C__DISPLAYCLASS9_1__RETRIEVEGOODSLIST_B__2_OFFSET))(this, updatedGoods, fromCache, errorCodeThirdParty, thirdPartyDuration);
		}
	};
}
