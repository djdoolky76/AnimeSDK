#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEEKOEECHB;
class OFHGANNPNIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFHGANNPNIH_BFLBEIIBIKN_OFFSET UNITYSDK_OFFSET(0x1DE478B0)
#define OFHGANNPNIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE47E50)
#define OFHGANNPNIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE480A0)
#define OFHGANNPNIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE47830)
#define OFHGANNPNIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE477C0)
#define OFHGANNPNIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE477B0)
#define OFHGANNPNIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE47A40)
#define OFHGANNPNIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE478D0)
#define OFHGANNPNIH_FLJOBDNCFEP_OFFSET UNITYSDK_OFFSET(0x1DE478C0)
#define OFHGANNPNIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE47D10)
#define OFHGANNPNIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE47770)
#define OFHGANNPNIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE47F20)
#define OFHGANNPNIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE47EB0)
#define OFHGANNPNIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE477A0)
#define OFHGANNPNIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE47D60)
#define OFHGANNPNIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE47DC0)

	class OFHGANNPNIH : public ::System::Object
	{
	public:
		::CIEEKOEECHB* ILEOLMKCJMB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFHGANNPNIH")->GetStaticField(0x17740);
		}

		// static const ::System::Object IBBLPNOMPNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHGANNPNIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFHGANNPNIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFHGANNPNIH*))((::PBYTE)hIl2Cpp + OFHGANNPNIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFHGANNPNIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFHGANNPNIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHGANNPNIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFHGANNPNIH* Clone()
		{
			return ((::OFHGANNPNIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHGANNPNIH_CLONE_OFFSET))(this);
		}

		::CIEEKOEECHB* BFLBEIIBIKN()
		{
			return ((::CIEEKOEECHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHGANNPNIH_BFLBEIIBIKN_OFFSET))(this);
		}

		::System::Void FLJOBDNCFEP(::CIEEKOEECHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEEKOEECHB*))((::PBYTE)hIl2Cpp + OFHGANNPNIH_FLJOBDNCFEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFHGANNPNIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFHGANNPNIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFHGANNPNIH*))((::PBYTE)hIl2Cpp + OFHGANNPNIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHGANNPNIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHGANNPNIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFHGANNPNIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHGANNPNIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFHGANNPNIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFHGANNPNIH*))((::PBYTE)hIl2Cpp + OFHGANNPNIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFHGANNPNIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
