#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLKBKPCLHEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLKBKPCLHEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E88FE60)
#define KLKBKPCLHEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8901E0)
#define KLKBKPCLHEE_CKOOKJLIKOO_OFFSET UNITYSDK_OFFSET(0x1E88FAC0)
#define KLKBKPCLHEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E88FA40)
#define KLKBKPCLHEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E88FA00)
#define KLKBKPCLHEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88F9F0)
#define KLKBKPCLHEE_DOKCLOPEKLK_OFFSET UNITYSDK_OFFSET(0x1E88FAE0)
#define KLKBKPCLHEE_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E88FA90)
#define KLKBKPCLHEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E88FBD0)
#define KLKBKPCLHEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E88FAF0)
#define KLKBKPCLHEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E88FCA0)
#define KLKBKPCLHEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E88F9B0)
#define KLKBKPCLHEE_LNACAEMACAD_OFFSET UNITYSDK_OFFSET(0x1E88FAD0)
#define KLKBKPCLHEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E890040)
#define KLKBKPCLHEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E88FFF0)
#define KLKBKPCLHEE_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E88FAA0)
#define KLKBKPCLHEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E88F9E0)
#define KLKBKPCLHEE_PFHBBIGAGEE_OFFSET UNITYSDK_OFFSET(0x1E88FAB0)
#define KLKBKPCLHEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E88FCD0)
#define KLKBKPCLHEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E88FD30)

	class KLKBKPCLHEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DJIJMBMGAPB; // 0x18
		::System::UInt32 KNKNLKGEGFF; // 0x1C
		::System::UInt32 FLBKCMIIFFP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLKBKPCLHEE")->GetStaticField(0x21650);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object LGPFCKMAEGA; // 0x0
		// static const ::System::Object HDEAOOJANDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLKBKPCLHEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLKBKPCLHEE*))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLKBKPCLHEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLKBKPCLHEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLKBKPCLHEE* Clone()
		{
			return ((::KLKBKPCLHEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 PFHBBIGAGEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_PFHBBIGAGEE_OFFSET))(this);
		}

		::System::Void CKOOKJLIKOO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_CKOOKJLIKOO_OFFSET))(this, a1);
		}

		::System::UInt32 LNACAEMACAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_LNACAEMACAD_OFFSET))(this);
		}

		::System::Void DOKCLOPEKLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_DOKCLOPEKLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLKBKPCLHEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLKBKPCLHEE*))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLKBKPCLHEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLKBKPCLHEE*))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLKBKPCLHEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
