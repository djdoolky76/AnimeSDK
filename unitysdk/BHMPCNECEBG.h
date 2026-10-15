#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMPCNECEBG;
class HCFLAPPBPOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHMPCNECEBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDFC650)
#define BHMPCNECEBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC950)
#define BHMPCNECEBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDFC1D0)
#define BHMPCNECEBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDFC120)
#define BHMPCNECEBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC0D0)
#define BHMPCNECEBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDFC3B0)
#define BHMPCNECEBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDFC230)
#define BHMPCNECEBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDFC4D0)
#define BHMPCNECEBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDFC060)
#define BHMPCNECEBG_JPBFLHILFMK_OFFSET UNITYSDK_OFFSET(0x1DDFC220)
#define BHMPCNECEBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDFC790)
#define BHMPCNECEBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDFC6F0)
#define BHMPCNECEBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC0C0)
#define BHMPCNECEBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDFC540)
#define BHMPCNECEBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDFC5A0)

	class BHMPCNECEBG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HCFLAPPBPOP*>* CJPFOEKDBLJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BHMPCNECEBG")->GetStaticField(0x46EE0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CPMNHGEAHEI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BHMPCNECEBG")->GetStaticField(0x46EE8);
		}

		// static const ::System::Object JPLOHDHOPMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHMPCNECEBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMPCNECEBG*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMPCNECEBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BHMPCNECEBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHMPCNECEBG* Clone()
		{
			return ((::BHMPCNECEBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HCFLAPPBPOP*>* JPBFLHILFMK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HCFLAPPBPOP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_JPBFLHILFMK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHMPCNECEBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHMPCNECEBG*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHMPCNECEBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMPCNECEBG*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
