#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFDNIJHMEND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFDNIJHMEND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E09EF10)
#define CFDNIJHMEND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09F170)
#define CFDNIJHMEND_CLONE_OFFSET UNITYSDK_OFFSET(0x1E09EB10)
#define CFDNIJHMEND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E09EA80)
#define CFDNIJHMEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09EA30)
#define CFDNIJHMEND_EJJAKJIIOPL_OFFSET UNITYSDK_OFFSET(0x1E09EB40)
#define CFDNIJHMEND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E09EC40)
#define CFDNIJHMEND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E09EB50)
#define CFDNIJHMEND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E09ED30)
#define CFDNIJHMEND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E09E9F0)
#define CFDNIJHMEND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E09EFD0)
#define CFDNIJHMEND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E09EF80)
#define CFDNIJHMEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E09EA20)
#define CFDNIJHMEND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E09EE30)
#define CFDNIJHMEND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E09EE90)

inline static constexpr unsigned int CFDNIJHMEND_TypeDefinitionIndex = 30970;

	class CFDNIJHMEND : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JIAHGDMHNAN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CFDNIJHMEND")->GetStaticField(0x12A40);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GDCJAJMMANC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CFDNIJHMEND")->GetStaticField(0x12A48);
		}

		// static const ::System::Object HHPDHDOPJKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDNIJHMEND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFDNIJHMEND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFDNIJHMEND*))((::PBYTE)hIl2Cpp + CFDNIJHMEND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFDNIJHMEND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CFDNIJHMEND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDNIJHMEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFDNIJHMEND* Clone()
		{
			return ((::CFDNIJHMEND*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDNIJHMEND_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJJAKJIIOPL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDNIJHMEND_EJJAKJIIOPL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFDNIJHMEND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFDNIJHMEND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFDNIJHMEND*))((::PBYTE)hIl2Cpp + CFDNIJHMEND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDNIJHMEND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDNIJHMEND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFDNIJHMEND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDNIJHMEND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFDNIJHMEND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFDNIJHMEND*))((::PBYTE)hIl2Cpp + CFDNIJHMEND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFDNIJHMEND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
