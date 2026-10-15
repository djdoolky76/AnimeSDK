#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILIHCBAFEJH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILIHCBAFEJH_AJGKKDBOLKG_OFFSET UNITYSDK_OFFSET(0x1E6AF1A0)
#define ILIHCBAFEJH_BEJINBHMFFH_OFFSET UNITYSDK_OFFSET(0x1E6AF190)
#define ILIHCBAFEJH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6AF500)
#define ILIHCBAFEJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AF720)
#define ILIHCBAFEJH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6AF150)
#define ILIHCBAFEJH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6AF120)
#define ILIHCBAFEJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AF110)
#define ILIHCBAFEJH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6AF280)
#define ILIHCBAFEJH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6AF1B0)
#define ILIHCBAFEJH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6AF3F0)
#define ILIHCBAFEJH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6AF0D0)
#define ILIHCBAFEJH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AF5C0)
#define ILIHCBAFEJH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6AF590)
#define ILIHCBAFEJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6AF100)
#define ILIHCBAFEJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6AF420)
#define ILIHCBAFEJH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6AF480)

	class ILIHCBAFEJH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AOAJIJMPBBA; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ILIHCBAFEJH")->GetStaticField(0x56590);
		}

		// static const ::System::Object IHNNNFJAEJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILIHCBAFEJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILIHCBAFEJH*))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILIHCBAFEJH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ILIHCBAFEJH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILIHCBAFEJH* Clone()
		{
			return ((::ILIHCBAFEJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_CLONE_OFFSET))(this);
		}

		::System::UInt32 BEJINBHMFFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_BEJINBHMFFH_OFFSET))(this);
		}

		::System::Void AJGKKDBOLKG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_AJGKKDBOLKG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILIHCBAFEJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILIHCBAFEJH*))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILIHCBAFEJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILIHCBAFEJH*))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILIHCBAFEJH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
