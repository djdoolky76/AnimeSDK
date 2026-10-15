#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFKLPGEKJLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFKLPGEKJLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E81D100)
#define KFKLPGEKJLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81D3D0)
#define KFKLPGEKJLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E81CD00)
#define KFKLPGEKJLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E81CCD0)
#define KFKLPGEKJLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81CCC0)
#define KFKLPGEKJLA_ENDBLFECBCB_OFFSET UNITYSDK_OFFSET(0x1E81CD70)
#define KFKLPGEKJLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E81CEC0)
#define KFKLPGEKJLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E81CDB0)
#define KFKLPGEKJLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E81CF90)
#define KFKLPGEKJLA_HCJADECJBKJ_OFFSET UNITYSDK_OFFSET(0x1E81CDA0)
#define KFKLPGEKJLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E81CC50)
#define KFKLPGEKJLA_KENBJNPGCIG_OFFSET UNITYSDK_OFFSET(0x1E81CD90)
#define KFKLPGEKJLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E81D250)
#define KFKLPGEKJLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E81D210)
#define KFKLPGEKJLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E81CCB0)
#define KFKLPGEKJLA_PPCFBDNNBCC_OFFSET UNITYSDK_OFFSET(0x1E81CD80)
#define KFKLPGEKJLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E81CFC0)
#define KFKLPGEKJLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E81D020)

inline static constexpr unsigned int KFKLPGEKJLA_TypeDefinitionIndex = 25072;

	class KFKLPGEKJLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NECNCPDGBOO; // 0x18
		::System::UInt32 NBOPCFPLKII; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KFKLPGEKJLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFKLPGEKJLA*>**)UnitySDK::FromName("", "KFKLPGEKJLA")->GetStaticField(0x13E80);
		}

		// static const ::System::Object IOAMBHCDNBJ; // 0x0
		// static const ::System::Object JFKBNAJAHMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFKLPGEKJLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFKLPGEKJLA*))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFKLPGEKJLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFKLPGEKJLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFKLPGEKJLA*>*(*)())((::PBYTE)hIl2Cpp + KFKLPGEKJLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFKLPGEKJLA* Clone()
		{
			return ((::KFKLPGEKJLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENDBLFECBCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_ENDBLFECBCB_OFFSET))(this);
		}

		::System::Void PPCFBDNNBCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_PPCFBDNNBCC_OFFSET))(this, a1);
		}

		::System::UInt32 KENBJNPGCIG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_KENBJNPGCIG_OFFSET))(this);
		}

		::System::Void HCJADECJBKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_HCJADECJBKJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFKLPGEKJLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFKLPGEKJLA*))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFKLPGEKJLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFKLPGEKJLA*))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFKLPGEKJLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
