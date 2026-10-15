#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLAEOKIKLAA;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLAEOKIKLAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1DC020)
#define DLAEOKIKLAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC270)
#define DLAEOKIKLAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1DB9B0)
#define DLAEOKIKLAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1DB960)
#define DLAEOKIKLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB950)
#define DLAEOKIKLAA_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1E1DBA10)
#define DLAEOKIKLAA_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1E1DBA20)
#define DLAEOKIKLAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1DBBA0)
#define DLAEOKIKLAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1DBA30)
#define DLAEOKIKLAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1DBE70)
#define DLAEOKIKLAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1DB910)
#define DLAEOKIKLAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1DC0F0)
#define DLAEOKIKLAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1DC080)
#define DLAEOKIKLAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB940)
#define DLAEOKIKLAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1DBF30)
#define DLAEOKIKLAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1DBF90)

	class DLAEOKIKLAA : public ::System::Object
	{
	public:
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DLAEOKIKLAA")->GetStaticField(0x3B5D0);
		}

		// static const ::System::Object OAMMBKNIIJL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLAEOKIKLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLAEOKIKLAA*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DLAEOKIKLAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLAEOKIKLAA* Clone()
		{
			return ((::DLAEOKIKLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CLONE_OFFSET))(this);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLAEOKIKLAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLAEOKIKLAA*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLAEOKIKLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLAEOKIKLAA*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
