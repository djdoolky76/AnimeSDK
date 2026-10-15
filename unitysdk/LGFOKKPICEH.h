#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGFOKKPICEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGFOKKPICEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E951C90)
#define LGFOKKPICEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E951F60)
#define LGFOKKPICEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9518E0)
#define LGFOKKPICEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9518B0)
#define LGFOKKPICEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9518A0)
#define LGFOKKPICEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E951A50)
#define LGFOKKPICEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E951970)
#define LGFOKKPICEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E951B20)
#define LGFOKKPICEH_ILBJPBNBHNO_OFFSET UNITYSDK_OFFSET(0x1E951960)
#define LGFOKKPICEH_JIKKBBFIAIB_OFFSET UNITYSDK_OFFSET(0x1E951930)
#define LGFOKKPICEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E951860)
#define LGFOKKPICEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E951DE0)
#define LGFOKKPICEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E951DA0)
#define LGFOKKPICEH_OJLEEFOPKPO_OFFSET UNITYSDK_OFFSET(0x1E951950)
#define LGFOKKPICEH_OOKBOGGJJPI_OFFSET UNITYSDK_OFFSET(0x1E951940)
#define LGFOKKPICEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E951890)
#define LGFOKKPICEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E951B50)
#define LGFOKKPICEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E951BB0)

	class LGFOKKPICEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AILBEGMLBID; // 0x18
		::System::UInt32 FGBHABOLIHO; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LGFOKKPICEH")->GetStaticField(0x1BF80);
		}

		// static const ::System::Object KMDPPOKDFBG; // 0x0
		// static const ::System::Object IEDEGHNPGIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGFOKKPICEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGFOKKPICEH*))((::PBYTE)hIl2Cpp + LGFOKKPICEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFOKKPICEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LGFOKKPICEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGFOKKPICEH* Clone()
		{
			return ((::LGFOKKPICEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIKKBBFIAIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH_JIKKBBFIAIB_OFFSET))(this);
		}

		::System::Void OOKBOGGJJPI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFOKKPICEH_OOKBOGGJJPI_OFFSET))(this, a1);
		}

		::System::UInt32 OJLEEFOPKPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH_OJLEEFOPKPO_OFFSET))(this);
		}

		::System::Void ILBJPBNBHNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFOKKPICEH_ILBJPBNBHNO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGFOKKPICEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGFOKKPICEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGFOKKPICEH*))((::PBYTE)hIl2Cpp + LGFOKKPICEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGFOKKPICEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGFOKKPICEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGFOKKPICEH*))((::PBYTE)hIl2Cpp + LGFOKKPICEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGFOKKPICEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
