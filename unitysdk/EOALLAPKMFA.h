#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOALLAPKMFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOALLAPKMFA_AONEFDOPGDC_OFFSET UNITYSDK_OFFSET(0x1E2C8DA0)
#define EOALLAPKMFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C9300)
#define EOALLAPKMFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C9590)
#define EOALLAPKMFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C8D50)
#define EOALLAPKMFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C8CB0)
#define EOALLAPKMFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C8C50)
#define EOALLAPKMFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C8EB0)
#define EOALLAPKMFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C8E10)
#define EOALLAPKMFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C8FE0)
#define EOALLAPKMFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C8C10)
#define EOALLAPKMFA_LAEEMPOIHOK_OFFSET UNITYSDK_OFFSET(0x1E2C8E00)
#define EOALLAPKMFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C9490)
#define EOALLAPKMFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C9420)
#define EOALLAPKMFA_NOJOEJIFAGC_OFFSET UNITYSDK_OFFSET(0x1E2C8DB0)
#define EOALLAPKMFA_OCMELHDBILD_OFFSET UNITYSDK_OFFSET(0x1E2C8D80)
#define EOALLAPKMFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C8C40)
#define EOALLAPKMFA_PNLHBBDAGKE_OFFSET UNITYSDK_OFFSET(0x1E2C8D90)
#define EOALLAPKMFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C9160)
#define EOALLAPKMFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C91C0)

inline static constexpr unsigned int EOALLAPKMFA_TypeDefinitionIndex = 34133;

	class EOALLAPKMFA : public ::System::Object
	{
	public:
		::System::String* GBEOKDKOKKG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKIMBAJGANG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 EEJENIBCKFC; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NGJOKJCBILD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EOALLAPKMFA")->GetStaticField(0x45D50);
		}

		static ::Google::Protobuf::MessageParser_1<::EOALLAPKMFA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EOALLAPKMFA*>**)UnitySDK::FromName("", "EOALLAPKMFA")->GetStaticField(0x45D58);
		}

		// static const ::System::Object CDDFKHMGIKC; // 0x0
		// static const ::System::Object NPGGEJCIEND; // 0x0
		// static const ::System::Object CIPHCNGGHJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOALLAPKMFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOALLAPKMFA*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOALLAPKMFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EOALLAPKMFA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EOALLAPKMFA*>*(*)())((::PBYTE)hIl2Cpp + EOALLAPKMFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOALLAPKMFA* Clone()
		{
			return ((::EOALLAPKMFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCMELHDBILD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_OCMELHDBILD_OFFSET))(this);
		}

		::System::Void PNLHBBDAGKE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOALLAPKMFA_PNLHBBDAGKE_OFFSET))(this, a1);
		}

		::System::String* AONEFDOPGDC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_AONEFDOPGDC_OFFSET))(this);
		}

		::System::Void NOJOEJIFAGC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_NOJOEJIFAGC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LAEEMPOIHOK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_LAEEMPOIHOK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOALLAPKMFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOALLAPKMFA*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOALLAPKMFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOALLAPKMFA*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOALLAPKMFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
