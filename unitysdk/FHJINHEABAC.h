#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHJINHEABAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHJINHEABAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E38DB20)
#define FHJINHEABAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38DBC0)
#define FHJINHEABAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38D810)
#define FHJINHEABAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38D7E0)
#define FHJINHEABAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38D7D0)
#define FHJINHEABAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38D920)
#define FHJINHEABAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38D850)
#define FHJINHEABAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E38DA80)
#define FHJINHEABAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38D790)
#define FHJINHEABAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E38DB70)
#define FHJINHEABAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E38DB40)
#define FHJINHEABAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38D7C0)
#define FHJINHEABAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E38DAB0)
#define FHJINHEABAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E38DB10)

	class FHJINHEABAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHJINHEABAC")->GetStaticField(0x5F6C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJINHEABAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHJINHEABAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHJINHEABAC*))((::PBYTE)hIl2Cpp + FHJINHEABAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHJINHEABAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHJINHEABAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJINHEABAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHJINHEABAC* Clone()
		{
			return ((::FHJINHEABAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJINHEABAC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHJINHEABAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHJINHEABAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHJINHEABAC*))((::PBYTE)hIl2Cpp + FHJINHEABAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJINHEABAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJINHEABAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHJINHEABAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJINHEABAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHJINHEABAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHJINHEABAC*))((::PBYTE)hIl2Cpp + FHJINHEABAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHJINHEABAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
