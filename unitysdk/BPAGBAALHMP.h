#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPAGBAALHMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPAGBAALHMP_BNILOLHEKLI_OFFSET UNITYSDK_OFFSET(0x1E012AE0)
#define BPAGBAALHMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E012EE0)
#define BPAGBAALHMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E013180)
#define BPAGBAALHMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E012A60)
#define BPAGBAALHMP_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E012AB0)
#define BPAGBAALHMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E012A20)
#define BPAGBAALHMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E012A10)
#define BPAGBAALHMP_DFDNIPKJDGO_OFFSET UNITYSDK_OFFSET(0x1E012AF0)
#define BPAGBAALHMP_EHJAAPOMLDC_OFFSET UNITYSDK_OFFSET(0x1E012B00)
#define BPAGBAALHMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E012B90)
#define BPAGBAALHMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E012B30)
#define BPAGBAALHMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E012C80)
#define BPAGBAALHMP_HIAJNGLMJHM_OFFSET UNITYSDK_OFFSET(0x1E012B10)
#define BPAGBAALHMP_HOBJFPKDKIB_OFFSET UNITYSDK_OFFSET(0x1E012AD0)
#define BPAGBAALHMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0129D0)
#define BPAGBAALHMP_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E012AC0)
#define BPAGBAALHMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0130D0)
#define BPAGBAALHMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E013080)
#define BPAGBAALHMP_MHBEGNMEBEN_OFFSET UNITYSDK_OFFSET(0x1E012B20)
#define BPAGBAALHMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E012A00)
#define BPAGBAALHMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E012CB0)
#define BPAGBAALHMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E012D10)

inline static constexpr unsigned int BPAGBAALHMP_TypeDefinitionIndex = 30849;

	class BPAGBAALHMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ACEPPABIBND; // 0x18
		::System::UInt32 NMIHIAODBLH; // 0x1C
		::System::Boolean MOOADFFCELF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 DNKADAFBILN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::BPAGBAALHMP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPAGBAALHMP*>**)UnitySDK::FromName("", "BPAGBAALHMP")->GetStaticField(0x3C700);
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

		static ::Google::Protobuf::MessageParser_1<::BPAGBAALHMP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPAGBAALHMP*>*(*)())((::PBYTE)hIl2Cpp + BPAGBAALHMP_JJGHOBBFNJD_OFFSET))();
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
