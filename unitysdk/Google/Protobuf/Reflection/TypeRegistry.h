#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class TypeRegistry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B89F4F0)
#define GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1B89F430)
#define GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET UNITYSDK_OFFSET(0x1B89F440)
#define GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1B89F3D0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int TypeRegistry_TypeDefinitionIndex = 5577;

	class TypeRegistry : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Google::Protobuf::Reflection::MessageDescriptor*>* fullNameToMessageMap; // 0x10
		static ::Google::Protobuf::Reflection::TypeRegistry** StaticGet__Empty_k__BackingField()
		{
			return (::Google::Protobuf::Reflection::TypeRegistry**)UnitySDK::FromName("Google.Protobuf.Reflection", "TypeRegistry")->GetStaticField(0x18F00);
		}

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::Google::Protobuf::Reflection::MessageDescriptor*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Google::Protobuf::Reflection::MessageDescriptor*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::TypeRegistry* get_Empty()
		{
			return ((::Google::Protobuf::Reflection::TypeRegistry*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* Find(::System::String* a1)
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET))(this, a1);
		}

	};
}
