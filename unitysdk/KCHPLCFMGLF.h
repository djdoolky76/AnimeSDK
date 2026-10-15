#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJDPEBBFMG;
class IFFEHFHAKCB;
class KCHPLCFMGLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCHPLCFMGLF_ADFBNDEBELO_OFFSET UNITYSDK_OFFSET(0x1E7F64C0)
#define KCHPLCFMGLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F6B40)
#define KCHPLCFMGLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F6F50)
#define KCHPLCFMGLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F6480)
#define KCHPLCFMGLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F62F0)
#define KCHPLCFMGLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F62B0)
#define KCHPLCFMGLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F66D0)
#define KCHPLCFMGLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F64E0)
#define KCHPLCFMGLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F68A0)
#define KCHPLCFMGLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F6270)
#define KCHPLCFMGLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F6D80)
#define KCHPLCFMGLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F6C30)
#define KCHPLCFMGLF_NCBEGEDCAMJ_OFFSET UNITYSDK_OFFSET(0x1E7F64D0)
#define KCHPLCFMGLF_NHLEFCEKMAM_OFFSET UNITYSDK_OFFSET(0x1E7F64B0)
#define KCHPLCFMGLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F62A0)
#define KCHPLCFMGLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F69C0)
#define KCHPLCFMGLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F6A20)

inline static constexpr unsigned int KCHPLCFMGLF_TypeDefinitionIndex = 27313;

	class KCHPLCFMGLF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IFFEHFHAKCB*>* CIHHKPOPMEH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::GAJDPEBBFMG* CCAGFEOIGIE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KCHPLCFMGLF")->GetStaticField(0xFC80);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CDPHHCECBJF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KCHPLCFMGLF")->GetStaticField(0xFC88);
		}

		// static const ::System::Object PHNAANFIFGB; // 0x0
		// static const ::System::Object IOJJEJBLCMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCHPLCFMGLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCHPLCFMGLF*))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCHPLCFMGLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KCHPLCFMGLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCHPLCFMGLF* Clone()
		{
			return ((::KCHPLCFMGLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_CLONE_OFFSET))(this);
		}

		::GAJDPEBBFMG* NHLEFCEKMAM()
		{
			return ((::GAJDPEBBFMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_NHLEFCEKMAM_OFFSET))(this);
		}

		::System::Void ADFBNDEBELO(::GAJDPEBBFMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJDPEBBFMG*))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_ADFBNDEBELO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IFFEHFHAKCB*>* NCBEGEDCAMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IFFEHFHAKCB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_NCBEGEDCAMJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCHPLCFMGLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCHPLCFMGLF*))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCHPLCFMGLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCHPLCFMGLF*))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCHPLCFMGLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
