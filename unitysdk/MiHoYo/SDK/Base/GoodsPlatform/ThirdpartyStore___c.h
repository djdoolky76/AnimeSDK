#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC39490)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC394D0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__GETGOODSIDLIST_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BC394E0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__GETGOODSIDLIST_B__20_1_OFFSET UNITYSDK_OFFSET(0x1BC395C0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int ThirdpartyStore___c_TypeDefinitionIndex = 8854;

	class ThirdpartyStore___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__20_1()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("MiHoYo.SDK.Base.GoodsPlatform", "<>c")->GetStaticField(0x308B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Base.GoodsPlatform", "<>c")->GetStaticField(0x308B8);
		}

		static ::System::Func_2<::MiHoYo::SDK::JSONNode*, ::System::String*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::MiHoYo::SDK::JSONNode*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Base.GoodsPlatform", "<>c")->GetStaticField(0x308C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C_CTOR_OFFSET))(this);
		}

		::System::String* _GetGoodsIdList_b__20_0(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__GETGOODSIDLIST_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetGoodsIdList_b__20_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__GETGOODSIDLIST_B__20_1_OFFSET))(this, a1);
		}

	};
}
