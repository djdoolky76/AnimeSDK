#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPMHNPHIHHF;
class KIBIPJKMLBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPMHNPHIHHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E04EA30)
#define BPMHNPHIHHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04ED10)
#define BPMHNPHIHHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E04E410)
#define BPMHNPHIHHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E04E3A0)
#define BPMHNPHIHHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04E390)
#define BPMHNPHIHHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E04E620)
#define BPMHNPHIHHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E04E4B0)
#define BPMHNPHIHHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E04E8F0)
#define BPMHNPHIHHF_HPOGICMDJAM_OFFSET UNITYSDK_OFFSET(0x1E04E4A0)
#define BPMHNPHIHHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E04E350)
#define BPMHNPHIHHF_LEAGPCLJHPB_OFFSET UNITYSDK_OFFSET(0x1E04E490)
#define BPMHNPHIHHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E04EB40)
#define BPMHNPHIHHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E04EA90)
#define BPMHNPHIHHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E04E380)
#define BPMHNPHIHHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E04E940)
#define BPMHNPHIHHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E04E9A0)

inline static constexpr unsigned int BPMHNPHIHHF_TypeDefinitionIndex = 34893;

	class BPMHNPHIHHF : public ::System::Object
	{
	public:
		::KIBIPJKMLBM* KONAGLKOCML; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPMHNPHIHHF")->GetStaticField(0x55810);
		}

		// static const ::System::Object AKILEGOIBPO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPMHNPHIHHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPMHNPHIHHF*))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPMHNPHIHHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPMHNPHIHHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPMHNPHIHHF* Clone()
		{
			return ((::BPMHNPHIHHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_CLONE_OFFSET))(this);
		}

		::KIBIPJKMLBM* LEAGPCLJHPB()
		{
			return ((::KIBIPJKMLBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_LEAGPCLJHPB_OFFSET))(this);
		}

		::System::Void HPOGICMDJAM(::KIBIPJKMLBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIBIPJKMLBM*))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_HPOGICMDJAM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPMHNPHIHHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPMHNPHIHHF*))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPMHNPHIHHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPMHNPHIHHF*))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPMHNPHIHHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
