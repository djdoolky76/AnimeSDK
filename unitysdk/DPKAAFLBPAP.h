#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPKAAFLBPAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPKAAFLBPAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2123A0)
#define DPKAAFLBPAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E212440)
#define DPKAAFLBPAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E212090)
#define DPKAAFLBPAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E212060)
#define DPKAAFLBPAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E212050)
#define DPKAAFLBPAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2121A0)
#define DPKAAFLBPAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2120D0)
#define DPKAAFLBPAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E212300)
#define DPKAAFLBPAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E212010)
#define DPKAAFLBPAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2123F0)
#define DPKAAFLBPAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2123C0)
#define DPKAAFLBPAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E212040)
#define DPKAAFLBPAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E212330)
#define DPKAAFLBPAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E212390)

	class DPKAAFLBPAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DPKAAFLBPAP")->GetStaticField(0x45DF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPKAAFLBPAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPKAAFLBPAP*))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPKAAFLBPAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DPKAAFLBPAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPKAAFLBPAP* Clone()
		{
			return ((::DPKAAFLBPAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPKAAFLBPAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPKAAFLBPAP*))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPKAAFLBPAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPKAAFLBPAP*))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPKAAFLBPAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
