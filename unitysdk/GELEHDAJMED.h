#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GELEHDAJMED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GELEHDAJMED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45DFE0)
#define GELEHDAJMED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45E200)
#define GELEHDAJMED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45DBD0)
#define GELEHDAJMED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45DBA0)
#define GELEHDAJMED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45DB90)
#define GELEHDAJMED_EFNDGKJCBAI_OFFSET UNITYSDK_OFFSET(0x1E45DC50)
#define GELEHDAJMED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45DD60)
#define GELEHDAJMED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45DC60)
#define GELEHDAJMED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45DED0)
#define GELEHDAJMED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E45DB20)
#define GELEHDAJMED_LHLBIEMKJGL_OFFSET UNITYSDK_OFFSET(0x1E45DC40)
#define GELEHDAJMED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45E0A0)
#define GELEHDAJMED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45E070)
#define GELEHDAJMED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45DB80)
#define GELEHDAJMED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45DF00)
#define GELEHDAJMED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45DF60)

	class GELEHDAJMED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PHDGEOFBHGM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GELEHDAJMED")->GetStaticField(0x12AF0);
		}

		// static const ::System::Object EGEDNCDAKPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEHDAJMED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GELEHDAJMED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GELEHDAJMED*))((::PBYTE)hIl2Cpp + GELEHDAJMED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GELEHDAJMED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GELEHDAJMED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEHDAJMED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GELEHDAJMED* Clone()
		{
			return ((::GELEHDAJMED*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEHDAJMED_CLONE_OFFSET))(this);
		}

		::System::UInt32 LHLBIEMKJGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEHDAJMED_LHLBIEMKJGL_OFFSET))(this);
		}

		::System::Void EFNDGKJCBAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GELEHDAJMED_EFNDGKJCBAI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GELEHDAJMED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GELEHDAJMED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GELEHDAJMED*))((::PBYTE)hIl2Cpp + GELEHDAJMED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEHDAJMED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEHDAJMED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GELEHDAJMED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEHDAJMED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GELEHDAJMED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GELEHDAJMED*))((::PBYTE)hIl2Cpp + GELEHDAJMED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GELEHDAJMED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
