#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLPJAFHHGDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLPJAFHHGDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E785710)
#define JLPJAFHHGDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E785930)
#define JLPJAFHHGDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E785360)
#define JLPJAFHHGDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E785330)
#define JLPJAFHHGDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E785320)
#define JLPJAFHHGDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E785490)
#define JLPJAFHHGDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7853C0)
#define JLPJAFHHGDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E785600)
#define JLPJAFHHGDM_HBLPGFEOHGP_OFFSET UNITYSDK_OFFSET(0x1E7853B0)
#define JLPJAFHHGDM_IKGGGGKMGLN_OFFSET UNITYSDK_OFFSET(0x1E7853A0)
#define JLPJAFHHGDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7852E0)
#define JLPJAFHHGDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7857D0)
#define JLPJAFHHGDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7857A0)
#define JLPJAFHHGDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E785310)
#define JLPJAFHHGDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E785630)
#define JLPJAFHHGDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E785690)

inline static constexpr unsigned int JLPJAFHHGDM_TypeDefinitionIndex = 34670;

	class JLPJAFHHGDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HAHOPPLLGCE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLPJAFHHGDM")->GetStaticField(0x6BD10);
		}

		// static const ::System::Object MJDEFIKLIIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLPJAFHHGDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLPJAFHHGDM*))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLPJAFHHGDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLPJAFHHGDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLPJAFHHGDM* Clone()
		{
			return ((::JLPJAFHHGDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKGGGGKMGLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_IKGGGGKMGLN_OFFSET))(this);
		}

		::System::Void HBLPGFEOHGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_HBLPGFEOHGP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLPJAFHHGDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLPJAFHHGDM*))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLPJAFHHGDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLPJAFHHGDM*))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLPJAFHHGDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
