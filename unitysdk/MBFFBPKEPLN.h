#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBFFBPKEPLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBFFBPKEPLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E4720)
#define MBFFBPKEPLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4940)
#define MBFFBPKEPLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E4370)
#define MBFFBPKEPLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E4340)
#define MBFFBPKEPLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4330)
#define MBFFBPKEPLN_DOINAIBOGOI_OFFSET UNITYSDK_OFFSET(0x1E9E43B0)
#define MBFFBPKEPLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E44A0)
#define MBFFBPKEPLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E43D0)
#define MBFFBPKEPLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E4610)
#define MBFFBPKEPLN_IELCCNPGBLI_OFFSET UNITYSDK_OFFSET(0x1E9E43C0)
#define MBFFBPKEPLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9E42F0)
#define MBFFBPKEPLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E47E0)
#define MBFFBPKEPLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E47B0)
#define MBFFBPKEPLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4320)
#define MBFFBPKEPLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E4640)
#define MBFFBPKEPLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E46A0)

	class MBFFBPKEPLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FJLILEOEEIB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MBFFBPKEPLN")->GetStaticField(0x44410);
		}

		// static const ::System::Object JBLABOEPILK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBFFBPKEPLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBFFBPKEPLN*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MBFFBPKEPLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBFFBPKEPLN* Clone()
		{
			return ((::MBFFBPKEPLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CLONE_OFFSET))(this);
		}

		::System::UInt32 DOINAIBOGOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_DOINAIBOGOI_OFFSET))(this);
		}

		::System::Void IELCCNPGBLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_IELCCNPGBLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBFFBPKEPLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBFFBPKEPLN*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBFFBPKEPLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBFFBPKEPLN*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
