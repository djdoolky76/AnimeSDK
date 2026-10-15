#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEEFPOLFCOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEEFPOLFCOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6E8E30)
#define JEEFPOLFCOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E8ED0)
#define JEEFPOLFCOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6E8B20)
#define JEEFPOLFCOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6E8AF0)
#define JEEFPOLFCOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E8AE0)
#define JEEFPOLFCOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6E8C30)
#define JEEFPOLFCOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6E8B60)
#define JEEFPOLFCOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6E8D90)
#define JEEFPOLFCOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6E8AA0)
#define JEEFPOLFCOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6E8E80)
#define JEEFPOLFCOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6E8E50)
#define JEEFPOLFCOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6E8AD0)
#define JEEFPOLFCOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6E8DC0)
#define JEEFPOLFCOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6E8E20)

inline static constexpr unsigned int JEEFPOLFCOO_TypeDefinitionIndex = 26728;

	class JEEFPOLFCOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JEEFPOLFCOO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEEFPOLFCOO*>**)UnitySDK::FromName("", "JEEFPOLFCOO")->GetStaticField(0x5C460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEEFPOLFCOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEEFPOLFCOO*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEEFPOLFCOO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEEFPOLFCOO*>*(*)())((::PBYTE)hIl2Cpp + JEEFPOLFCOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEEFPOLFCOO* Clone()
		{
			return ((::JEEFPOLFCOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEEFPOLFCOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEEFPOLFCOO*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEEFPOLFCOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEEFPOLFCOO*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
