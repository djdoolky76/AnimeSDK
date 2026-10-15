#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEODEMHEBKC;
class OBJMMFFDGGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBJMMFFDGGC_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1EBB1A90)
#define OBJMMFFDGGC_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1EBB1AA0)
#define OBJMMFFDGGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBB1F20)
#define OBJMMFFDGGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB22A0)
#define OBJMMFFDGGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBB1A60)
#define OBJMMFFDGGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBB19A0)
#define OBJMMFFDGGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB1950)
#define OBJMMFFDGGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBB1C10)
#define OBJMMFFDGGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBB1AC0)
#define OBJMMFFDGGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBB1D40)
#define OBJMMFFDGGC_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1EBB1AB0)
#define OBJMMFFDGGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBB1910)
#define OBJMMFFDGGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBB20D0)
#define OBJMMFFDGGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBB2030)
#define OBJMMFFDGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBB1940)
#define OBJMMFFDGGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBB1DB0)
#define OBJMMFFDGGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBB1E10)

inline static constexpr unsigned int OBJMMFFDGGC_TypeDefinitionIndex = 26346;

	class OBJMMFFDGGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JEODEMHEBKC*>* AFNHANNCAMC; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OBJMMFFDGGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBJMMFFDGGC*>**)UnitySDK::FromName("", "OBJMMFFDGGC")->GetStaticField(0x10A20);
		}

		static ::Google::Protobuf::FieldCodec_1<::JEODEMHEBKC*>** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::JEODEMHEBKC*>**)UnitySDK::FromName("", "OBJMMFFDGGC")->GetStaticField(0x10A28);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object GEJEJNNMGGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBJMMFFDGGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJMMFFDGGC*))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBJMMFFDGGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBJMMFFDGGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBJMMFFDGGC*>*(*)())((::PBYTE)hIl2Cpp + OBJMMFFDGGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBJMMFFDGGC* Clone()
		{
			return ((::OBJMMFFDGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JEODEMHEBKC*>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JEODEMHEBKC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_HONGLJECAAC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBJMMFFDGGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBJMMFFDGGC*))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBJMMFFDGGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJMMFFDGGC*))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBJMMFFDGGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
