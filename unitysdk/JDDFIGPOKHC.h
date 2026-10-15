#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDDFIGPOKHC;
class MGEAPNBMJKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDDFIGPOKHC_BPOAABPJIGA_OFFSET UNITYSDK_OFFSET(0x1E6DA3B0)
#define JDDFIGPOKHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DA7E0)
#define JDDFIGPOKHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DAAE0)
#define JDDFIGPOKHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DA360)
#define JDDFIGPOKHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DA2B0)
#define JDDFIGPOKHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DA260)
#define JDDFIGPOKHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DA540)
#define JDDFIGPOKHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DA3C0)
#define JDDFIGPOKHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DA660)
#define JDDFIGPOKHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DA1F0)
#define JDDFIGPOKHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DA920)
#define JDDFIGPOKHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DA880)
#define JDDFIGPOKHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DA250)
#define JDDFIGPOKHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DA6D0)
#define JDDFIGPOKHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DA730)

inline static constexpr unsigned int JDDFIGPOKHC_TypeDefinitionIndex = 29946;

	class JDDFIGPOKHC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MGEAPNBMJKJ*>* PMDDGCIBIPO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::MGEAPNBMJKJ*>** StaticGet_OFHFBLAAGCA()
		{
			return (::Google::Protobuf::FieldCodec_1<::MGEAPNBMJKJ*>**)UnitySDK::FromName("", "JDDFIGPOKHC")->GetStaticField(0x5A620);
		}

		static ::Google::Protobuf::MessageParser_1<::JDDFIGPOKHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDDFIGPOKHC*>**)UnitySDK::FromName("", "JDDFIGPOKHC")->GetStaticField(0x5A628);
		}

		// static const ::System::Object POECPCBCDDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDDFIGPOKHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDDFIGPOKHC*))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDDFIGPOKHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDDFIGPOKHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDDFIGPOKHC*>*(*)())((::PBYTE)hIl2Cpp + JDDFIGPOKHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDDFIGPOKHC* Clone()
		{
			return ((::JDDFIGPOKHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MGEAPNBMJKJ*>* BPOAABPJIGA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MGEAPNBMJKJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_BPOAABPJIGA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDDFIGPOKHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDDFIGPOKHC*))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDDFIGPOKHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDDFIGPOKHC*))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDDFIGPOKHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
