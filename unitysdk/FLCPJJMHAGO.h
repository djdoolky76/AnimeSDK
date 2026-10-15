#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLCPJJMHAGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLCPJJMHAGO_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1E389240)
#define FLCPJJMHAGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E389640)
#define FLCPJJMHAGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E389940)
#define FLCPJJMHAGO_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1E389260)
#define FLCPJJMHAGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3891B0)
#define FLCPJJMHAGO_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E389280)
#define FLCPJJMHAGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E389180)
#define FLCPJJMHAGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E389170)
#define FLCPJJMHAGO_DNGEOHDDIHA_OFFSET UNITYSDK_OFFSET(0x1E389230)
#define FLCPJJMHAGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E389330)
#define FLCPJJMHAGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3892A0)
#define FLCPJJMHAGO_FAHNIHCFNOG_OFFSET UNITYSDK_OFFSET(0x1E389220)
#define FLCPJJMHAGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E389410)
#define FLCPJJMHAGO_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1E389270)
#define FLCPJJMHAGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E389100)
#define FLCPJJMHAGO_MDBICAHKDGN_OFFSET UNITYSDK_OFFSET(0x1E389250)
#define FLCPJJMHAGO_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E389290)
#define FLCPJJMHAGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3898A0)
#define FLCPJJMHAGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E389850)
#define FLCPJJMHAGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E389160)
#define FLCPJJMHAGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E389450)
#define FLCPJJMHAGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3894B0)

inline static constexpr unsigned int FLCPJJMHAGO_TypeDefinitionIndex = 32690;

	class FLCPJJMHAGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 GJJDLFJNHFJ; // 0x1C
		::System::UInt32 DIHAPDNPDHC; // 0x20
		::System::UInt32 DDKDAHKMBFL; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FLCPJJMHAGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FLCPJJMHAGO*>**)UnitySDK::FromName("", "FLCPJJMHAGO")->GetStaticField(0x59C10);
		}

		// static const ::System::Object OBJDFPPBDAA; // 0x0
		// static const ::System::Object IDOEGHDABLM; // 0x0
		// static const ::System::Object ACLKHKBOAIH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLCPJJMHAGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCPJJMHAGO*))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLCPJJMHAGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FLCPJJMHAGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FLCPJJMHAGO*>*(*)())((::PBYTE)hIl2Cpp + FLCPJJMHAGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLCPJJMHAGO* Clone()
		{
			return ((::FLCPJJMHAGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_CLONE_OFFSET))(this);
		}

		::System::UInt32 FAHNIHCFNOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_FAHNIHCFNOG_OFFSET))(this);
		}

		::System::Void DNGEOHDDIHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_DNGEOHDDIHA_OFFSET))(this, a1);
		}

		::System::UInt32 ADAHCAJBNOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Void MDBICAHKDGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_MDBICAHKDGN_OFFSET))(this, a1);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLCPJJMHAGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLCPJJMHAGO*))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLCPJJMHAGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCPJJMHAGO*))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLCPJJMHAGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
