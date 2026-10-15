#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PANAGPMIIIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PANAGPMIIIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF1650)
#define PANAGPMIIIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF1910)
#define PANAGPMIIIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF11D0)
#define PANAGPMIIIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF1140)
#define PANAGPMIIIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF10F0)
#define PANAGPMIIIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF1350)
#define PANAGPMIIIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF1230)
#define PANAGPMIIIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF1440)
#define PANAGPMIIIH_JHCJIKDLEJH_OFFSET UNITYSDK_OFFSET(0x1DEF1220)
#define PANAGPMIIIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF1080)
#define PANAGPMIIIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF1740)
#define PANAGPMIIIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF16F0)
#define PANAGPMIIIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF10E0)
#define PANAGPMIIIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF1540)
#define PANAGPMIIIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF15A0)

	class PANAGPMIIIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKGPPAGJKON; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PANAGPMIIIH")->GetStaticField(0x32960);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PEAMLJMHNJA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PANAGPMIIIH")->GetStaticField(0x32968);
		}

		// static const ::System::Object NNMPBAINKIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGPMIIIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PANAGPMIIIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PANAGPMIIIH*))((::PBYTE)hIl2Cpp + PANAGPMIIIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PANAGPMIIIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PANAGPMIIIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGPMIIIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PANAGPMIIIH* Clone()
		{
			return ((::PANAGPMIIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGPMIIIH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHCJIKDLEJH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGPMIIIH_JHCJIKDLEJH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PANAGPMIIIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PANAGPMIIIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PANAGPMIIIH*))((::PBYTE)hIl2Cpp + PANAGPMIIIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGPMIIIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGPMIIIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PANAGPMIIIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGPMIIIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PANAGPMIIIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PANAGPMIIIH*))((::PBYTE)hIl2Cpp + PANAGPMIIIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PANAGPMIIIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
