#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMKMOIGANHN;
class PDEIEDGCOBA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDEIEDGCOBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEDFE30)
#define PDEIEDGCOBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE01C0)
#define PDEIEDGCOBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEDF9E0)
#define PDEIEDGCOBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEDF8F0)
#define PDEIEDGCOBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDF870)
#define PDEIEDGCOBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEDFA60)
#define PDEIEDGCOBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEDFA30)
#define PDEIEDGCOBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEDFBB0)
#define PDEIEDGCOBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEDF830)
#define PDEIEDGCOBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEDFFC0)
#define PDEIEDGCOBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEDFF10)
#define PDEIEDGCOBA_NCHKJKAMCOD_OFFSET UNITYSDK_OFFSET(0x1DEDFA20)
#define PDEIEDGCOBA_NNDPMPILHEI_OFFSET UNITYSDK_OFFSET(0x1DEDFA10)
#define PDEIEDGCOBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEDF860)
#define PDEIEDGCOBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEDFCF0)
#define PDEIEDGCOBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEDFD50)

inline static constexpr unsigned int PDEIEDGCOBA_TypeDefinitionIndex = 27883;

	class PDEIEDGCOBA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LLBGCFGNIGM; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CMKMOIGANHN*>* EIIJCHKGEMA; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AECPGHALGEL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PDEIEDGCOBA")->GetStaticField(0x2F340);
		}

		static ::Google::Protobuf::FieldCodec_1<::CMKMOIGANHN*>** StaticGet_BBEMPGBKGKC()
		{
			return (::Google::Protobuf::FieldCodec_1<::CMKMOIGANHN*>**)UnitySDK::FromName("", "PDEIEDGCOBA")->GetStaticField(0x2F348);
		}

		static ::Google::Protobuf::MessageParser_1<::PDEIEDGCOBA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PDEIEDGCOBA*>**)UnitySDK::FromName("", "PDEIEDGCOBA")->GetStaticField(0x2F350);
		}

		// static const ::System::Object FALMDJBLKNL; // 0x0
		// static const ::System::Object JBJPMJNGFMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDEIEDGCOBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDEIEDGCOBA*))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDEIEDGCOBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PDEIEDGCOBA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PDEIEDGCOBA*>*(*)())((::PBYTE)hIl2Cpp + PDEIEDGCOBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDEIEDGCOBA* Clone()
		{
			return ((::PDEIEDGCOBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NNDPMPILHEI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_NNDPMPILHEI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CMKMOIGANHN*>* NCHKJKAMCOD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CMKMOIGANHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_NCHKJKAMCOD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDEIEDGCOBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDEIEDGCOBA*))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDEIEDGCOBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDEIEDGCOBA*))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDEIEDGCOBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
