#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKPHAFPGDLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKPHAFPGDLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1DB470)
#define DKPHAFPGDLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB740)
#define DKPHAFPGDLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1DB070)
#define DKPHAFPGDLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1DB040)
#define DKPHAFPGDLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB030)
#define DKPHAFPGDLO_EGGOGPPAFPH_OFFSET UNITYSDK_OFFSET(0x1E1DB0E0)
#define DKPHAFPGDLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1DB230)
#define DKPHAFPGDLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1DB120)
#define DKPHAFPGDLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1DB300)
#define DKPHAFPGDLO_HJNBOAKGFLG_OFFSET UNITYSDK_OFFSET(0x1E1DB0F0)
#define DKPHAFPGDLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1DAFC0)
#define DKPHAFPGDLO_KPIJKLOCLPF_OFFSET UNITYSDK_OFFSET(0x1E1DB110)
#define DKPHAFPGDLO_MBHGPMLBHLA_OFFSET UNITYSDK_OFFSET(0x1E1DB100)
#define DKPHAFPGDLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1DB5C0)
#define DKPHAFPGDLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1DB580)
#define DKPHAFPGDLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB020)
#define DKPHAFPGDLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1DB330)
#define DKPHAFPGDLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1DB390)

	class DKPHAFPGDLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HCJNBDICPEC; // 0x18
		::System::UInt32 IOLMENCNJLF; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DKPHAFPGDLO")->GetStaticField(0x3B550);
		}

		// static const ::System::Object KLHBIKCMBGP; // 0x0
		// static const ::System::Object JKGGLHKBIJA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKPHAFPGDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKPHAFPGDLO*))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKPHAFPGDLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DKPHAFPGDLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKPHAFPGDLO* Clone()
		{
			return ((::DKPHAFPGDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGGOGPPAFPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_EGGOGPPAFPH_OFFSET))(this);
		}

		::System::Void HJNBOAKGFLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_HJNBOAKGFLG_OFFSET))(this, a1);
		}

		::System::UInt32 MBHGPMLBHLA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_MBHGPMLBHLA_OFFSET))(this);
		}

		::System::Void KPIJKLOCLPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_KPIJKLOCLPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKPHAFPGDLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKPHAFPGDLO*))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKPHAFPGDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKPHAFPGDLO*))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKPHAFPGDLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
