#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJIBNOEGFLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJIBNOEGFLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E75D580)
#define JJIBNOEGFLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E75D620)
#define JJIBNOEGFLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E75D270)
#define JJIBNOEGFLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E75D240)
#define JJIBNOEGFLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75D230)
#define JJIBNOEGFLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E75D380)
#define JJIBNOEGFLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E75D2B0)
#define JJIBNOEGFLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E75D4E0)
#define JJIBNOEGFLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E75D1F0)
#define JJIBNOEGFLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E75D5D0)
#define JJIBNOEGFLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E75D5A0)
#define JJIBNOEGFLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E75D220)
#define JJIBNOEGFLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E75D510)
#define JJIBNOEGFLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E75D570)

	class JJIBNOEGFLK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JJIBNOEGFLK")->GetStaticField(0x651B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJIBNOEGFLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJIBNOEGFLK*))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJIBNOEGFLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JJIBNOEGFLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJIBNOEGFLK* Clone()
		{
			return ((::JJIBNOEGFLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJIBNOEGFLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJIBNOEGFLK*))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJIBNOEGFLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJIBNOEGFLK*))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJIBNOEGFLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
