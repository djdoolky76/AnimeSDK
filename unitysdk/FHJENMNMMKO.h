#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHJENMNMMKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHJENMNMMKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E38D590)
#define FHJENMNMMKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38D630)
#define FHJENMNMMKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38D280)
#define FHJENMNMMKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38D250)
#define FHJENMNMMKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38D240)
#define FHJENMNMMKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38D390)
#define FHJENMNMMKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38D2C0)
#define FHJENMNMMKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E38D4F0)
#define FHJENMNMMKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38D200)
#define FHJENMNMMKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E38D5E0)
#define FHJENMNMMKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E38D5B0)
#define FHJENMNMMKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38D230)
#define FHJENMNMMKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E38D520)
#define FHJENMNMMKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E38D580)

	class FHJENMNMMKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHJENMNMMKO")->GetStaticField(0x5F680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJENMNMMKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHJENMNMMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHJENMNMMKO*))((::PBYTE)hIl2Cpp + FHJENMNMMKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHJENMNMMKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHJENMNMMKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJENMNMMKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHJENMNMMKO* Clone()
		{
			return ((::FHJENMNMMKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJENMNMMKO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHJENMNMMKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHJENMNMMKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHJENMNMMKO*))((::PBYTE)hIl2Cpp + FHJENMNMMKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJENMNMMKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJENMNMMKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHJENMNMMKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJENMNMMKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHJENMNMMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHJENMNMMKO*))((::PBYTE)hIl2Cpp + FHJENMNMMKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHJENMNMMKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
