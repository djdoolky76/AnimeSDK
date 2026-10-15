#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBEHJJBBLPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBEHJJBBLPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E333220)
#define FBEHJJBBLPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E333440)
#define FBEHJJBBLPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E332E70)
#define FBEHJJBBLPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E332E40)
#define FBEHJJBBLPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E332E30)
#define FBEHJJBBLPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E332FA0)
#define FBEHJJBBLPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E332ED0)
#define FBEHJJBBLPL_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E332EC0)
#define FBEHJJBBLPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E333110)
#define FBEHJJBBLPL_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E332EB0)
#define FBEHJJBBLPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E332DF0)
#define FBEHJJBBLPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3332E0)
#define FBEHJJBBLPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3332B0)
#define FBEHJJBBLPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E332E20)
#define FBEHJJBBLPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E333140)
#define FBEHJJBBLPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3331A0)

	class FBEHJJBBLPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHCFPHJABDL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FBEHJJBBLPL")->GetStaticField(0x59360);
		}

		// static const ::System::Object FEGJODHHKKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBEHJJBBLPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBEHJJBBLPL*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FBEHJJBBLPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBEHJJBBLPL* Clone()
		{
			return ((::FBEHJJBBLPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBEHJJBBLPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBEHJJBBLPL*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBEHJJBBLPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBEHJJBBLPL*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBEHJJBBLPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
