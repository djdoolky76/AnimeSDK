#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIIGHJEIGHE;
class JOCIBBFJPMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIIGHJEIGHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E27D260)
#define AIIGHJEIGHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27D720)
#define AIIGHJEIGHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E27CC50)
#define AIIGHJEIGHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27CBC0)
#define AIIGHJEIGHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27CBB0)
#define AIIGHJEIGHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E27CEA0)
#define AIIGHJEIGHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E27CD70)
#define AIIGHJEIGHE_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E27CD60)
#define AIIGHJEIGHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27D030)
#define AIIGHJEIGHE_HFOKLPOEFJM_OFFSET UNITYSDK_OFFSET(0x1E27CD20)
#define AIIGHJEIGHE_HMPGKPMHEDF_OFFSET UNITYSDK_OFFSET(0x1E27CD10)
#define AIIGHJEIGHE_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E27CD30)
#define AIIGHJEIGHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E27CB40)
#define AIIGHJEIGHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E27D4A0)
#define AIIGHJEIGHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E27D3B0)
#define AIIGHJEIGHE_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E27CD40)
#define AIIGHJEIGHE_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E27CD50)
#define AIIGHJEIGHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27CBA0)
#define AIIGHJEIGHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E27D0C0)
#define AIIGHJEIGHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E27D120)

	class AIIGHJEIGHE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JOCIBBFJPMP* MNJNMPKLFAI; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x20
		::System::UInt32 OIJAOMMHCDA; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AIIGHJEIGHE")->GetStaticField(0x32F10);
		}

		// static const ::System::Object HLMDHFNCJGJ; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIIGHJEIGHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIIGHJEIGHE*))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIIGHJEIGHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AIIGHJEIGHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIIGHJEIGHE* Clone()
		{
			return ((::AIIGHJEIGHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_CLONE_OFFSET))(this);
		}

		::System::UInt32 HMPGKPMHEDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_HMPGKPMHEDF_OFFSET))(this);
		}

		::System::Void HFOKLPOEFJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_HFOKLPOEFJM_OFFSET))(this, a1);
		}

		::JOCIBBFJPMP* JIFPIGBJFEH()
		{
			return ((::JOCIBBFJPMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::JOCIBBFJPMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCIBBFJPMP*))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIIGHJEIGHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIIGHJEIGHE*))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIIGHJEIGHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIIGHJEIGHE*))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIIGHJEIGHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
