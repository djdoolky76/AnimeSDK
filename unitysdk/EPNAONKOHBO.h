#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPNAONKOHBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPNAONKOHBO_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E2EB210)
#define EPNAONKOHBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2EB7F0)
#define EPNAONKOHBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EBB90)
#define EPNAONKOHBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2EB140)
#define EPNAONKOHBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2EB0F0)
#define EPNAONKOHBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EB0E0)
#define EPNAONKOHBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2EB270)
#define EPNAONKOHBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2EB240)
#define EPNAONKOHBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2EB490)
#define EPNAONKOHBO_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E2EB200)
#define EPNAONKOHBO_IHDPOPKDFKO_OFFSET UNITYSDK_OFFSET(0x1E2EB220)
#define EPNAONKOHBO_JCNGFJJCPDE_OFFSET UNITYSDK_OFFSET(0x1E2EB1A0)
#define EPNAONKOHBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2EB0A0)
#define EPNAONKOHBO_LAGHFAAHOBL_OFFSET UNITYSDK_OFFSET(0x1E2EB230)
#define EPNAONKOHBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2EB950)
#define EPNAONKOHBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2EB8F0)
#define EPNAONKOHBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2EB0D0)
#define EPNAONKOHBO_PMFOEMJKNHA_OFFSET UNITYSDK_OFFSET(0x1E2EB1B0)
#define EPNAONKOHBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2EB630)
#define EPNAONKOHBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2EB690)

inline static constexpr unsigned int EPNAONKOHBO_TypeDefinitionIndex = 25453;

	class EPNAONKOHBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* OKPDLDHJNPG; // 0x18
		::System::Double AHNEBPEHFLP; // 0x20
		::System::UInt32 BFOBOOGAHKB; // 0x28
		static ::Google::Protobuf::MessageParser_1<::EPNAONKOHBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPNAONKOHBO*>**)UnitySDK::FromName("", "EPNAONKOHBO")->GetStaticField(0x3D4D0);
		}

		// static const ::System::Object IMENFKCDPOK; // 0x0
		// static const ::System::Object HOHDLIKKMBH; // 0x0
		// static const ::System::Object MELOPNPCNIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPNAONKOHBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPNAONKOHBO*))((::PBYTE)hIl2Cpp + EPNAONKOHBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPNAONKOHBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPNAONKOHBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPNAONKOHBO*>*(*)())((::PBYTE)hIl2Cpp + EPNAONKOHBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPNAONKOHBO* Clone()
		{
			return ((::EPNAONKOHBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO_CLONE_OFFSET))(this);
		}

		::System::String* JCNGFJJCPDE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO_JCNGFJJCPDE_OFFSET))(this);
		}

		::System::Void PMFOEMJKNHA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPNAONKOHBO_PMFOEMJKNHA_OFFSET))(this, a1);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPNAONKOHBO_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::Double IHDPOPKDFKO()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO_IHDPOPKDFKO_OFFSET))(this);
		}

		::System::Void LAGHFAAHOBL(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPNAONKOHBO_LAGHFAAHOBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPNAONKOHBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPNAONKOHBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPNAONKOHBO*))((::PBYTE)hIl2Cpp + EPNAONKOHBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPNAONKOHBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPNAONKOHBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPNAONKOHBO*))((::PBYTE)hIl2Cpp + EPNAONKOHBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPNAONKOHBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
