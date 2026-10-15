#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMHGNOPOONF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMHGNOPOONF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D39E0)
#define GMHGNOPOONF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D3A80)
#define GMHGNOPOONF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D36D0)
#define GMHGNOPOONF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D36A0)
#define GMHGNOPOONF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D3690)
#define GMHGNOPOONF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D37E0)
#define GMHGNOPOONF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D3710)
#define GMHGNOPOONF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D3940)
#define GMHGNOPOONF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D3650)
#define GMHGNOPOONF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D3A30)
#define GMHGNOPOONF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D3A00)
#define GMHGNOPOONF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D3680)
#define GMHGNOPOONF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D3970)
#define GMHGNOPOONF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D39D0)

	class GMHGNOPOONF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GMHGNOPOONF")->GetStaticField(0x21E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMHGNOPOONF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMHGNOPOONF*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMHGNOPOONF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GMHGNOPOONF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMHGNOPOONF* Clone()
		{
			return ((::GMHGNOPOONF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMHGNOPOONF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMHGNOPOONF*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMHGNOPOONF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMHGNOPOONF*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
