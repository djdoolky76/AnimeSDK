#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEJANPDMOIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KEJANPDMOIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E80C2E0)
#define KEJANPDMOIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80C500)
#define KEJANPDMOIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E80BF30)
#define KEJANPDMOIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E80BF00)
#define KEJANPDMOIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80BEF0)
#define KEJANPDMOIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E80C060)
#define KEJANPDMOIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E80BF90)
#define KEJANPDMOIL_GBDHEJPLLHG_OFFSET UNITYSDK_OFFSET(0x1E80BF70)
#define KEJANPDMOIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E80C1D0)
#define KEJANPDMOIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E80BEB0)
#define KEJANPDMOIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E80C3A0)
#define KEJANPDMOIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E80C370)
#define KEJANPDMOIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E80BEE0)
#define KEJANPDMOIL_PFFFCAHMPOK_OFFSET UNITYSDK_OFFSET(0x1E80BF80)
#define KEJANPDMOIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E80C200)
#define KEJANPDMOIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E80C260)

	class KEJANPDMOIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFCPCAFJHNB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KEJANPDMOIL")->GetStaticField(0x129C0);
		}

		// static const ::System::Object LFMAGKAHAOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJANPDMOIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KEJANPDMOIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEJANPDMOIL*))((::PBYTE)hIl2Cpp + KEJANPDMOIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEJANPDMOIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KEJANPDMOIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJANPDMOIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KEJANPDMOIL* Clone()
		{
			return ((::KEJANPDMOIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJANPDMOIL_CLONE_OFFSET))(this);
		}

		::System::UInt32 GBDHEJPLLHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJANPDMOIL_GBDHEJPLLHG_OFFSET))(this);
		}

		::System::Void PFFFCAHMPOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEJANPDMOIL_PFFFCAHMPOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KEJANPDMOIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KEJANPDMOIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KEJANPDMOIL*))((::PBYTE)hIl2Cpp + KEJANPDMOIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJANPDMOIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJANPDMOIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KEJANPDMOIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJANPDMOIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KEJANPDMOIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEJANPDMOIL*))((::PBYTE)hIl2Cpp + KEJANPDMOIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KEJANPDMOIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
