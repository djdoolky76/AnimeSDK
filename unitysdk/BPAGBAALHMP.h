#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPAGBAALHMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPAGBAALHMP_BNILOLHEKLI_OFFSET UNITYSDK_OFFSET(0x1E040090)
#define BPAGBAALHMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E040490)
#define BPAGBAALHMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E040730)
#define BPAGBAALHMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E040010)
#define BPAGBAALHMP_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E040060)
#define BPAGBAALHMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E03FFD0)
#define BPAGBAALHMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03FFC0)
#define BPAGBAALHMP_DFDNIPKJDGO_OFFSET UNITYSDK_OFFSET(0x1E0400A0)
#define BPAGBAALHMP_EHJAAPOMLDC_OFFSET UNITYSDK_OFFSET(0x1E0400B0)
#define BPAGBAALHMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E040140)
#define BPAGBAALHMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0400E0)
#define BPAGBAALHMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E040230)
#define BPAGBAALHMP_HIAJNGLMJHM_OFFSET UNITYSDK_OFFSET(0x1E0400C0)
#define BPAGBAALHMP_HOBJFPKDKIB_OFFSET UNITYSDK_OFFSET(0x1E040080)
#define BPAGBAALHMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E03FF80)
#define BPAGBAALHMP_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E040070)
#define BPAGBAALHMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E040680)
#define BPAGBAALHMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E040630)
#define BPAGBAALHMP_MHBEGNMEBEN_OFFSET UNITYSDK_OFFSET(0x1E0400D0)
#define BPAGBAALHMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E03FFB0)
#define BPAGBAALHMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E040260)
#define BPAGBAALHMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0402C0)

	class BPAGBAALHMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 NMIHIAODBLH; // 0x1C
		::System::UInt32 ACEPPABIBND; // 0x20
		::System::Boolean MOOADFFCELF; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPAGBAALHMP")->GetStaticField(0x34240);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object EKNBEHKPHHA; // 0x0
		// static const ::System::Object NCLAGAHHBFL; // 0x0
		// static const ::System::Object JNNEPNDIKJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPAGBAALHMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPAGBAALHMP*))((::PBYTE)hIl2Cpp + BPAGBAALHMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPAGBAALHMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPAGBAALHMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPAGBAALHMP* Clone()
		{
			return ((::BPAGBAALHMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPAGBAALHMP_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 HOBJFPKDKIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_HOBJFPKDKIB_OFFSET))(this);
		}

		::System::Void BNILOLHEKLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPAGBAALHMP_BNILOLHEKLI_OFFSET))(this, a1);
		}

		::System::Boolean DFDNIPKJDGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_DFDNIPKJDGO_OFFSET))(this);
		}

		::System::Void EHJAAPOMLDC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPAGBAALHMP_EHJAAPOMLDC_OFFSET))(this, a1);
		}

		::System::UInt32 HIAJNGLMJHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_HIAJNGLMJHM_OFFSET))(this);
		}

		::System::Void MHBEGNMEBEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPAGBAALHMP_MHBEGNMEBEN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPAGBAALHMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPAGBAALHMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPAGBAALHMP*))((::PBYTE)hIl2Cpp + BPAGBAALHMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPAGBAALHMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPAGBAALHMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPAGBAALHMP*))((::PBYTE)hIl2Cpp + BPAGBAALHMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPAGBAALHMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
