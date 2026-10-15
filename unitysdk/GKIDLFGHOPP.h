#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKIDLFGHOPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKIDLFGHOPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B68B0)
#define GKIDLFGHOPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B6B80)
#define GKIDLFGHOPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B6500)
#define GKIDLFGHOPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B64D0)
#define GKIDLFGHOPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B64C0)
#define GKIDLFGHOPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B6670)
#define GKIDLFGHOPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B6590)
#define GKIDLFGHOPP_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1E4B6570)
#define GKIDLFGHOPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B6740)
#define GKIDLFGHOPP_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E4B6560)
#define GKIDLFGHOPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B6480)
#define GKIDLFGHOPP_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1E4B6580)
#define GKIDLFGHOPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B6A00)
#define GKIDLFGHOPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B69C0)
#define GKIDLFGHOPP_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E4B6550)
#define GKIDLFGHOPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B64B0)
#define GKIDLFGHOPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B6770)
#define GKIDLFGHOPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B67D0)

inline static constexpr unsigned int GKIDLFGHOPP_TypeDefinitionIndex = 26289;

	class GKIDLFGHOPP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 OEPOBIODAJH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GKIDLFGHOPP")->GetStaticField(0x1C8C0);
		}

		// static const ::System::Object BPLJLIMECGH; // 0x0
		// static const ::System::Object EAEDBOGGHCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKIDLFGHOPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKIDLFGHOPP*))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKIDLFGHOPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GKIDLFGHOPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKIDLFGHOPP* Clone()
		{
			return ((::GKIDLFGHOPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKIDLFGHOPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKIDLFGHOPP*))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKIDLFGHOPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKIDLFGHOPP*))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKIDLFGHOPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
