#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPPCNOGIMFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPPCNOGIMFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7DBCD0)
#define JPPCNOGIMFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DBEF0)
#define JPPCNOGIMFD_CLNOBIEAMJC_OFFSET UNITYSDK_OFFSET(0x1E7DB970)
#define JPPCNOGIMFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7DB920)
#define JPPCNOGIMFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7DB8F0)
#define JPPCNOGIMFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DB8E0)
#define JPPCNOGIMFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7DBA50)
#define JPPCNOGIMFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7DB980)
#define JPPCNOGIMFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7DBBC0)
#define JPPCNOGIMFD_JDEHJDPJCMG_OFFSET UNITYSDK_OFFSET(0x1E7DB960)
#define JPPCNOGIMFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7DB8A0)
#define JPPCNOGIMFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7DBD90)
#define JPPCNOGIMFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7DBD60)
#define JPPCNOGIMFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7DB8D0)
#define JPPCNOGIMFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7DBBF0)
#define JPPCNOGIMFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7DBC50)

	class JPPCNOGIMFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OHKLNHFBGHA; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPPCNOGIMFD")->GetStaticField(0xCC70);
		}

		// static const ::System::Object OMBPPNBKELN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPPCNOGIMFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPPCNOGIMFD*))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPPCNOGIMFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPPCNOGIMFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPPCNOGIMFD* Clone()
		{
			return ((::JPPCNOGIMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_CLONE_OFFSET))(this);
		}

		::System::UInt32 JDEHJDPJCMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_JDEHJDPJCMG_OFFSET))(this);
		}

		::System::Void CLNOBIEAMJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_CLNOBIEAMJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPPCNOGIMFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPPCNOGIMFD*))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPPCNOGIMFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPPCNOGIMFD*))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPPCNOGIMFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
