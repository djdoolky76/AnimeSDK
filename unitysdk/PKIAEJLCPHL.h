#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class PKIAEJLCPHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKIAEJLCPHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF65F00)
#define PKIAEJLCPHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF66220)
#define PKIAEJLCPHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF65970)
#define PKIAEJLCPHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF65900)
#define PKIAEJLCPHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF658F0)
#define PKIAEJLCPHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF65BB0)
#define PKIAEJLCPHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF65A30)
#define PKIAEJLCPHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF65D30)
#define PKIAEJLCPHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF658B0)
#define PKIAEJLCPHL_JODBIKCOKPA_OFFSET UNITYSDK_OFFSET(0x1DF659F0)
#define PKIAEJLCPHL_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1DF65A10)
#define PKIAEJLCPHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF66060)
#define PKIAEJLCPHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF65FD0)
#define PKIAEJLCPHL_MGHDAHFEGHK_OFFSET UNITYSDK_OFFSET(0x1DF65A00)
#define PKIAEJLCPHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF658E0)
#define PKIAEJLCPHL_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1DF65A20)
#define PKIAEJLCPHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF65DC0)
#define PKIAEJLCPHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF65E20)

inline static constexpr unsigned int PKIAEJLCPHL_TypeDefinitionIndex = 30144;

	class PKIAEJLCPHL : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LAPDJOMDENI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PKIAEJLCPHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKIAEJLCPHL*>**)UnitySDK::FromName("", "PKIAEJLCPHL")->GetStaticField(0x3A370);
		}

		// static const ::System::Object ILFADHBKBCA; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKIAEJLCPHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKIAEJLCPHL*))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKIAEJLCPHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKIAEJLCPHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKIAEJLCPHL*>*(*)())((::PBYTE)hIl2Cpp + PKIAEJLCPHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKIAEJLCPHL* Clone()
		{
			return ((::PKIAEJLCPHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JODBIKCOKPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_JODBIKCOKPA_OFFSET))(this);
		}

		::System::Void MGHDAHFEGHK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_MGHDAHFEGHK_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKIAEJLCPHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKIAEJLCPHL*))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKIAEJLCPHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKIAEJLCPHL*))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKIAEJLCPHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
