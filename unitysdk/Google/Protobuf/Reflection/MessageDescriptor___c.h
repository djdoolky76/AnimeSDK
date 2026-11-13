#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEE4BF0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE4C30)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C___CTOR_B__4_4_OFFSET UNITYSDK_OFFSET(0x1BEE4C40)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor___c_TypeDefinitionIndex = 5557;

	class MessageDescriptor___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x21F70);
		}

		static ::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::System::Int32>** StaticGet___9__4_4()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::System::Int32>**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x21F78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__4_4(::Google::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C___CTOR_B__4_4_OFFSET))(this, a1);
		}

	};
}
