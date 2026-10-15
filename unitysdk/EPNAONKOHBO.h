#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPNAONKOHBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPNAONKOHBO_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E3188A0)
#define EPNAONKOHBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E318E80)
#define EPNAONKOHBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E319220)
#define EPNAONKOHBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3187D0)
#define EPNAONKOHBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E318780)
#define EPNAONKOHBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E318770)
#define EPNAONKOHBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E318900)
#define EPNAONKOHBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3188D0)
#define EPNAONKOHBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E318B20)
#define EPNAONKOHBO_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E318890)
#define EPNAONKOHBO_IHDPOPKDFKO_OFFSET UNITYSDK_OFFSET(0x1E3188B0)
#define EPNAONKOHBO_JCNGFJJCPDE_OFFSET UNITYSDK_OFFSET(0x1E318830)
#define EPNAONKOHBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E318730)
#define EPNAONKOHBO_LAGHFAAHOBL_OFFSET UNITYSDK_OFFSET(0x1E3188C0)
#define EPNAONKOHBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E318FE0)
#define EPNAONKOHBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E318F80)
#define EPNAONKOHBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E318760)
#define EPNAONKOHBO_PMFOEMJKNHA_OFFSET UNITYSDK_OFFSET(0x1E318840)
#define EPNAONKOHBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E318CC0)
#define EPNAONKOHBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E318D20)

	class EPNAONKOHBO : public ::System::Object
	{
	public:
		::System::String* OKPDLDHJNPG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BFOBOOGAHKB; // 0x20
		::System::Byte _padding0[0x4];
		::System::Double AHNEBPEHFLP; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EPNAONKOHBO")->GetStaticField(0x48EF0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EPNAONKOHBO_JJGHOBBFNJD_OFFSET))();
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
