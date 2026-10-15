#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOBHOCKGHBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOBHOCKGHBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1FD120)
#define DOBHOCKGHBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FD340)
#define DOBHOCKGHBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1FCD10)
#define DOBHOCKGHBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1FCCE0)
#define DOBHOCKGHBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FCCD0)
#define DOBHOCKGHBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1FCEA0)
#define DOBHOCKGHBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1FCDA0)
#define DOBHOCKGHBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1FD010)
#define DOBHOCKGHBI_IALAPABBAIC_OFFSET UNITYSDK_OFFSET(0x1E1FCD90)
#define DOBHOCKGHBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1FCC60)
#define DOBHOCKGHBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1FD1E0)
#define DOBHOCKGHBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1FD1B0)
#define DOBHOCKGHBI_NJFLIJNMOLG_OFFSET UNITYSDK_OFFSET(0x1E1FCD80)
#define DOBHOCKGHBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1FCCC0)
#define DOBHOCKGHBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1FD040)
#define DOBHOCKGHBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1FD0A0)

	class DOBHOCKGHBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ALDPEDNNGCL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DOBHOCKGHBI")->GetStaticField(0x412D0);
		}

		// static const ::System::Object NGELLHBEJHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOBHOCKGHBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOBHOCKGHBI*))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOBHOCKGHBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DOBHOCKGHBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOBHOCKGHBI* Clone()
		{
			return ((::DOBHOCKGHBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 NJFLIJNMOLG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_NJFLIJNMOLG_OFFSET))(this);
		}

		::System::Void IALAPABBAIC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_IALAPABBAIC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOBHOCKGHBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOBHOCKGHBI*))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOBHOCKGHBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOBHOCKGHBI*))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOBHOCKGHBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
