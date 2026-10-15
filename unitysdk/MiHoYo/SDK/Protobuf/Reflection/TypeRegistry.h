#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class TypeRegistry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC127F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC127E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET UNITYSDK_OFFSET(0x1BBEC660)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1BC12780)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	class TypeRegistry : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* fullNameToMessageMap; // 0x10
		static ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry** StaticGet__Empty_k__BackingField()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "TypeRegistry")->GetStaticField(0x51FE0);
		}

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry* get_Empty()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* Find(::System::String* a1)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET))(this, a1);
		}

	};
}
