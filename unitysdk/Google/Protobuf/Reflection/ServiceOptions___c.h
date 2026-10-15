#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class ServiceOptions; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B89BE90)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B89BED0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1B89BEE0)

namespace Google::Protobuf::Reflection
{
	class ServiceOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x18B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceOptions* __cctor_b__43_0()
		{
			return ((::Google::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
}
