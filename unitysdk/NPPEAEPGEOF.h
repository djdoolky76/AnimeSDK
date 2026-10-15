#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBHDCJHGKCN;
class NPPEAEPGEOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPPEAEPGEOF_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x1EB74340)
#define NPPEAEPGEOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB74800)
#define NPPEAEPGEOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB74B50)
#define NPPEAEPGEOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB74310)
#define NPPEAEPGEOF_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x1EB74350)
#define NPPEAEPGEOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB74250)
#define NPPEAEPGEOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB74200)
#define NPPEAEPGEOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB743E0)
#define NPPEAEPGEOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB743B0)
#define NPPEAEPGEOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB74370)
#define NPPEAEPGEOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB74520)
#define NPPEAEPGEOF_GGHGGIMPBFK_OFFSET UNITYSDK_OFFSET(0x1EB74390)
#define NPPEAEPGEOF_HLMFDGJJOKN_OFFSET UNITYSDK_OFFSET(0x1EB743A0)
#define NPPEAEPGEOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB741C0)
#define NPPEAEPGEOF_LIMFMEKJBPF_OFFSET UNITYSDK_OFFSET(0x1EB74380)
#define NPPEAEPGEOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB74A50)
#define NPPEAEPGEOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB74990)
#define NPPEAEPGEOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB74360)
#define NPPEAEPGEOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB741F0)
#define NPPEAEPGEOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB745A0)
#define NPPEAEPGEOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB74600)

inline static constexpr unsigned int NPPEAEPGEOF_TypeDefinitionIndex = 30657;

	class NPPEAEPGEOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NBHDCJHGKCN*>* PBKIDNIPABK; // 0x18
		::System::UInt32 BMGMACIBMFH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::Boolean OHLHEGBGEOH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::NPPEAEPGEOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPPEAEPGEOF*>**)UnitySDK::FromName("", "NPPEAEPGEOF")->GetStaticField(0xE2D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::NBHDCJHGKCN*>** StaticGet_BOEJOIEFDNI()
		{
			return (::Google::Protobuf::FieldCodec_1<::NBHDCJHGKCN*>**)UnitySDK::FromName("", "NPPEAEPGEOF")->GetStaticField(0xE2D8);
		}

		// static const ::System::Object FPEDPMAHHND; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HHOCPOACAJL; // 0x0
		// static const ::System::Object NJBJCFLEIAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPPEAEPGEOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPEAEPGEOF*))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPEAEPGEOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPPEAEPGEOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPPEAEPGEOF*>*(*)())((::PBYTE)hIl2Cpp + NPPEAEPGEOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPPEAEPGEOF* Clone()
		{
			return ((::NPPEAEPGEOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 BEPKKOHEOGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_BEPKKOHEOGL_OFFSET))(this);
		}

		::System::Void CMPAPOLKDMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_CMPAPOLKDMI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NBHDCJHGKCN*>* LIMFMEKJBPF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NBHDCJHGKCN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_LIMFMEKJBPF_OFFSET))(this);
		}

		::System::Boolean GGHGGIMPBFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_GGHGGIMPBFK_OFFSET))(this);
		}

		::System::Void HLMFDGJJOKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_HLMFDGJJOKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPPEAEPGEOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPPEAEPGEOF*))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPPEAEPGEOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPEAEPGEOF*))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPPEAEPGEOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
