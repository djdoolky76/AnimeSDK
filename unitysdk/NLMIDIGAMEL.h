#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLMIDIGAMEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLMIDIGAMEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB68210)
#define NLMIDIGAMEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB684E0)
#define NLMIDIGAMEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB67E60)
#define NLMIDIGAMEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB67E30)
#define NLMIDIGAMEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB67E20)
#define NLMIDIGAMEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB67FD0)
#define NLMIDIGAMEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB67EF0)
#define NLMIDIGAMEL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB67EE0)
#define NLMIDIGAMEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB680A0)
#define NLMIDIGAMEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB67DE0)
#define NLMIDIGAMEL_KBMMCIAAPMN_OFFSET UNITYSDK_OFFSET(0x1EB67EB0)
#define NLMIDIGAMEL_KEPGFKBDMGN_OFFSET UNITYSDK_OFFSET(0x1EB67EC0)
#define NLMIDIGAMEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB68360)
#define NLMIDIGAMEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB68320)
#define NLMIDIGAMEL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB67ED0)
#define NLMIDIGAMEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB67E10)
#define NLMIDIGAMEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB680D0)
#define NLMIDIGAMEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB68130)

inline static constexpr unsigned int NLMIDIGAMEL_TypeDefinitionIndex = 27433;

	class NLMIDIGAMEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 EDPNBNADCHN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NLMIDIGAMEL")->GetStaticField(0x6BAF0);
		}

		// static const ::System::Object MGMPKBACCJH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLMIDIGAMEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLMIDIGAMEL*))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLMIDIGAMEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NLMIDIGAMEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLMIDIGAMEL* Clone()
		{
			return ((::NLMIDIGAMEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBMMCIAAPMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_KBMMCIAAPMN_OFFSET))(this);
		}

		::System::Void KEPGFKBDMGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_KEPGFKBDMGN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLMIDIGAMEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLMIDIGAMEL*))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLMIDIGAMEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLMIDIGAMEL*))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLMIDIGAMEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
