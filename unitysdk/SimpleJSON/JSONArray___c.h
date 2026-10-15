#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SimpleJSON { class JSONNode; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SIMPLEJSON_JSONARRAY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC28DB0)
#define SIMPLEJSON_JSONARRAY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC28DF0)
#define SIMPLEJSON_JSONARRAY___C__CLONE_B__19_0_OFFSET UNITYSDK_OFFSET(0x1EC28E00)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONArray___c_TypeDefinitionIndex = 9957;

	class JSONArray___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("SimpleJSON", "<>c")->GetStaticField(0x6D0);
		}

		static ::System::Func_2<::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*>**)UnitySDK::FromName("SimpleJSON", "<>c")->GetStaticField(0x6D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY___C_CTOR_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* _Clone_b__19_0(::SimpleJSON::JSONNode* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY___C__CLONE_B__19_0_OFFSET))(this, a1);
		}

	};
}
