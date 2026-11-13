#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPEGNCJDBOM;
class PBPDPNPJHLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBPDPNPJHLE_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1FBF36E0)
#define PBPDPNPJHLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBF3AD0)
#define PBPDPNPJHLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBF3DD0)
#define PBPDPNPJHLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBF36B0)
#define PBPDPNPJHLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBF3600)
#define PBPDPNPJHLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF35B0)
#define PBPDPNPJHLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBF3830)
#define PBPDPNPJHLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBF36F0)
#define PBPDPNPJHLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBF3950)
#define PBPDPNPJHLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBF3570)
#define PBPDPNPJHLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBF3C10)
#define PBPDPNPJHLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBF3B70)
#define PBPDPNPJHLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBF35A0)
#define PBPDPNPJHLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBF39C0)
#define PBPDPNPJHLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBF3A20)

inline static constexpr unsigned int PBPDPNPJHLE_TypeDefinitionIndex = 32064;

	class PBPDPNPJHLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JPEGNCJDBOM*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::JPEGNCJDBOM*>** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::JPEGNCJDBOM*>**)UnitySDK::FromName("", "PBPDPNPJHLE")->GetStaticField(0x2E7E0);
		}

		static ::Google::Protobuf::MessageParser_1<::PBPDPNPJHLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBPDPNPJHLE*>**)UnitySDK::FromName("", "PBPDPNPJHLE")->GetStaticField(0x2E7E8);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBPDPNPJHLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBPDPNPJHLE*))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBPDPNPJHLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PBPDPNPJHLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBPDPNPJHLE*>*(*)())((::PBYTE)hIl2Cpp + PBPDPNPJHLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBPDPNPJHLE* Clone()
		{
			return ((::PBPDPNPJHLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JPEGNCJDBOM*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JPEGNCJDBOM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBPDPNPJHLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBPDPNPJHLE*))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBPDPNPJHLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBPDPNPJHLE*))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBPDPNPJHLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
