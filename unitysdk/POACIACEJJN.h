#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMOJMNKOILL;
class KGHDDIBDABP;
class POACIACEJJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POACIACEJJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFC22A0)
#define POACIACEJJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC26A0)
#define POACIACEJJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFC1EF0)
#define POACIACEJJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFC1DF0)
#define POACIACEJJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC1D80)
#define POACIACEJJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFC1F70)
#define POACIACEJJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFC1F40)
#define POACIACEJJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFC20C0)
#define POACIACEJJN_HCOLEBPEBMA_OFFSET UNITYSDK_OFFSET(0x1DFC1F20)
#define POACIACEJJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFC1D40)
#define POACIACEJJN_JPHOFBDMKLA_OFFSET UNITYSDK_OFFSET(0x1DFC1F30)
#define POACIACEJJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFC2470)
#define POACIACEJJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFC2380)
#define POACIACEJJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFC1D70)
#define POACIACEJJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFC2150)
#define POACIACEJJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFC21B0)

inline static constexpr unsigned int POACIACEJJN_TypeDefinitionIndex = 27567;

	class POACIACEJJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DMOJMNKOILL*>* JBBPEIICNOE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KGHDDIBDABP*>* IBABNDKAINE; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::KGHDDIBDABP*>** StaticGet_BFBKHIOMBMF()
		{
			return (::Google::Protobuf::FieldCodec_1<::KGHDDIBDABP*>**)UnitySDK::FromName("", "POACIACEJJN")->GetStaticField(0x525C0);
		}

		static ::Google::Protobuf::MessageParser_1<::POACIACEJJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POACIACEJJN*>**)UnitySDK::FromName("", "POACIACEJJN")->GetStaticField(0x525C8);
		}

		static ::Google::Protobuf::FieldCodec_1<::DMOJMNKOILL*>** StaticGet_DOJJNGCKKGJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::DMOJMNKOILL*>**)UnitySDK::FromName("", "POACIACEJJN")->GetStaticField(0x525D0);
		}

		// static const ::System::Object FENDJBIADNM; // 0x0
		// static const ::System::Object NCDPLCAGKBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POACIACEJJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POACIACEJJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POACIACEJJN*))((::PBYTE)hIl2Cpp + POACIACEJJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POACIACEJJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POACIACEJJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POACIACEJJN*>*(*)())((::PBYTE)hIl2Cpp + POACIACEJJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POACIACEJJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POACIACEJJN* Clone()
		{
			return ((::POACIACEJJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + POACIACEJJN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KGHDDIBDABP*>* HCOLEBPEBMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KGHDDIBDABP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POACIACEJJN_HCOLEBPEBMA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DMOJMNKOILL*>* JPHOFBDMKLA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DMOJMNKOILL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POACIACEJJN_JPHOFBDMKLA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POACIACEJJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POACIACEJJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POACIACEJJN*))((::PBYTE)hIl2Cpp + POACIACEJJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POACIACEJJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POACIACEJJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POACIACEJJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POACIACEJJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POACIACEJJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POACIACEJJN*))((::PBYTE)hIl2Cpp + POACIACEJJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POACIACEJJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
