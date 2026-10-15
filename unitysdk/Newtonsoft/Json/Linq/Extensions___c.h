#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define NEWTONSOFT_JSON_LINQ_EXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3B3D30)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B3D70)

namespace Newtonsoft::Json::Linq
{
	class Extensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Newtonsoft.Json.Linq", "<>c")->GetStaticField(0x2DF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS___C_CTOR_OFFSET))(this);
		}

	};
}
