#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFFEHFHAKCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFFEHFHAKCB_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E645E70)
#define IFFEHFHAKCB_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E645E80)
#define IFFEHFHAKCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6461E0)
#define IFFEHFHAKCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E646400)
#define IFFEHFHAKCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E645E30)
#define IFFEHFHAKCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E645E00)
#define IFFEHFHAKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E645DF0)
#define IFFEHFHAKCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E645F60)
#define IFFEHFHAKCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E645E90)
#define IFFEHFHAKCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6460D0)
#define IFFEHFHAKCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E645DB0)
#define IFFEHFHAKCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6462A0)
#define IFFEHFHAKCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E646270)
#define IFFEHFHAKCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E645DE0)
#define IFFEHFHAKCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E646100)
#define IFFEHFHAKCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E646160)

	class IFFEHFHAKCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IFFEHFHAKCB")->GetStaticField(0x11890);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFFEHFHAKCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFFEHFHAKCB*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IFFEHFHAKCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFFEHFHAKCB* Clone()
		{
			return ((::IFFEHFHAKCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFFEHFHAKCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFFEHFHAKCB*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFFEHFHAKCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFFEHFHAKCB*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
