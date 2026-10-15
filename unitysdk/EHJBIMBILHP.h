#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHJBIMBILHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EHJBIMBILHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A0370)
#define EHJBIMBILHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0410)
#define EHJBIMBILHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A0060)
#define EHJBIMBILHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A0030)
#define EHJBIMBILHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0020)
#define EHJBIMBILHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A0170)
#define EHJBIMBILHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A00A0)
#define EHJBIMBILHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A02D0)
#define EHJBIMBILHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E29FFE0)
#define EHJBIMBILHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A03C0)
#define EHJBIMBILHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A0390)
#define EHJBIMBILHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0010)
#define EHJBIMBILHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A0300)
#define EHJBIMBILHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A0360)

	class EHJBIMBILHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EHJBIMBILHP")->GetStaticField(0x486B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJBIMBILHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EHJBIMBILHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHJBIMBILHP*))((::PBYTE)hIl2Cpp + EHJBIMBILHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHJBIMBILHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EHJBIMBILHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJBIMBILHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EHJBIMBILHP* Clone()
		{
			return ((::EHJBIMBILHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJBIMBILHP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHJBIMBILHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EHJBIMBILHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHJBIMBILHP*))((::PBYTE)hIl2Cpp + EHJBIMBILHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJBIMBILHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJBIMBILHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EHJBIMBILHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJBIMBILHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EHJBIMBILHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHJBIMBILHP*))((::PBYTE)hIl2Cpp + EHJBIMBILHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EHJBIMBILHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
