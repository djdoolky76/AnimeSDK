#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }

#define MIHOYOSDKJSON_JSONOBJECT___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB071350)
#define MIHOYOSDKJSON_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0xB071EF0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONObject___c__DisplayClass21_0_TypeDefinitionIndex = 46057;

	class JSONObject___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MiHoYoSDKJSON::JSONNode* aNode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET))(this, a1);
		}

	};
}
