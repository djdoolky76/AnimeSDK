#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMLFDPFAPJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMLFDPFAPJP_ALBICONJECC_OFFSET UNITYSDK_OFFSET(0x1E2E6090)
#define EMLFDPFAPJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E6410)
#define EMLFDPFAPJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E66E0)
#define EMLFDPFAPJP_CFIPANKADNN_OFFSET UNITYSDK_OFFSET(0x1E2E60A0)
#define EMLFDPFAPJP_CKHDOJOKAOF_OFFSET UNITYSDK_OFFSET(0x1E2E60B0)
#define EMLFDPFAPJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E6010)
#define EMLFDPFAPJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E5FE0)
#define EMLFDPFAPJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E5FD0)
#define EMLFDPFAPJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E61D0)
#define EMLFDPFAPJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E60C0)
#define EMLFDPFAPJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E62A0)
#define EMLFDPFAPJP_HPPFMFIFIJP_OFFSET UNITYSDK_OFFSET(0x1E2E6080)
#define EMLFDPFAPJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E5F60)
#define EMLFDPFAPJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E6560)
#define EMLFDPFAPJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E6520)
#define EMLFDPFAPJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E5FC0)
#define EMLFDPFAPJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E62D0)
#define EMLFDPFAPJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E6330)

inline static constexpr unsigned int EMLFDPFAPJP_TypeDefinitionIndex = 25555;

	class EMLFDPFAPJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGIFDMKHACL; // 0x18
		::System::UInt32 BDNIBEINELD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EMLFDPFAPJP")->GetStaticField(0x53DD0);
		}

		// static const ::System::Object AJEAOMFLFJG; // 0x0
		// static const ::System::Object PIJAALLMPMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMLFDPFAPJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMLFDPFAPJP*))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMLFDPFAPJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EMLFDPFAPJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMLFDPFAPJP* Clone()
		{
			return ((::EMLFDPFAPJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_CLONE_OFFSET))(this);
		}

		::System::UInt32 HPPFMFIFIJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_HPPFMFIFIJP_OFFSET))(this);
		}

		::System::Void ALBICONJECC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_ALBICONJECC_OFFSET))(this, a1);
		}

		::System::UInt32 CFIPANKADNN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_CFIPANKADNN_OFFSET))(this);
		}

		::System::Void CKHDOJOKAOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_CKHDOJOKAOF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMLFDPFAPJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMLFDPFAPJP*))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMLFDPFAPJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMLFDPFAPJP*))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMLFDPFAPJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
