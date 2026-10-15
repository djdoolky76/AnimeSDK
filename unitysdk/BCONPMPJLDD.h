#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCONPMPJLDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCONPMPJLDD_AMEFBODJIHJ_OFFSET UNITYSDK_OFFSET(0x1E911AD0)
#define BCONPMPJLDD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E911E40)
#define BCONPMPJLDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E912060)
#define BCONPMPJLDD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E911A90)
#define BCONPMPJLDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E911A60)
#define BCONPMPJLDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E911A50)
#define BCONPMPJLDD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E911BC0)
#define BCONPMPJLDD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E911AF0)
#define BCONPMPJLDD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E911D30)
#define BCONPMPJLDD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E911A10)
#define BCONPMPJLDD_KMANAJJOLLP_OFFSET UNITYSDK_OFFSET(0x1E911AE0)
#define BCONPMPJLDD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E911F00)
#define BCONPMPJLDD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E911ED0)
#define BCONPMPJLDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E911A40)
#define BCONPMPJLDD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E911D60)
#define BCONPMPJLDD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E911DC0)

	class BCONPMPJLDD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AAGAKAIKGCM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BCONPMPJLDD")->GetStaticField(0x3CB70);
		}

		// static const ::System::Object MGPGDLIJKLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONPMPJLDD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCONPMPJLDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCONPMPJLDD*))((::PBYTE)hIl2Cpp + BCONPMPJLDD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCONPMPJLDD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BCONPMPJLDD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONPMPJLDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCONPMPJLDD* Clone()
		{
			return ((::BCONPMPJLDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONPMPJLDD_CLONE_OFFSET))(this);
		}

		::System::UInt32 AMEFBODJIHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONPMPJLDD_AMEFBODJIHJ_OFFSET))(this);
		}

		::System::Void KMANAJJOLLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCONPMPJLDD_KMANAJJOLLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCONPMPJLDD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCONPMPJLDD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCONPMPJLDD*))((::PBYTE)hIl2Cpp + BCONPMPJLDD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONPMPJLDD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONPMPJLDD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCONPMPJLDD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONPMPJLDD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCONPMPJLDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCONPMPJLDD*))((::PBYTE)hIl2Cpp + BCONPMPJLDD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCONPMPJLDD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
