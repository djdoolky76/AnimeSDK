#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJGMGGIGLPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJGMGGIGLPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A2D30)
#define FJGMGGIGLPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A2DD0)
#define FJGMGGIGLPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A29D0)
#define FJGMGGIGLPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A29A0)
#define FJGMGGIGLPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A2990)
#define FJGMGGIGLPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A2B30)
#define FJGMGGIGLPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A2A40)
#define FJGMGGIGLPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A2C90)
#define FJGMGGIGLPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A2920)
#define FJGMGGIGLPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A2D80)
#define FJGMGGIGLPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A2D50)
#define FJGMGGIGLPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A2980)
#define FJGMGGIGLPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A2CC0)
#define FJGMGGIGLPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A2D20)

	class FJGMGGIGLPD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FJGMGGIGLPD")->GetStaticField(0x60A40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJGMGGIGLPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJGMGGIGLPD*))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJGMGGIGLPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FJGMGGIGLPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJGMGGIGLPD* Clone()
		{
			return ((::FJGMGGIGLPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJGMGGIGLPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJGMGGIGLPD*))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJGMGGIGLPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJGMGGIGLPD*))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJGMGGIGLPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
