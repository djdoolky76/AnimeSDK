#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGIELFOIPHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGIELFOIPHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE54160)
#define NGIELFOIPHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE54200)
#define NGIELFOIPHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE53E50)
#define NGIELFOIPHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE53E20)
#define NGIELFOIPHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE53E10)
#define NGIELFOIPHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE53F60)
#define NGIELFOIPHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE53E90)
#define NGIELFOIPHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE540C0)
#define NGIELFOIPHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE53DD0)
#define NGIELFOIPHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE541B0)
#define NGIELFOIPHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE54180)
#define NGIELFOIPHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE53E00)
#define NGIELFOIPHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE540F0)
#define NGIELFOIPHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE54150)

inline static constexpr unsigned int NGIELFOIPHH_TypeDefinitionIndex = 27972;

	class NGIELFOIPHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NGIELFOIPHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGIELFOIPHH*>**)UnitySDK::FromName("", "NGIELFOIPHH")->GetStaticField(0x6A4D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIELFOIPHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGIELFOIPHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGIELFOIPHH*))((::PBYTE)hIl2Cpp + NGIELFOIPHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGIELFOIPHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGIELFOIPHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGIELFOIPHH*>*(*)())((::PBYTE)hIl2Cpp + NGIELFOIPHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIELFOIPHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGIELFOIPHH* Clone()
		{
			return ((::NGIELFOIPHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIELFOIPHH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGIELFOIPHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGIELFOIPHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGIELFOIPHH*))((::PBYTE)hIl2Cpp + NGIELFOIPHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIELFOIPHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIELFOIPHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGIELFOIPHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIELFOIPHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGIELFOIPHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGIELFOIPHH*))((::PBYTE)hIl2Cpp + NGIELFOIPHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGIELFOIPHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
