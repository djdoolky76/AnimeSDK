#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDBGGEJBNNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDBGGEJBNNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07FD10)
#define CDBGGEJBNNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07FDB0)
#define CDBGGEJBNNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07FA00)
#define CDBGGEJBNNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07F9D0)
#define CDBGGEJBNNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07F9C0)
#define CDBGGEJBNNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E07FB10)
#define CDBGGEJBNNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E07FA40)
#define CDBGGEJBNNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E07FC70)
#define CDBGGEJBNNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E07F980)
#define CDBGGEJBNNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07FD60)
#define CDBGGEJBNNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07FD30)
#define CDBGGEJBNNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07F9B0)
#define CDBGGEJBNNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07FCA0)
#define CDBGGEJBNNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E07FD00)

	class CDBGGEJBNNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CDBGGEJBNNM")->GetStaticField(0xEB50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDBGGEJBNNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDBGGEJBNNM*))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDBGGEJBNNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CDBGGEJBNNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDBGGEJBNNM* Clone()
		{
			return ((::CDBGGEJBNNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDBGGEJBNNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDBGGEJBNNM*))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDBGGEJBNNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDBGGEJBNNM*))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDBGGEJBNNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
