#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGKKILFFNJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGKKILFFNJK_BKCHCDABECK_OFFSET UNITYSDK_OFFSET(0x1E64F360)
#define IGKKILFFNJK_BPHBNAOLIFI_OFFSET UNITYSDK_OFFSET(0x1E64F350)
#define IGKKILFFNJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E64F7F0)
#define IGKKILFFNJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64FBA0)
#define IGKKILFFNJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E64F2F0)
#define IGKKILFFNJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E64F260)
#define IGKKILFFNJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64F210)
#define IGKKILFFNJK_DDHPDLDBIFC_OFFSET UNITYSDK_OFFSET(0x1E64F340)
#define IGKKILFFNJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E64F4A0)
#define IGKKILFFNJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E64F370)
#define IGKKILFFNJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E64F590)
#define IGKKILFFNJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E64F1A0)
#define IGKKILFFNJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E64F950)
#define IGKKILFFNJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E64F900)
#define IGKKILFFNJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E64F200)
#define IGKKILFFNJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E64F690)
#define IGKKILFFNJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E64F6F0)

inline static constexpr unsigned int IGKKILFFNJK_TypeDefinitionIndex = 29160;

	class IGKKILFFNJK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PGPPIKGBPDC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CKCEAFIJLAA; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_DBOODGMJCGP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IGKKILFFNJK")->GetStaticField(0x4B490);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGKKILFFNJK")->GetStaticField(0x4B498);
		}

		// static const ::System::Object MEJGAEIPAOP; // 0x0
		// static const ::System::Object DJEMODKIOAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGKKILFFNJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKKILFFNJK*))((::PBYTE)hIl2Cpp + IGKKILFFNJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGKKILFFNJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGKKILFFNJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGKKILFFNJK* Clone()
		{
			return ((::IGKKILFFNJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 DDHPDLDBIFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK_DDHPDLDBIFC_OFFSET))(this);
		}

		::System::Void BPHBNAOLIFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGKKILFFNJK_BPHBNAOLIFI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BKCHCDABECK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK_BKCHCDABECK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGKKILFFNJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGKKILFFNJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGKKILFFNJK*))((::PBYTE)hIl2Cpp + IGKKILFFNJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGKKILFFNJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGKKILFFNJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKKILFFNJK*))((::PBYTE)hIl2Cpp + IGKKILFFNJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGKKILFFNJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
