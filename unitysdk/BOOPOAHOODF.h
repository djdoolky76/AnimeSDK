#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOOPOAHOODF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BOOPOAHOODF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E03EA90)
#define BOOPOAHOODF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03ECB0)
#define BOOPOAHOODF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E03E6E0)
#define BOOPOAHOODF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E03E6B0)
#define BOOPOAHOODF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03E6A0)
#define BOOPOAHOODF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E03E810)
#define BOOPOAHOODF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E03E740)
#define BOOPOAHOODF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E03E730)
#define BOOPOAHOODF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E03E980)
#define BOOPOAHOODF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E03E660)
#define BOOPOAHOODF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E03EB50)
#define BOOPOAHOODF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E03EB20)
#define BOOPOAHOODF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E03E720)
#define BOOPOAHOODF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E03E690)
#define BOOPOAHOODF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E03E9B0)
#define BOOPOAHOODF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E03EA10)

	class BOOPOAHOODF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BOOPOAHOODF")->GetStaticField(0x54F90);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BOOPOAHOODF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOOPOAHOODF*))((::PBYTE)hIl2Cpp + BOOPOAHOODF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOOPOAHOODF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BOOPOAHOODF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BOOPOAHOODF* Clone()
		{
			return ((::BOOPOAHOODF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOOPOAHOODF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOOPOAHOODF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOOPOAHOODF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOOPOAHOODF*))((::PBYTE)hIl2Cpp + BOOPOAHOODF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BOOPOAHOODF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BOOPOAHOODF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOOPOAHOODF*))((::PBYTE)hIl2Cpp + BOOPOAHOODF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BOOPOAHOODF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
