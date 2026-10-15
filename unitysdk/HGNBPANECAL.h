#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJLOENPDAHE;
class HGNBPANECAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGNBPANECAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5841A0)
#define HGNBPANECAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E584530)
#define HGNBPANECAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E583CF0)
#define HGNBPANECAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E583C60)
#define HGNBPANECAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E583C20)
#define HGNBPANECAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E583EA0)
#define HGNBPANECAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E583D50)
#define HGNBPANECAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E583FC0)
#define HGNBPANECAL_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1E583D20)
#define HGNBPANECAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E583BE0)
#define HGNBPANECAL_JNFBHFOFHFO_OFFSET UNITYSDK_OFFSET(0x1E583D40)
#define HGNBPANECAL_KLKAIAKLHMF_OFFSET UNITYSDK_OFFSET(0x1E583D30)
#define HGNBPANECAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E584370)
#define HGNBPANECAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5842D0)
#define HGNBPANECAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E583C10)
#define HGNBPANECAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E584030)
#define HGNBPANECAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E584090)

	class HGNBPANECAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BJLOENPDAHE*>* JLFDMJMJDND; // 0x18
		::System::UInt32 AMOPIFLCGOO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HGNBPANECAL")->GetStaticField(0x18160);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HGNBPANECAL")->GetStaticField(0x18168);
		}

		// static const ::System::Object CPBPPPJBFGH; // 0x0
		// static const ::System::Object KKHPBDAEOLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGNBPANECAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGNBPANECAL*))((::PBYTE)hIl2Cpp + HGNBPANECAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGNBPANECAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HGNBPANECAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGNBPANECAL* Clone()
		{
			return ((::HGNBPANECAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BJLOENPDAHE*>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BJLOENPDAHE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_JHEFPOGNBND_OFFSET))(this);
		}

		::System::UInt32 KLKAIAKLHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_KLKAIAKLHMF_OFFSET))(this);
		}

		::System::Void JNFBHFOFHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGNBPANECAL_JNFBHFOFHFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGNBPANECAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGNBPANECAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGNBPANECAL*))((::PBYTE)hIl2Cpp + HGNBPANECAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGNBPANECAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGNBPANECAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGNBPANECAL*))((::PBYTE)hIl2Cpp + HGNBPANECAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGNBPANECAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
