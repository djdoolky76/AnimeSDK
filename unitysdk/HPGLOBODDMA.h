#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPGLOBODDMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPGLOBODDMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F6240)
#define HPGLOBODDMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F6460)
#define HPGLOBODDMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F5E90)
#define HPGLOBODDMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F5E60)
#define HPGLOBODDMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F5E50)
#define HPGLOBODDMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F5FC0)
#define HPGLOBODDMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F5EF0)
#define HPGLOBODDMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F6130)
#define HPGLOBODDMA_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1E5F5EE0)
#define HPGLOBODDMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F5E10)
#define HPGLOBODDMA_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1E5F5ED0)
#define HPGLOBODDMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F6300)
#define HPGLOBODDMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F62D0)
#define HPGLOBODDMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F5E40)
#define HPGLOBODDMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F6160)
#define HPGLOBODDMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F61C0)

	class HPGLOBODDMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HPGLOBODDMA")->GetStaticField(0x50950);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLOBODDMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPGLOBODDMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPGLOBODDMA*))((::PBYTE)hIl2Cpp + HPGLOBODDMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGLOBODDMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HPGLOBODDMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLOBODDMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPGLOBODDMA* Clone()
		{
			return ((::HPGLOBODDMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLOBODDMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLOBODDMA_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPGLOBODDMA_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPGLOBODDMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPGLOBODDMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPGLOBODDMA*))((::PBYTE)hIl2Cpp + HPGLOBODDMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLOBODDMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLOBODDMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPGLOBODDMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLOBODDMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPGLOBODDMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPGLOBODDMA*))((::PBYTE)hIl2Cpp + HPGLOBODDMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPGLOBODDMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
