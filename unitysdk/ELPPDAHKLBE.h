#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELPPDAHKLBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELPPDAHKLBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2DC130)
#define ELPPDAHKLBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DC1D0)
#define ELPPDAHKLBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2DBDD0)
#define ELPPDAHKLBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2DBDA0)
#define ELPPDAHKLBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DBD90)
#define ELPPDAHKLBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2DBF30)
#define ELPPDAHKLBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2DBE40)
#define ELPPDAHKLBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2DC090)
#define ELPPDAHKLBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2DBD20)
#define ELPPDAHKLBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2DC180)
#define ELPPDAHKLBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2DC150)
#define ELPPDAHKLBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2DBD80)
#define ELPPDAHKLBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2DC0C0)
#define ELPPDAHKLBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2DC120)

	class ELPPDAHKLBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ELPPDAHKLBE")->GetStaticField(0x52020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELPPDAHKLBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELPPDAHKLBE*))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELPPDAHKLBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ELPPDAHKLBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELPPDAHKLBE* Clone()
		{
			return ((::ELPPDAHKLBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELPPDAHKLBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELPPDAHKLBE*))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELPPDAHKLBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELPPDAHKLBE*))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELPPDAHKLBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
