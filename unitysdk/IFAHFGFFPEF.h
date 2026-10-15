#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMOPLAHDEPN;
class IFAHFGFFPEF;
class OLOFPKHFPJL;
class PMMOFOBCINL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFAHFGFFPEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E641EE0)
#define IFAHFGFFPEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E642450)
#define IFAHFGFFPEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6417D0)
#define IFAHFGFFPEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E641640)
#define IFAHFGFFPEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6415A0)
#define IFAHFGFFPEF_DJEOJNCPAGI_OFFSET UNITYSDK_OFFSET(0x1E641870)
#define IFAHFGFFPEF_EGLGKOAFDGJ_OFFSET UNITYSDK_OFFSET(0x1E641860)
#define IFAHFGFFPEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6418C0)
#define IFAHFGFFPEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E641890)
#define IFAHFGFFPEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E641A70)
#define IFAHFGFFPEF_HDLHIOIOKIB_OFFSET UNITYSDK_OFFSET(0x1E641810)
#define IFAHFGFFPEF_HEOIGNCBMKL_OFFSET UNITYSDK_OFFSET(0x1E641850)
#define IFAHFGFFPEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E641560)
#define IFAHFGFFPEF_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1E641800)
#define IFAHFGFFPEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E642260)
#define IFAHFGFFPEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6420D0)
#define IFAHFGFFPEF_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E641830)
#define IFAHFGFFPEF_NHJDKLCFPPP_OFFSET UNITYSDK_OFFSET(0x1E641880)
#define IFAHFGFFPEF_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E641820)
#define IFAHFGFFPEF_OEEPEMKFPMI_OFFSET UNITYSDK_OFFSET(0x1E641840)
#define IFAHFGFFPEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E641590)
#define IFAHFGFFPEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E641C00)
#define IFAHFGFFPEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E641C60)

inline static constexpr unsigned int IFAHFGFFPEF_TypeDefinitionIndex = 26980;

	class IFAHFGFFPEF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PMMOFOBCINL*>* IMFLPFHCLLE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::CMOPLAHDEPN*>* PEMJIAEKMAC; // 0x20
		::OLOFPKHFPJL* GCJPLPAAKPI; // 0x28
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x30
		::System::Boolean HAEKCLLKFIE; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 ABPDPMHFFNN; // 0x3C
		static ::Google::Protobuf::FieldCodec** StaticGet_AGOMCLEMOCM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IFAHFGFFPEF")->GetStaticField(0x34DC0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IFAHFGFFPEF")->GetStaticField(0x34DC8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FIDJAJMOHMI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IFAHFGFFPEF")->GetStaticField(0x34DD0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IFAHFGFFPEF")->GetStaticField(0x34DD8);
		}

		// static const ::System::Object PMGMOKACFAP; // 0x0
		// static const ::System::Object DBILGGFGOHO; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object LEPEIOHJLBP; // 0x0
		// static const ::System::Object FMFKHGPLEFN; // 0x0
		// static const ::System::Object OGMPFFNLOGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFAHFGFFPEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFAHFGFFPEF*))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFAHFGFFPEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IFAHFGFFPEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFAHFGFFPEF* Clone()
		{
			return ((::IFAHFGFFPEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_KHINOGAEHBI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CMOPLAHDEPN*>* HDLHIOIOKIB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CMOPLAHDEPN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_HDLHIOIOKIB_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::OLOFPKHFPJL* OEEPEMKFPMI()
		{
			return ((::OLOFPKHFPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_OEEPEMKFPMI_OFFSET))(this);
		}

		::System::Void HEOIGNCBMKL(::OLOFPKHFPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_HEOIGNCBMKL_OFFSET))(this, a1);
		}

		::System::Boolean EGLGKOAFDGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_EGLGKOAFDGJ_OFFSET))(this);
		}

		::System::Void DJEOJNCPAGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_DJEOJNCPAGI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PMMOFOBCINL*>* NHJDKLCFPPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PMMOFOBCINL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_NHJDKLCFPPP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFAHFGFFPEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFAHFGFFPEF*))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFAHFGFFPEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFAHFGFFPEF*))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFAHFGFFPEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
