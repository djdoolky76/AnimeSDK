#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHHBLFHDFEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHHBLFHDFEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C6600)
#define CHHBLFHDFEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C68D0)
#define CHHBLFHDFEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C6200)
#define CHHBLFHDFEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C61D0)
#define CHHBLFHDFEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C61C0)
#define CHHBLFHDFEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C63C0)
#define CHHBLFHDFEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C62B0)
#define CHHBLFHDFEK_FBDKEAIFHIL_OFFSET UNITYSDK_OFFSET(0x1E0C6290)
#define CHHBLFHDFEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C6490)
#define CHHBLFHDFEK_ICIMDGPPLGN_OFFSET UNITYSDK_OFFSET(0x1E0C62A0)
#define CHHBLFHDFEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C6150)
#define CHHBLFHDFEK_JKMAIOJAHNJ_OFFSET UNITYSDK_OFFSET(0x1E0C6280)
#define CHHBLFHDFEK_LELIAJPKLON_OFFSET UNITYSDK_OFFSET(0x1E0C6270)
#define CHHBLFHDFEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C6750)
#define CHHBLFHDFEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C6710)
#define CHHBLFHDFEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C61B0)
#define CHHBLFHDFEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C64C0)
#define CHHBLFHDFEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C6520)

	class CHHBLFHDFEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ANAADAMGEKG; // 0x18
		::System::UInt32 PNLOLDMPCHI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CHHBLFHDFEK")->GetStaticField(0x16660);
		}

		// static const ::System::Object GOIPBBNCNOF; // 0x0
		// static const ::System::Object PMKNKLCBDBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHHBLFHDFEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHHBLFHDFEK*))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHHBLFHDFEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CHHBLFHDFEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHHBLFHDFEK* Clone()
		{
			return ((::CHHBLFHDFEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 LELIAJPKLON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_LELIAJPKLON_OFFSET))(this);
		}

		::System::Void JKMAIOJAHNJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_JKMAIOJAHNJ_OFFSET))(this, a1);
		}

		::System::UInt32 FBDKEAIFHIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_FBDKEAIFHIL_OFFSET))(this);
		}

		::System::Void ICIMDGPPLGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_ICIMDGPPLGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHHBLFHDFEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHHBLFHDFEK*))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHHBLFHDFEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHHBLFHDFEK*))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHHBLFHDFEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
