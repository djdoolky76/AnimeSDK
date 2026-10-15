#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGBKKJENEOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGBKKJENEOF_BBHJAKDKCBI_OFFSET UNITYSDK_OFFSET(0x1E0AB7B0)
#define CGBKKJENEOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0ABB80)
#define CGBKKJENEOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0ABDE0)
#define CGBKKJENEOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0AB780)
#define CGBKKJENEOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0AB6F0)
#define CGBKKJENEOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AB6A0)
#define CGBKKJENEOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0AB8B0)
#define CGBKKJENEOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0AB7C0)
#define CGBKKJENEOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0AB9A0)
#define CGBKKJENEOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0AB660)
#define CGBKKJENEOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0ABC40)
#define CGBKKJENEOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0ABBF0)
#define CGBKKJENEOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0AB690)
#define CGBKKJENEOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0ABAA0)
#define CGBKKJENEOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0ABB00)

	class CGBKKJENEOF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFDHICGGPGM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_LODPFPGOGIJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CGBKKJENEOF")->GetStaticField(0x13A90);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CGBKKJENEOF")->GetStaticField(0x13A98);
		}

		// static const ::System::Object PICMJLKDHMM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKJENEOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGBKKJENEOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGBKKJENEOF*))((::PBYTE)hIl2Cpp + CGBKKJENEOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBKKJENEOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CGBKKJENEOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKJENEOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGBKKJENEOF* Clone()
		{
			return ((::CGBKKJENEOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKJENEOF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBHJAKDKCBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKJENEOF_BBHJAKDKCBI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGBKKJENEOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGBKKJENEOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGBKKJENEOF*))((::PBYTE)hIl2Cpp + CGBKKJENEOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKJENEOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKJENEOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGBKKJENEOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKJENEOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGBKKJENEOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGBKKJENEOF*))((::PBYTE)hIl2Cpp + CGBKKJENEOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGBKKJENEOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
