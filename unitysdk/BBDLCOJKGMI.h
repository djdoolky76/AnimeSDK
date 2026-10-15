#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBDLCOJKGMI;
class GLLDHGHJLOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBDLCOJKGMI_BNKOEHNBHOO_OFFSET UNITYSDK_OFFSET(0x1E7C0160)
#define BBDLCOJKGMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C06F0)
#define BBDLCOJKGMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C0A60)
#define BBDLCOJKGMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C00B0)
#define BBDLCOJKGMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C0020)
#define BBDLCOJKGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C0010)
#define BBDLCOJKGMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C02E0)
#define BBDLCOJKGMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C0170)
#define BBDLCOJKGMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C05B0)
#define BBDLCOJKGMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7BFFD0)
#define BBDLCOJKGMI_JLEIDCIKCAK_OFFSET UNITYSDK_OFFSET(0x1E7C0150)
#define BBDLCOJKGMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C0850)
#define BBDLCOJKGMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C0750)
#define BBDLCOJKGMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C0000)
#define BBDLCOJKGMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C0600)
#define BBDLCOJKGMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C0660)

inline static constexpr unsigned int BBDLCOJKGMI_TypeDefinitionIndex = 27561;

	class BBDLCOJKGMI : public ::System::Object
	{
	public:
		::GLLDHGHJLOA* MPAFCPOPPFP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BBDLCOJKGMI")->GetStaticField(0x47100);
		}

		// static const ::System::Object ONBAMMAMODE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBDLCOJKGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDLCOJKGMI*))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBDLCOJKGMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BBDLCOJKGMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBDLCOJKGMI* Clone()
		{
			return ((::BBDLCOJKGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_CLONE_OFFSET))(this);
		}

		::GLLDHGHJLOA* JLEIDCIKCAK()
		{
			return ((::GLLDHGHJLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_JLEIDCIKCAK_OFFSET))(this);
		}

		::System::Void BNKOEHNBHOO(::GLLDHGHJLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLDHGHJLOA*))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_BNKOEHNBHOO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBDLCOJKGMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBDLCOJKGMI*))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBDLCOJKGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDLCOJKGMI*))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBDLCOJKGMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
