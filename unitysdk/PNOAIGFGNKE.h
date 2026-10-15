#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNOAIGFGNKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNOAIGFGNKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFBF380)
#define PNOAIGFGNKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBF420)
#define PNOAIGFGNKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFBF070)
#define PNOAIGFGNKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFBF040)
#define PNOAIGFGNKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBF030)
#define PNOAIGFGNKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFBF180)
#define PNOAIGFGNKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFBF0B0)
#define PNOAIGFGNKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFBF2E0)
#define PNOAIGFGNKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFBEFF0)
#define PNOAIGFGNKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFBF3D0)
#define PNOAIGFGNKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFBF3A0)
#define PNOAIGFGNKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFBF020)
#define PNOAIGFGNKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFBF310)
#define PNOAIGFGNKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFBF370)

	class PNOAIGFGNKE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNOAIGFGNKE")->GetStaticField(0x51F90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNOAIGFGNKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNOAIGFGNKE*))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOAIGFGNKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNOAIGFGNKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNOAIGFGNKE* Clone()
		{
			return ((::PNOAIGFGNKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNOAIGFGNKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNOAIGFGNKE*))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNOAIGFGNKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNOAIGFGNKE*))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNOAIGFGNKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
