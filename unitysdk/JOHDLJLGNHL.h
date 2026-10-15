#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOHDLJLGNHL;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOHDLJLGNHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7A2E50)
#define JOHDLJLGNHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A3120)
#define JOHDLJLGNHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7A28C0)
#define JOHDLJLGNHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7A2870)
#define JOHDLJLGNHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A2860)
#define JOHDLJLGNHL_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1E7A2940)
#define JOHDLJLGNHL_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E7A2920)
#define JOHDLJLGNHL_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1E7A2950)
#define JOHDLJLGNHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7A2AE0)
#define JOHDLJLGNHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7A2960)
#define JOHDLJLGNHL_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E7A2930)
#define JOHDLJLGNHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7A2C60)
#define JOHDLJLGNHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7A2820)
#define JOHDLJLGNHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7A2F90)
#define JOHDLJLGNHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7A2F20)
#define JOHDLJLGNHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7A2850)
#define JOHDLJLGNHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7A2D10)
#define JOHDLJLGNHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7A2D70)

	class JOHDLJLGNHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOHDLJLGNHL")->GetStaticField(0x6D000);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object OAMMBKNIIJL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOHDLJLGNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOHDLJLGNHL*))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOHDLJLGNHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOHDLJLGNHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOHDLJLGNHL* Clone()
		{
			return ((::JOHDLJLGNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOHDLJLGNHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOHDLJLGNHL*))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOHDLJLGNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOHDLJLGNHL*))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOHDLJLGNHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
