#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class OneofDescriptorProto; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B876550)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B876590)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1B8765A0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofDescriptorProto___c_TypeDefinitionIndex = 5476;

	class OneofDescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x23AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofDescriptorProto* __cctor_b__37_0()
		{
			return ((::Google::Protobuf::Reflection::OneofDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
}
