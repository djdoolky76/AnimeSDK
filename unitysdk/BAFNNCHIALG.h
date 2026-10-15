#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAFNNCHIALG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAFNNCHIALG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7B36A0)
#define BAFNNCHIALG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B3740)
#define BAFNNCHIALG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B3340)
#define BAFNNCHIALG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B3310)
#define BAFNNCHIALG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B3300)
#define BAFNNCHIALG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B34A0)
#define BAFNNCHIALG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B33B0)
#define BAFNNCHIALG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7B3600)
#define BAFNNCHIALG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7B3290)
#define BAFNNCHIALG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7B36F0)
#define BAFNNCHIALG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7B36C0)
#define BAFNNCHIALG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7B32F0)
#define BAFNNCHIALG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7B3630)
#define BAFNNCHIALG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7B3690)

	class BAFNNCHIALG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BAFNNCHIALG")->GetStaticField(0x44CD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAFNNCHIALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFNNCHIALG*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAFNNCHIALG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BAFNNCHIALG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAFNNCHIALG* Clone()
		{
			return ((::BAFNNCHIALG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAFNNCHIALG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFNNCHIALG*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFNNCHIALG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAFNNCHIALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFNNCHIALG*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAFNNCHIALG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
