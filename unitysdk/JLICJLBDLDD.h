#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLICJLBDLDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLICJLBDLDD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E77B730)
#define JLICJLBDLDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77B7D0)
#define JLICJLBDLDD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E77B420)
#define JLICJLBDLDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E77B3F0)
#define JLICJLBDLDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77B3E0)
#define JLICJLBDLDD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E77B530)
#define JLICJLBDLDD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E77B460)
#define JLICJLBDLDD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E77B690)
#define JLICJLBDLDD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E77B3A0)
#define JLICJLBDLDD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E77B780)
#define JLICJLBDLDD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E77B750)
#define JLICJLBDLDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E77B3D0)
#define JLICJLBDLDD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E77B6C0)
#define JLICJLBDLDD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E77B720)

	class JLICJLBDLDD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLICJLBDLDD")->GetStaticField(0x69700);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLICJLBDLDD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLICJLBDLDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLICJLBDLDD*))((::PBYTE)hIl2Cpp + JLICJLBDLDD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLICJLBDLDD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLICJLBDLDD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLICJLBDLDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLICJLBDLDD* Clone()
		{
			return ((::JLICJLBDLDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLICJLBDLDD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLICJLBDLDD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLICJLBDLDD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLICJLBDLDD*))((::PBYTE)hIl2Cpp + JLICJLBDLDD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLICJLBDLDD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLICJLBDLDD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLICJLBDLDD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLICJLBDLDD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLICJLBDLDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLICJLBDLDD*))((::PBYTE)hIl2Cpp + JLICJLBDLDD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLICJLBDLDD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
