#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNBCBNCKLHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNBCBNCKLHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D8960)
#define GNBCBNCKLHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D8A00)
#define GNBCBNCKLHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D8650)
#define GNBCBNCKLHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D8620)
#define GNBCBNCKLHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D8610)
#define GNBCBNCKLHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D8760)
#define GNBCBNCKLHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D8690)
#define GNBCBNCKLHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D88C0)
#define GNBCBNCKLHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D85D0)
#define GNBCBNCKLHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D89B0)
#define GNBCBNCKLHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D8980)
#define GNBCBNCKLHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D8600)
#define GNBCBNCKLHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D88F0)
#define GNBCBNCKLHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D8950)

	class GNBCBNCKLHE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GNBCBNCKLHE")->GetStaticField(0x22A70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNBCBNCKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBCBNCKLHE*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GNBCBNCKLHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNBCBNCKLHE* Clone()
		{
			return ((::GNBCBNCKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNBCBNCKLHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNBCBNCKLHE*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNBCBNCKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBCBNCKLHE*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
