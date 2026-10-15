#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFDDPJOEDCF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFDDPJOEDCF_BJEBCDMCGHC_OFFSET UNITYSDK_OFFSET(0x1EA16D10)
#define MFDDPJOEDCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA17080)
#define MFDDPJOEDCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA172E0)
#define MFDDPJOEDCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA16C90)
#define MFDDPJOEDCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA16C50)
#define MFDDPJOEDCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA16C40)
#define MFDDPJOEDCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA16E00)
#define MFDDPJOEDCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA16D20)
#define MFDDPJOEDCF_FJDCJEEJCPC_OFFSET UNITYSDK_OFFSET(0x1EA16D00)
#define MFDDPJOEDCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA16EE0)
#define MFDDPJOEDCF_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1EA16CF0)
#define MFDDPJOEDCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA16C00)
#define MFDDPJOEDCF_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1EA16CE0)
#define MFDDPJOEDCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA17160)
#define MFDDPJOEDCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA17120)
#define MFDDPJOEDCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA16C30)
#define MFDDPJOEDCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA16F10)
#define MFDDPJOEDCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA16F70)

	class MFDDPJOEDCF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BOFPCLDECCH; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 HJEGLCJEOKC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MFDDPJOEDCF")->GetStaticField(0x4C130);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object HCBMCNENNJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFDDPJOEDCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFDDPJOEDCF*))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFDDPJOEDCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MFDDPJOEDCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFDDPJOEDCF* Clone()
		{
			return ((::MFDDPJOEDCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean FJDCJEEJCPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_FJDCJEEJCPC_OFFSET))(this);
		}

		::System::Void BJEBCDMCGHC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_BJEBCDMCGHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFDDPJOEDCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFDDPJOEDCF*))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFDDPJOEDCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFDDPJOEDCF*))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFDDPJOEDCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
