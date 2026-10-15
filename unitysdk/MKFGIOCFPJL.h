#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKFGIOCFPJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKFGIOCFPJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2AAA0)
#define MKFGIOCFPJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2AD70)
#define MKFGIOCFPJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2A6F0)
#define MKFGIOCFPJL_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EA2A740)
#define MKFGIOCFPJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2A6C0)
#define MKFGIOCFPJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2A6B0)
#define MKFGIOCFPJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2A860)
#define MKFGIOCFPJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2A780)
#define MKFGIOCFPJL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA2A770)
#define MKFGIOCFPJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2A930)
#define MKFGIOCFPJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2A670)
#define MKFGIOCFPJL_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EA2A750)
#define MKFGIOCFPJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2ABF0)
#define MKFGIOCFPJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2ABB0)
#define MKFGIOCFPJL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA2A760)
#define MKFGIOCFPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2A6A0)
#define MKFGIOCFPJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2A960)
#define MKFGIOCFPJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2A9C0)

inline static constexpr unsigned int MKFGIOCFPJL_TypeDefinitionIndex = 26260;

	class MKFGIOCFPJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MKFGIOCFPJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKFGIOCFPJL*>**)UnitySDK::FromName("", "MKFGIOCFPJL")->GetStaticField(0x54FC0);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKFGIOCFPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKFGIOCFPJL*))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKFGIOCFPJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKFGIOCFPJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKFGIOCFPJL*>*(*)())((::PBYTE)hIl2Cpp + MKFGIOCFPJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKFGIOCFPJL* Clone()
		{
			return ((::MKFGIOCFPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKFGIOCFPJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKFGIOCFPJL*))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKFGIOCFPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKFGIOCFPJL*))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKFGIOCFPJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
