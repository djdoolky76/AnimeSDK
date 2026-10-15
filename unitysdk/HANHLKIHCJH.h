#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANHLKIHCJH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HANHLKIHCJH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E509B00)
#define HANHLKIHCJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E509DC0)
#define HANHLKIHCJH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E509680)
#define HANHLKIHCJH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5095F0)
#define HANHLKIHCJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5095A0)
#define HANHLKIHCJH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E509800)
#define HANHLKIHCJH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5096E0)
#define HANHLKIHCJH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5098F0)
#define HANHLKIHCJH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E509530)
#define HANHLKIHCJH_KJBEGNNDJDI_OFFSET UNITYSDK_OFFSET(0x1E5096D0)
#define HANHLKIHCJH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E509BF0)
#define HANHLKIHCJH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E509BA0)
#define HANHLKIHCJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E509590)
#define HANHLKIHCJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5099F0)
#define HANHLKIHCJH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E509A50)

inline static constexpr unsigned int HANHLKIHCJH_TypeDefinitionIndex = 29930;

	class HANHLKIHCJH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EMHKECJGIMN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_MHJOEECKGOD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HANHLKIHCJH")->GetStaticField(0x2D260);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HANHLKIHCJH")->GetStaticField(0x2D268);
		}

		// static const ::System::Object KMHKGBKJCDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HANHLKIHCJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HANHLKIHCJH*))((::PBYTE)hIl2Cpp + HANHLKIHCJH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANHLKIHCJH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HANHLKIHCJH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HANHLKIHCJH* Clone()
		{
			return ((::HANHLKIHCJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KJBEGNNDJDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH_KJBEGNNDJDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HANHLKIHCJH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HANHLKIHCJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HANHLKIHCJH*))((::PBYTE)hIl2Cpp + HANHLKIHCJH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HANHLKIHCJH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HANHLKIHCJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HANHLKIHCJH*))((::PBYTE)hIl2Cpp + HANHLKIHCJH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HANHLKIHCJH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
