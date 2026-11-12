#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEKLHPINHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIEKLHPINHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F88DBB0)
#define HIEKLHPINHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F88DE80)
#define HIEKLHPINHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F88D800)
#define HIEKLHPINHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F88D7D0)
#define HIEKLHPINHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F88D7C0)
#define HIEKLHPINHL_EMLGPKHMCAA_OFFSET UNITYSDK_OFFSET(0x1F88D870)
#define HIEKLHPINHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F88D970)
#define HIEKLHPINHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F88D890)
#define HIEKLHPINHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F88DA40)
#define HIEKLHPINHL_HJLIFHJKBFH_OFFSET UNITYSDK_OFFSET(0x1F88D860)
#define HIEKLHPINHL_IEEAMJKIHMF_OFFSET UNITYSDK_OFFSET(0x1F88D880)
#define HIEKLHPINHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F88D780)
#define HIEKLHPINHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F88DD00)
#define HIEKLHPINHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F88DCC0)
#define HIEKLHPINHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F88D7B0)
#define HIEKLHPINHL_PGCBPNFMBGH_OFFSET UNITYSDK_OFFSET(0x1F88D850)
#define HIEKLHPINHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F88DA70)
#define HIEKLHPINHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F88DAD0)

inline static constexpr unsigned int HIEKLHPINHL_TypeDefinitionIndex = 34863;

	class HIEKLHPINHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IHOPNNAKAAE; // 0x18
		::System::UInt32 MLDDHLIMMFA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HIEKLHPINHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIEKLHPINHL*>**)UnitySDK::FromName("", "HIEKLHPINHL")->GetStaticField(0x13F50);
		}

		// static const ::System::Object KPPNELBHLLN; // 0x0
		// static const ::System::Object IALHPDFHIEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIEKLHPINHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEKLHPINHL*))((::PBYTE)hIl2Cpp + HIEKLHPINHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEKLHPINHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIEKLHPINHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIEKLHPINHL*>*(*)())((::PBYTE)hIl2Cpp + HIEKLHPINHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIEKLHPINHL* Clone()
		{
			return ((::HIEKLHPINHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 PGCBPNFMBGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL_PGCBPNFMBGH_OFFSET))(this);
		}

		::System::Void HJLIFHJKBFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIEKLHPINHL_HJLIFHJKBFH_OFFSET))(this, a1);
		}

		::System::UInt32 EMLGPKHMCAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL_EMLGPKHMCAA_OFFSET))(this);
		}

		::System::Void IEEAMJKIHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIEKLHPINHL_IEEAMJKIHMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIEKLHPINHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIEKLHPINHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEKLHPINHL*))((::PBYTE)hIl2Cpp + HIEKLHPINHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIEKLHPINHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKLHPINHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIEKLHPINHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEKLHPINHL*))((::PBYTE)hIl2Cpp + HIEKLHPINHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIEKLHPINHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
