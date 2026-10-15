#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDNBPINBPKB;
class PCBNCBNOAAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDNBPINBPKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D0C10)
#define LDNBPINBPKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D0F40)
#define LDNBPINBPKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D0640)
#define LDNBPINBPKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D05B0)
#define LDNBPINBPKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D05A0)
#define LDNBPINBPKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D0900)
#define LDNBPINBPKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D0750)
#define LDNBPINBPKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D0A80)
#define LDNBPINBPKB_HBHDCFJDMKO_OFFSET UNITYSDK_OFFSET(0x1E8D0730)
#define LDNBPINBPKB_HIKKDELOFGN_OFFSET UNITYSDK_OFFSET(0x1E8D0710)
#define LDNBPINBPKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D0530)
#define LDNBPINBPKB_LBEILIKMOOF_OFFSET UNITYSDK_OFFSET(0x1E8D0720)
#define LDNBPINBPKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D0D80)
#define LDNBPINBPKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D0CE0)
#define LDNBPINBPKB_OIHBCJCCKCD_OFFSET UNITYSDK_OFFSET(0x1E8D0740)
#define LDNBPINBPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D0590)
#define LDNBPINBPKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D0AD0)
#define LDNBPINBPKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D0B30)

inline static constexpr unsigned int LDNBPINBPKB_TypeDefinitionIndex = 28562;

	class LDNBPINBPKB : public ::System::Object
	{
	public:
		::PCBNCBNOAAE* CIHFNBINNFJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 PFCFDMBEDKE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LDNBPINBPKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDNBPINBPKB*>**)UnitySDK::FromName("", "LDNBPINBPKB")->GetStaticField(0x2EB50);
		}

		// static const ::System::Object KIENEHHMCAP; // 0x0
		// static const ::System::Object NAAAENIEPHO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDNBPINBPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNBPINBPKB*))((::PBYTE)hIl2Cpp + LDNBPINBPKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNBPINBPKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDNBPINBPKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDNBPINBPKB*>*(*)())((::PBYTE)hIl2Cpp + LDNBPINBPKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDNBPINBPKB* Clone()
		{
			return ((::LDNBPINBPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB_CLONE_OFFSET))(this);
		}

		::PCBNCBNOAAE* HIKKDELOFGN()
		{
			return ((::PCBNCBNOAAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB_HIKKDELOFGN_OFFSET))(this);
		}

		::System::Void LBEILIKMOOF(::PCBNCBNOAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCBNCBNOAAE*))((::PBYTE)hIl2Cpp + LDNBPINBPKB_LBEILIKMOOF_OFFSET))(this, a1);
		}

		::System::UInt32 HBHDCFJDMKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB_HBHDCFJDMKO_OFFSET))(this);
		}

		::System::Void OIHBCJCCKCD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDNBPINBPKB_OIHBCJCCKCD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDNBPINBPKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDNBPINBPKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDNBPINBPKB*))((::PBYTE)hIl2Cpp + LDNBPINBPKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDNBPINBPKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDNBPINBPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNBPINBPKB*))((::PBYTE)hIl2Cpp + LDNBPINBPKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDNBPINBPKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
