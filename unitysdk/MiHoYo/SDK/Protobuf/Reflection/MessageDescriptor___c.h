#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC09890)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC098D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C___CTOR_B__4_4_OFFSET UNITYSDK_OFFSET(0x1BC098E0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor___c_TypeDefinitionIndex = 35841;

	class MessageDescriptor___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x509E0);
		}

		static ::System::Func_2<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*, ::System::Int32>** StaticGet___9__4_4()
		{
			return (::System::Func_2<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*, ::System::Int32>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x509E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__4_4(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C___CTOR_B__4_4_OFFSET))(this, a1);
		}

	};
}
