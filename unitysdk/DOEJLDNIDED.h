#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOEJLDNIDED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOEJLDNIDED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1FE320)
#define DOEJLDNIDED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FE540)
#define DOEJLDNIDED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1FDF10)
#define DOEJLDNIDED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1FDEE0)
#define DOEJLDNIDED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FDED0)
#define DOEJLDNIDED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1FE0A0)
#define DOEJLDNIDED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1FDFA0)
#define DOEJLDNIDED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1FE210)
#define DOEJLDNIDED_IDDAFEJCADN_OFFSET UNITYSDK_OFFSET(0x1E1FDF80)
#define DOEJLDNIDED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1FDE60)
#define DOEJLDNIDED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1FE3E0)
#define DOEJLDNIDED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1FE3B0)
#define DOEJLDNIDED_NBEBIADJHIG_OFFSET UNITYSDK_OFFSET(0x1E1FDF90)
#define DOEJLDNIDED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1FDEC0)
#define DOEJLDNIDED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1FE240)
#define DOEJLDNIDED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1FE2A0)

	class DOEJLDNIDED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BPLCPICKFKE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DOEJLDNIDED")->GetStaticField(0x419C0);
		}

		// static const ::System::Object IOAFEJKPPOI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOEJLDNIDED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOEJLDNIDED*))((::PBYTE)hIl2Cpp + DOEJLDNIDED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOEJLDNIDED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DOEJLDNIDED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOEJLDNIDED* Clone()
		{
			return ((::DOEJLDNIDED*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED_CLONE_OFFSET))(this);
		}

		::System::UInt32 IDDAFEJCADN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED_IDDAFEJCADN_OFFSET))(this);
		}

		::System::Void NBEBIADJHIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOEJLDNIDED_NBEBIADJHIG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOEJLDNIDED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOEJLDNIDED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOEJLDNIDED*))((::PBYTE)hIl2Cpp + DOEJLDNIDED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOEJLDNIDED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOEJLDNIDED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOEJLDNIDED*))((::PBYTE)hIl2Cpp + DOEJLDNIDED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOEJLDNIDED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
