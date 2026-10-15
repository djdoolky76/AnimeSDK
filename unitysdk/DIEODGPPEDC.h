#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIEODGPPEDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DIEODGPPEDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BC0E0)
#define DIEODGPPEDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BC180)
#define DIEODGPPEDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BBDD0)
#define DIEODGPPEDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BBDA0)
#define DIEODGPPEDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BBD90)
#define DIEODGPPEDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BBEE0)
#define DIEODGPPEDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BBE10)
#define DIEODGPPEDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BC040)
#define DIEODGPPEDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BBD50)
#define DIEODGPPEDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BC130)
#define DIEODGPPEDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BC100)
#define DIEODGPPEDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BBD80)
#define DIEODGPPEDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BC070)
#define DIEODGPPEDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BC0D0)

	class DIEODGPPEDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DIEODGPPEDC")->GetStaticField(0x35E00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEODGPPEDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIEODGPPEDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIEODGPPEDC*))((::PBYTE)hIl2Cpp + DIEODGPPEDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIEODGPPEDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DIEODGPPEDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEODGPPEDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIEODGPPEDC* Clone()
		{
			return ((::DIEODGPPEDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEODGPPEDC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIEODGPPEDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIEODGPPEDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIEODGPPEDC*))((::PBYTE)hIl2Cpp + DIEODGPPEDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEODGPPEDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEODGPPEDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIEODGPPEDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEODGPPEDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIEODGPPEDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIEODGPPEDC*))((::PBYTE)hIl2Cpp + DIEODGPPEDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIEODGPPEDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
