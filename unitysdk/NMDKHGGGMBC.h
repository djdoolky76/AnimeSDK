#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMDKHGGGMBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMDKHGGGMBC_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1EB6EFA0)
#define NMDKHGGGMBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB6F4A0)
#define NMDKHGGGMBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F890)
#define NMDKHGGGMBC_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1EB6EFD0)
#define NMDKHGGGMBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB6EF70)
#define NMDKHGGGMBC_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EB6EFF0)
#define NMDKHGGGMBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB6EED0)
#define NMDKHGGGMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6EE80)
#define NMDKHGGGMBC_DNGEOHDDIHA_OFFSET UNITYSDK_OFFSET(0x1EB6F020)
#define NMDKHGGGMBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB6F0C0)
#define NMDKHGGGMBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB6F030)
#define NMDKHGGGMBC_FAHNIHCFNOG_OFFSET UNITYSDK_OFFSET(0x1EB6F010)
#define NMDKHGGGMBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB6F140)
#define NMDKHGGGMBC_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1EB6EFE0)
#define NMDKHGGGMBC_HMFDFKOMOKA_OFFSET UNITYSDK_OFFSET(0x1EB6EFC0)
#define NMDKHGGGMBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB6EE40)
#define NMDKHGGGMBC_MDBICAHKDGN_OFFSET UNITYSDK_OFFSET(0x1EB6EFB0)
#define NMDKHGGGMBC_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EB6F000)
#define NMDKHGGGMBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB6F780)
#define NMDKHGGGMBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB6F710)
#define NMDKHGGGMBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB6EE70)
#define NMDKHGGGMBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB6F250)
#define NMDKHGGGMBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB6F2B0)

inline static constexpr unsigned int NMDKHGGGMBC_TypeDefinitionIndex = 33195;

	class NMDKHGGGMBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KGMAMFDOKCM; // 0x18
		::System::UInt32 DDKDAHKMBFL; // 0x20
		::System::UInt32 DIHAPDNPDHC; // 0x24
		::System::UInt32 GJJDLFJNHFJ; // 0x28
		::System::UInt32 DNKADAFBILN; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_HDBEFONIMBP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NMDKHGGGMBC")->GetStaticField(0x64260);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMDKHGGGMBC")->GetStaticField(0x64268);
		}

		// static const ::System::Object IDOEGHDABLM; // 0x0
		// static const ::System::Object LCKGOECHFHK; // 0x0
		// static const ::System::Object ACLKHKBOAIH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object OBJDFPPBDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMDKHGGGMBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMDKHGGGMBC*))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMDKHGGGMBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMDKHGGGMBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMDKHGGGMBC* Clone()
		{
			return ((::NMDKHGGGMBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 ADAHCAJBNOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Void MDBICAHKDGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_MDBICAHKDGN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HMFDFKOMOKA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_HMFDFKOMOKA_OFFSET))(this);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 FAHNIHCFNOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_FAHNIHCFNOG_OFFSET))(this);
		}

		::System::Void DNGEOHDDIHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_DNGEOHDDIHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMDKHGGGMBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMDKHGGGMBC*))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMDKHGGGMBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMDKHGGGMBC*))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMDKHGGGMBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
