#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEEKOEECHB;
class OFHGANNPNIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFHGANNPNIH_BFLBEIIBIKN_OFFSET UNITYSDK_OFFSET(0x1F209DA0)
#define OFHGANNPNIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F20A340)
#define OFHGANNPNIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F20A590)
#define OFHGANNPNIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F209D20)
#define OFHGANNPNIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F209CB0)
#define OFHGANNPNIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F209CA0)
#define OFHGANNPNIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F209F30)
#define OFHGANNPNIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F209DC0)
#define OFHGANNPNIH_FLJOBDNCFEP_OFFSET UNITYSDK_OFFSET(0x1F209DB0)
#define OFHGANNPNIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F20A200)
#define OFHGANNPNIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F209C60)
#define OFHGANNPNIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F20A410)
#define OFHGANNPNIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F20A3A0)
#define OFHGANNPNIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F209C90)
#define OFHGANNPNIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F20A250)
#define OFHGANNPNIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F20A2B0)

inline static constexpr unsigned int OFHGANNPNIH_TypeDefinitionIndex = 27256;

	class OFHGANNPNIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CIEEKOEECHB* ILEOLMKCJMB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OFHGANNPNIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFHGANNPNIH*>**)UnitySDK::FromName("", "OFHGANNPNIH")->GetStaticField(0x13890);
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

		static ::Google::Protobuf::MessageParser_1<::OFHGANNPNIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFHGANNPNIH*>*(*)())((::PBYTE)hIl2Cpp + OFHGANNPNIH_JJGHOBBFNJD_OFFSET))();
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
