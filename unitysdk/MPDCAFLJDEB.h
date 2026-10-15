#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDNAGMDELF;
class MPDCAFLJDEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPDCAFLJDEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA874A0)
#define MPDCAFLJDEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA87780)
#define MPDCAFLJDEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA870B0)
#define MPDCAFLJDEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA87020)
#define MPDCAFLJDEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA86FE0)
#define MPDCAFLJDEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA87230)
#define MPDCAFLJDEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA870F0)
#define MPDCAFLJDEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA87350)
#define MPDCAFLJDEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA86FA0)
#define MPDCAFLJDEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA875E0)
#define MPDCAFLJDEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA87540)
#define MPDCAFLJDEB_MJBNBNKECFL_OFFSET UNITYSDK_OFFSET(0x1EA870E0)
#define MPDCAFLJDEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA86FD0)
#define MPDCAFLJDEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA873C0)
#define MPDCAFLJDEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA87420)

inline static constexpr unsigned int MPDCAFLJDEB_TypeDefinitionIndex = 34630;

	class MPDCAFLJDEB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JCDNAGMDELF*>* LPNJBAFKFAK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MPDCAFLJDEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPDCAFLJDEB*>**)UnitySDK::FromName("", "MPDCAFLJDEB")->GetStaticField(0x5B690);
		}

		static ::Google::Protobuf::FieldCodec_1<::JCDNAGMDELF*>** StaticGet_IIHDAMEDAOF()
		{
			return (::Google::Protobuf::FieldCodec_1<::JCDNAGMDELF*>**)UnitySDK::FromName("", "MPDCAFLJDEB")->GetStaticField(0x5B698);
		}

		// static const ::System::Object IDJLBMDJGIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPDCAFLJDEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDCAFLJDEB*))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDCAFLJDEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPDCAFLJDEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPDCAFLJDEB*>*(*)())((::PBYTE)hIl2Cpp + MPDCAFLJDEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPDCAFLJDEB* Clone()
		{
			return ((::MPDCAFLJDEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JCDNAGMDELF*>* MJBNBNKECFL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JCDNAGMDELF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_MJBNBNKECFL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPDCAFLJDEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPDCAFLJDEB*))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPDCAFLJDEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDCAFLJDEB*))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPDCAFLJDEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
