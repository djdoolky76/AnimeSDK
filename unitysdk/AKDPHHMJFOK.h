#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKDPHHMJFOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKDPHHMJFOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C9240)
#define AKDPHHMJFOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C9460)
#define AKDPHHMJFOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C8E90)
#define AKDPHHMJFOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C8E60)
#define AKDPHHMJFOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C8E50)
#define AKDPHHMJFOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C8FC0)
#define AKDPHHMJFOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C8EF0)
#define AKDPHHMJFOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C9130)
#define AKDPHHMJFOK_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1E3C8EE0)
#define AKDPHHMJFOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C8E10)
#define AKDPHHMJFOK_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1E3C8ED0)
#define AKDPHHMJFOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C9300)
#define AKDPHHMJFOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C92D0)
#define AKDPHHMJFOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C8E40)
#define AKDPHHMJFOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C9160)
#define AKDPHHMJFOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C91C0)

	class AKDPHHMJFOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AKDPHHMJFOK")->GetStaticField(0x36620);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKDPHHMJFOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDPHHMJFOK*))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKDPHHMJFOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AKDPHHMJFOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKDPHHMJFOK* Clone()
		{
			return ((::AKDPHHMJFOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKDPHHMJFOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKDPHHMJFOK*))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKDPHHMJFOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDPHHMJFOK*))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKDPHHMJFOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
