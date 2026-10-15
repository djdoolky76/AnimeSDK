#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIFMLFKCOOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIFMLFKCOOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF44F70)
#define PIFMLFKCOOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF45190)
#define PIFMLFKCOOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF44B60)
#define PIFMLFKCOOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF44B30)
#define PIFMLFKCOOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF44B20)
#define PIFMLFKCOOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF44CF0)
#define PIFMLFKCOOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF44BF0)
#define PIFMLFKCOOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF44E60)
#define PIFMLFKCOOG_HBIIAFIBINB_OFFSET UNITYSDK_OFFSET(0x1DF44BE0)
#define PIFMLFKCOOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF44AB0)
#define PIFMLFKCOOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF45030)
#define PIFMLFKCOOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF45000)
#define PIFMLFKCOOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF44B10)
#define PIFMLFKCOOG_PMBIFIHANOI_OFFSET UNITYSDK_OFFSET(0x1DF44BD0)
#define PIFMLFKCOOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF44E90)
#define PIFMLFKCOOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF44EF0)

inline static constexpr unsigned int PIFMLFKCOOG_TypeDefinitionIndex = 29332;

	class PIFMLFKCOOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GNBAANFEAGG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIFMLFKCOOG")->GetStaticField(0x40EB0);
		}

		// static const ::System::Object MJGCDMOFALP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIFMLFKCOOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIFMLFKCOOG*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIFMLFKCOOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIFMLFKCOOG* Clone()
		{
			return ((::PIFMLFKCOOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBIFIHANOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_PMBIFIHANOI_OFFSET))(this);
		}

		::System::Void HBIIAFIBINB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_HBIIAFIBINB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIFMLFKCOOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIFMLFKCOOG*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIFMLFKCOOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIFMLFKCOOG*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIFMLFKCOOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
