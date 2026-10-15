#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAKNAOBLJGJ;
class FNELOGOPCKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNELOGOPCKE_BBEEHOABADN_OFFSET UNITYSDK_OFFSET(0x1E3C1360)
#define FNELOGOPCKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C1780)
#define FNELOGOPCKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C1B10)
#define FNELOGOPCKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C1330)
#define FNELOGOPCKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C1240)
#define FNELOGOPCKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C11C0)
#define FNELOGOPCKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C13B0)
#define FNELOGOPCKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C1380)
#define FNELOGOPCKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C1500)
#define FNELOGOPCKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C1180)
#define FNELOGOPCKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C1910)
#define FNELOGOPCKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C1860)
#define FNELOGOPCKE_MJOFHPDLOKG_OFFSET UNITYSDK_OFFSET(0x1E3C1370)
#define FNELOGOPCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C11B0)
#define FNELOGOPCKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C1640)
#define FNELOGOPCKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C16A0)

inline static constexpr unsigned int FNELOGOPCKE_TypeDefinitionIndex = 34724;

	class FNELOGOPCKE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGKECLGFAPK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::EAKNAOBLJGJ*>* IPNHKKOGFOJ; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IDKOJMEEPIF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FNELOGOPCKE")->GetStaticField(0x5DA20);
		}

		static ::Google::Protobuf::MessageParser_1<::FNELOGOPCKE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNELOGOPCKE*>**)UnitySDK::FromName("", "FNELOGOPCKE")->GetStaticField(0x5DA28);
		}

		static ::Google::Protobuf::FieldCodec_1<::EAKNAOBLJGJ*>** StaticGet_MEJKJBEAAIJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::EAKNAOBLJGJ*>**)UnitySDK::FromName("", "FNELOGOPCKE")->GetStaticField(0x5DA30);
		}

		// static const ::System::Object PDCALHCNGCK; // 0x0
		// static const ::System::Object AHCDNIBFDEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNELOGOPCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNELOGOPCKE*))((::PBYTE)hIl2Cpp + FNELOGOPCKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNELOGOPCKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNELOGOPCKE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNELOGOPCKE*>*(*)())((::PBYTE)hIl2Cpp + FNELOGOPCKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNELOGOPCKE* Clone()
		{
			return ((::FNELOGOPCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBEEHOABADN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE_BBEEHOABADN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EAKNAOBLJGJ*>* MJOFHPDLOKG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EAKNAOBLJGJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE_MJOFHPDLOKG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNELOGOPCKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNELOGOPCKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNELOGOPCKE*))((::PBYTE)hIl2Cpp + FNELOGOPCKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNELOGOPCKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELOGOPCKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNELOGOPCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNELOGOPCKE*))((::PBYTE)hIl2Cpp + FNELOGOPCKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNELOGOPCKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
