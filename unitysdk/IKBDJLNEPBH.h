#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKBDJLNEPBH;
class PEEEEGAPCOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKBDJLNEPBH_AHFHCONFBMN_OFFSET UNITYSDK_OFFSET(0x1E69BC30)
#define IKBDJLNEPBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E69C060)
#define IKBDJLNEPBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69C360)
#define IKBDJLNEPBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E69BBE0)
#define IKBDJLNEPBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E69BB30)
#define IKBDJLNEPBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69BAE0)
#define IKBDJLNEPBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E69BDC0)
#define IKBDJLNEPBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E69BC40)
#define IKBDJLNEPBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E69BEE0)
#define IKBDJLNEPBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E69BA70)
#define IKBDJLNEPBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E69C1A0)
#define IKBDJLNEPBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E69C100)
#define IKBDJLNEPBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E69BAD0)
#define IKBDJLNEPBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E69BF50)
#define IKBDJLNEPBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E69BFB0)

	class IKBDJLNEPBH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PEEEEGAPCOK*>* MNECLOACJEO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IKBDJLNEPBH")->GetStaticField(0x53310);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BGGGEBPGEEC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IKBDJLNEPBH")->GetStaticField(0x53318);
		}

		// static const ::System::Object BKMHECHGJML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKBDJLNEPBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKBDJLNEPBH*))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKBDJLNEPBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IKBDJLNEPBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKBDJLNEPBH* Clone()
		{
			return ((::IKBDJLNEPBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PEEEEGAPCOK*>* AHFHCONFBMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PEEEEGAPCOK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_AHFHCONFBMN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKBDJLNEPBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKBDJLNEPBH*))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKBDJLNEPBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKBDJLNEPBH*))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKBDJLNEPBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
