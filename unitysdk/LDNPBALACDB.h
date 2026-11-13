#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDNPBALACDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDNPBALACDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F80FAB0)
#define LDNPBALACDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F80FD10)
#define LDNPBALACDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F80F6B0)
#define LDNPBALACDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F80F620)
#define LDNPBALACDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F80F5D0)
#define LDNPBALACDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F80F7E0)
#define LDNPBALACDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F80F6F0)
#define LDNPBALACDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F80F8D0)
#define LDNPBALACDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F80F590)
#define LDNPBALACDB_LCHLKIHBHBA_OFFSET UNITYSDK_OFFSET(0x1F80F6E0)
#define LDNPBALACDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F80FB70)
#define LDNPBALACDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F80FB20)
#define LDNPBALACDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F80F5C0)
#define LDNPBALACDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F80F9D0)
#define LDNPBALACDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F80FA30)

inline static constexpr unsigned int LDNPBALACDB_TypeDefinitionIndex = 30504;

	class LDNPBALACDB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GKPOJKHDHFO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LDNPBALACDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDNPBALACDB*>**)UnitySDK::FromName("", "LDNPBALACDB")->GetStaticField(0x2E040);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MOBCNJLLPBC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LDNPBALACDB")->GetStaticField(0x2E048);
		}

		// static const ::System::Object BHNEOLKFNAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNPBALACDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDNPBALACDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNPBALACDB*))((::PBYTE)hIl2Cpp + LDNPBALACDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNPBALACDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDNPBALACDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDNPBALACDB*>*(*)())((::PBYTE)hIl2Cpp + LDNPBALACDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNPBALACDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDNPBALACDB* Clone()
		{
			return ((::LDNPBALACDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNPBALACDB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LCHLKIHBHBA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNPBALACDB_LCHLKIHBHBA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDNPBALACDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDNPBALACDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDNPBALACDB*))((::PBYTE)hIl2Cpp + LDNPBALACDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNPBALACDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNPBALACDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDNPBALACDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNPBALACDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDNPBALACDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNPBALACDB*))((::PBYTE)hIl2Cpp + LDNPBALACDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDNPBALACDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
