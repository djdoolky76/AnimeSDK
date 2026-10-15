#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJMJCLMPCMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJMJCLMPCMF_APOMCFOMDBG_OFFSET UNITYSDK_OFFSET(0x1E733CF0)
#define JJMJCLMPCMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E734150)
#define JJMJCLMPCMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E734450)
#define JJMJCLMPCMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E733CC0)
#define JJMJCLMPCMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E733C30)
#define JJMJCLMPCMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E733BE0)
#define JJMJCLMPCMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E733E20)
#define JJMJCLMPCMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E733D20)
#define JJMJCLMPCMF_FPMILFKJFGP_OFFSET UNITYSDK_OFFSET(0x1E733D10)
#define JJMJCLMPCMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E733F10)
#define JJMJCLMPCMF_HDMJBBCHHIH_OFFSET UNITYSDK_OFFSET(0x1E733D00)
#define JJMJCLMPCMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E733BA0)
#define JJMJCLMPCMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E734290)
#define JJMJCLMPCMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E734240)
#define JJMJCLMPCMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E733BD0)
#define JJMJCLMPCMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E734010)
#define JJMJCLMPCMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E734070)

inline static constexpr unsigned int JJMJCLMPCMF_TypeDefinitionIndex = 34240;

	class JJMJCLMPCMF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NFHAAOGICFK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HILLOGLCOCH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HOHHOFMEMKM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JJMJCLMPCMF")->GetStaticField(0x62B00);
		}

		static ::Google::Protobuf::MessageParser_1<::JJMJCLMPCMF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJMJCLMPCMF*>**)UnitySDK::FromName("", "JJMJCLMPCMF")->GetStaticField(0x62B08);
		}

		// static const ::System::Object BHCEECFPOHC; // 0x0
		// static const ::System::Object JGBMIMOJNMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJMJCLMPCMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJMJCLMPCMF*))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJMJCLMPCMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJMJCLMPCMF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJMJCLMPCMF*>*(*)())((::PBYTE)hIl2Cpp + JJMJCLMPCMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJMJCLMPCMF* Clone()
		{
			return ((::JJMJCLMPCMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* APOMCFOMDBG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_APOMCFOMDBG_OFFSET))(this);
		}

		::System::UInt32 HDMJBBCHHIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_HDMJBBCHHIH_OFFSET))(this);
		}

		::System::Void FPMILFKJFGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_FPMILFKJFGP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJMJCLMPCMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJMJCLMPCMF*))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJMJCLMPCMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJMJCLMPCMF*))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJMJCLMPCMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
