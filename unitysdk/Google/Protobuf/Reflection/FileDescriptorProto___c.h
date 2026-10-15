#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class FileDescriptorProto; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B865DB0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B865DF0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x1B865E00)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorProto___c_TypeDefinitionIndex = 5460;

	class FileDescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x218A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptorProto* __cctor_b__98_0()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C___CCTOR_B__98_0_OFFSET))(this);
		}

	};
}
