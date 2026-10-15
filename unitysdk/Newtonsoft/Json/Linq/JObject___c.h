#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define NEWTONSOFT_JSON_LINQ_JOBJECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3BF990)
#define NEWTONSOFT_JSON_LINQ_JOBJECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3BF9D0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JObject___c_TypeDefinitionIndex = 9775;

	class JObject___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Newtonsoft.Json.Linq", "<>c")->GetStaticField(0x2E6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT___C_CTOR_OFFSET))(this);
		}

	};
}
