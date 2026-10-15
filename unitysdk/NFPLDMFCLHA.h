#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFPLDMFCLHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFPLDMFCLHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB09D90)
#define NFPLDMFCLHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0A110)
#define NFPLDMFCLHA_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1EB09A40)
#define NFPLDMFCLHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB099A0)
#define NFPLDMFCLHA_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EB09A20)
#define NFPLDMFCLHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB09960)
#define NFPLDMFCLHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB09950)
#define NFPLDMFCLHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB09B00)
#define NFPLDMFCLHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB09A80)
#define NFPLDMFCLHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB09BD0)
#define NFPLDMFCLHA_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1EB09A50)
#define NFPLDMFCLHA_IFIBOILGKIJ_OFFSET UNITYSDK_OFFSET(0x1EB09A70)
#define NFPLDMFCLHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB098E0)
#define NFPLDMFCLHA_LDKEMHCFMMI_OFFSET UNITYSDK_OFFSET(0x1EB09A60)
#define NFPLDMFCLHA_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EB09A30)
#define NFPLDMFCLHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB09F70)
#define NFPLDMFCLHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB09F20)
#define NFPLDMFCLHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB09940)
#define NFPLDMFCLHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB09C00)
#define NFPLDMFCLHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB09C60)

inline static constexpr unsigned int NFPLDMFCLHA_TypeDefinitionIndex = 29572;

	class NFPLDMFCLHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EOCDLPPGOBC; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		::System::UInt32 GJJDLFJNHFJ; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NFPLDMFCLHA")->GetStaticField(0x5EEB0);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object ACLKHKBOAIH; // 0x0
		// static const ::System::Object GDOLLJGCMIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFPLDMFCLHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFPLDMFCLHA*))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFPLDMFCLHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NFPLDMFCLHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFPLDMFCLHA* Clone()
		{
			return ((::NFPLDMFCLHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::System::UInt32 LDKEMHCFMMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_LDKEMHCFMMI_OFFSET))(this);
		}

		::System::Void IFIBOILGKIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_IFIBOILGKIJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFPLDMFCLHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFPLDMFCLHA*))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFPLDMFCLHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFPLDMFCLHA*))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFPLDMFCLHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
