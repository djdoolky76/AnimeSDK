#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMBACDOFCAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMBACDOFCAL_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1FE48300)
#define FMBACDOFCAL_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1FE48330)
#define FMBACDOFCAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE48910)
#define FMBACDOFCAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE48D60)
#define FMBACDOFCAL_CKPDGGDDPLB_OFFSET UNITYSDK_OFFSET(0x1FE482E0)
#define FMBACDOFCAL_CLKLHEIJMKB_OFFSET UNITYSDK_OFFSET(0x1FE482D0)
#define FMBACDOFCAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE48260)
#define FMBACDOFCAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE481C0)
#define FMBACDOFCAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE48170)
#define FMBACDOFCAL_DIHNKFKMFDH_OFFSET UNITYSDK_OFFSET(0x1FE482F0)
#define FMBACDOFCAL_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1FE48310)
#define FMBACDOFCAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE48430)
#define FMBACDOFCAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE48360)
#define FMBACDOFCAL_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1FE482B0)
#define FMBACDOFCAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE484C0)
#define FMBACDOFCAL_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1FE48320)
#define FMBACDOFCAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE48100)
#define FMBACDOFCAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE48C20)
#define FMBACDOFCAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE48BA0)
#define FMBACDOFCAL_MHEPFMALBKJ_OFFSET UNITYSDK_OFFSET(0x1FE48340)
#define FMBACDOFCAL_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1FE482C0)
#define FMBACDOFCAL_OKLMNCNNIKF_OFFSET UNITYSDK_OFFSET(0x1FE48350)
#define FMBACDOFCAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE48160)
#define FMBACDOFCAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE48610)
#define FMBACDOFCAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE48670)

inline static constexpr unsigned int FMBACDOFCAL_TypeDefinitionIndex = 30560;

	class FMBACDOFCAL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* DHIJKNOLBJE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean JHBGKGDCHLH; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 HIOHMLINHPC; // 0x24
		::System::UInt32 PPNELLDGNPC; // 0x28
		::System::UInt32 NPFBAFODCBI; // 0x2C
		::System::UInt32 DNAGOBDKKEJ; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::System::UInt64>** StaticGet_EFFBEKEOGJO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt64>**)UnitySDK::FromName("", "FMBACDOFCAL")->GetStaticField(0x10770);
		}

		static ::Google::Protobuf::MessageParser_1<::FMBACDOFCAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FMBACDOFCAL*>**)UnitySDK::FromName("", "FMBACDOFCAL")->GetStaticField(0x10778);
		}

		// static const ::System::Object MIFCIPEBBEN; // 0x0
		// static const ::System::Object ONCNEMGOHKG; // 0x0
		// static const ::System::Object CFMNIKIMDEO; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object BAJOOGGCKOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMBACDOFCAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMBACDOFCAL*))((::PBYTE)hIl2Cpp + FMBACDOFCAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMBACDOFCAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FMBACDOFCAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FMBACDOFCAL*>*(*)())((::PBYTE)hIl2Cpp + FMBACDOFCAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMBACDOFCAL* Clone()
		{
			return ((::FMBACDOFCAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_CLONE_OFFSET))(this);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMBACDOFCAL_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::UInt32 CLKLHEIJMKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_CLKLHEIJMKB_OFFSET))(this);
		}

		::System::Void CKPDGGDDPLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMBACDOFCAL_CKPDGGDDPLB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* DIHNKFKMFDH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_DIHNKFKMFDH_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMBACDOFCAL_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMBACDOFCAL_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean MHEPFMALBKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_MHEPFMALBKJ_OFFSET))(this);
		}

		::System::Void OKLMNCNNIKF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMBACDOFCAL_OKLMNCNNIKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMBACDOFCAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMBACDOFCAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMBACDOFCAL*))((::PBYTE)hIl2Cpp + FMBACDOFCAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMBACDOFCAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMBACDOFCAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMBACDOFCAL*))((::PBYTE)hIl2Cpp + FMBACDOFCAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMBACDOFCAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
