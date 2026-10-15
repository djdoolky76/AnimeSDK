#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOAEMOHCEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAOAEMOHCEP_AAPPHPNLIAG_OFFSET UNITYSDK_OFFSET(0x1DDC3D90)
#define AAOAEMOHCEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC40E0)
#define AAOAEMOHCEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC43B0)
#define AAOAEMOHCEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC3D30)
#define AAOAEMOHCEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC3D00)
#define AAOAEMOHCEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC3CF0)
#define AAOAEMOHCEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC3EA0)
#define AAOAEMOHCEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC3DC0)
#define AAOAEMOHCEP_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1DDC3DA0)
#define AAOAEMOHCEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC3F70)
#define AAOAEMOHCEP_JACDAFKIBFK_OFFSET UNITYSDK_OFFSET(0x1DDC3D80)
#define AAOAEMOHCEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC3CB0)
#define AAOAEMOHCEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC4230)
#define AAOAEMOHCEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC41F0)
#define AAOAEMOHCEP_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1DDC3DB0)
#define AAOAEMOHCEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC3CE0)
#define AAOAEMOHCEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC3FA0)
#define AAOAEMOHCEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC4000)

inline static constexpr unsigned int AAOAEMOHCEP_TypeDefinitionIndex = 26013;

	class AAOAEMOHCEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDFIDCNNGMJ; // 0x18
		::System::UInt32 JACDEHEPDAI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AAOAEMOHCEP")->GetStaticField(0x37DD0);
		}

		// static const ::System::Object ONNHIMIHFBH; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAOAEMOHCEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAOAEMOHCEP*))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAOAEMOHCEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AAOAEMOHCEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAOAEMOHCEP* Clone()
		{
			return ((::AAOAEMOHCEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_CLONE_OFFSET))(this);
		}

		::System::UInt32 JACDAFKIBFK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_JACDAFKIBFK_OFFSET))(this);
		}

		::System::Void AAPPHPNLIAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_AAPPHPNLIAG_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAOAEMOHCEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAOAEMOHCEP*))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAOAEMOHCEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAOAEMOHCEP*))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAOAEMOHCEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
