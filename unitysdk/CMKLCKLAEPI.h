#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMKLCKLAEPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CMKLCKLAEPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E103830)
#define CMKLCKLAEPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E103B50)
#define CMKLCKLAEPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E103250)
#define CMKLCKLAEPI_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E103310)
#define CMKLCKLAEPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1031E0)
#define CMKLCKLAEPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1031D0)
#define CMKLCKLAEPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1034E0)
#define CMKLCKLAEPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E103330)
#define CMKLCKLAEPI_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E103320)
#define CMKLCKLAEPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E103660)
#define CMKLCKLAEPI_HHJHEFHONPC_OFFSET UNITYSDK_OFFSET(0x1E1032F0)
#define CMKLCKLAEPI_JCODKCEFOEA_OFFSET UNITYSDK_OFFSET(0x1E103300)
#define CMKLCKLAEPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E103160)
#define CMKLCKLAEPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E103990)
#define CMKLCKLAEPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E103900)
#define CMKLCKLAEPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1031C0)
#define CMKLCKLAEPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1036F0)
#define CMKLCKLAEPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E103750)

	class CMKLCKLAEPI : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AIPINJBJLBA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CMKLCKLAEPI")->GetStaticField(0x1E1D0);
		}

		// static const ::System::Object NHAKMPBEIHB; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CMKLCKLAEPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMKLCKLAEPI*))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMKLCKLAEPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CMKLCKLAEPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CMKLCKLAEPI* Clone()
		{
			return ((::CMKLCKLAEPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_CLONE_OFFSET))(this);
		}

		::System::UInt32 HHJHEFHONPC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_HHJHEFHONPC_OFFSET))(this);
		}

		::System::Void JCODKCEFOEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_JCODKCEFOEA_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMKLCKLAEPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMKLCKLAEPI*))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CMKLCKLAEPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMKLCKLAEPI*))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CMKLCKLAEPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
