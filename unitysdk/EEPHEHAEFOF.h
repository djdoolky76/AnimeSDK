#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEPHEHAEFOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEPHEHAEFOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E28AF30)
#define EEPHEHAEFOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28AFD0)
#define EEPHEHAEFOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E28ABD0)
#define EEPHEHAEFOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E28ABA0)
#define EEPHEHAEFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28AB90)
#define EEPHEHAEFOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E28AD30)
#define EEPHEHAEFOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E28AC40)
#define EEPHEHAEFOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E28AE90)
#define EEPHEHAEFOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E28AB20)
#define EEPHEHAEFOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E28AF80)
#define EEPHEHAEFOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E28AF50)
#define EEPHEHAEFOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E28AB80)
#define EEPHEHAEFOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E28AEC0)
#define EEPHEHAEFOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E28AF20)

	class EEPHEHAEFOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EEPHEHAEFOF")->GetStaticField(0x44660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEPHEHAEFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEPHEHAEFOF*))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEPHEHAEFOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EEPHEHAEFOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEPHEHAEFOF* Clone()
		{
			return ((::EEPHEHAEFOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEPHEHAEFOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEPHEHAEFOF*))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEPHEHAEFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEPHEHAEFOF*))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEPHEHAEFOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
