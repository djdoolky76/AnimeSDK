#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPIMBJPMFBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPIMBJPMFBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D6240)
#define JPIMBJPMFBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D62E0)
#define JPIMBJPMFBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D5F30)
#define JPIMBJPMFBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D5F00)
#define JPIMBJPMFBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D5EF0)
#define JPIMBJPMFBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D6040)
#define JPIMBJPMFBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D5F70)
#define JPIMBJPMFBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D61A0)
#define JPIMBJPMFBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D5EB0)
#define JPIMBJPMFBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D6290)
#define JPIMBJPMFBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D6260)
#define JPIMBJPMFBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D5EE0)
#define JPIMBJPMFBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D61D0)
#define JPIMBJPMFBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D6230)

	class JPIMBJPMFBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPIMBJPMFBP")->GetStaticField(0xB720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPIMBJPMFBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPIMBJPMFBP*))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPIMBJPMFBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPIMBJPMFBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPIMBJPMFBP* Clone()
		{
			return ((::JPIMBJPMFBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPIMBJPMFBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPIMBJPMFBP*))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPIMBJPMFBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPIMBJPMFBP*))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPIMBJPMFBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
