#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNLKMHLAPHC;
class LDKMOFFMGEL;
class OCBPJLLLJGO;
class OKCCLEEPELM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNLKMHLAPHC_BHNEPICNJKN_OFFSET UNITYSDK_OFFSET(0x201E8720)
#define DNLKMHLAPHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201E8C20)
#define DNLKMHLAPHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x201E9070)
#define DNLKMHLAPHC_CLONE_OFFSET UNITYSDK_OFFSET(0x201E86B0)
#define DNLKMHLAPHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201E8560)
#define DNLKMHLAPHC_CTOR_OFFSET UNITYSDK_OFFSET(0x201E84E0)
#define DNLKMHLAPHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201E8760)
#define DNLKMHLAPHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x201E8730)
#define DNLKMHLAPHC_FFKMMLDHADC_OFFSET UNITYSDK_OFFSET(0x201E8710)
#define DNLKMHLAPHC_FHIDLAPDHAC_OFFSET UNITYSDK_OFFSET(0x201E86F0)
#define DNLKMHLAPHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201E8980)
#define DNLKMHLAPHC_IDLJAPMKHPF_OFFSET UNITYSDK_OFFSET(0x201E86E0)
#define DNLKMHLAPHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201E84A0)
#define DNLKMHLAPHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201E8EE0)
#define DNLKMHLAPHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201E8D60)
#define DNLKMHLAPHC_ODFFLEFHIAO_OFFSET UNITYSDK_OFFSET(0x201E8700)
#define DNLKMHLAPHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201E84D0)
#define DNLKMHLAPHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201E8A50)
#define DNLKMHLAPHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x201E8AB0)

inline static constexpr unsigned int DNLKMHLAPHC_TypeDefinitionIndex = 33988;

	class DNLKMHLAPHC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* BCECNFBBEPJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::OCBPJLLLJGO* CCAGFEHMLBB; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::LDKMOFFMGEL*>* MAMPENIFDLA; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>* LFDHGBBGFNB; // 0x30
		static ::System::Object** StaticGet_ANFNDOEOGPL()
		{
			return (::System::Object**)UnitySDK::FromName("", "DNLKMHLAPHC")->GetStaticField(0x36800);
		}

		static ::Google::Protobuf::FieldCodec_1<::OKCCLEEPELM*>** StaticGet_CLENKJGJHNA()
		{
			return (::Google::Protobuf::FieldCodec_1<::OKCCLEEPELM*>**)UnitySDK::FromName("", "DNLKMHLAPHC")->GetStaticField(0x36808);
		}

		static ::Google::Protobuf::FieldCodec_1<::LDKMOFFMGEL*>** StaticGet_FEIMGEMCKPI()
		{
			return (::Google::Protobuf::FieldCodec_1<::LDKMOFFMGEL*>**)UnitySDK::FromName("", "DNLKMHLAPHC")->GetStaticField(0x36810);
		}

		static ::Google::Protobuf::MessageParser_1<::DNLKMHLAPHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DNLKMHLAPHC*>**)UnitySDK::FromName("", "DNLKMHLAPHC")->GetStaticField(0x36818);
		}

		// static const ::System::Object MBCNLBAKJPP; // 0x0
		// static const ::System::Object DJKJOEHDLPP; // 0x0
		// static const ::System::Object PFCAIKEPKAC; // 0x0
		// static const ::System::Object KEMHBMADPML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNLKMHLAPHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNLKMHLAPHC*))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNLKMHLAPHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DNLKMHLAPHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DNLKMHLAPHC*>*(*)())((::PBYTE)hIl2Cpp + DNLKMHLAPHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNLKMHLAPHC* Clone()
		{
			return ((::DNLKMHLAPHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IDLJAPMKHPF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_IDLJAPMKHPF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>* FHIDLAPDHAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_FHIDLAPDHAC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LDKMOFFMGEL*>* ODFFLEFHIAO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LDKMOFFMGEL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_ODFFLEFHIAO_OFFSET))(this);
		}

		::OCBPJLLLJGO* FFKMMLDHADC()
		{
			return ((::OCBPJLLLJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_FFKMMLDHADC_OFFSET))(this);
		}

		::System::Void BHNEPICNJKN(::OCBPJLLLJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBPJLLLJGO*))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_BHNEPICNJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNLKMHLAPHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNLKMHLAPHC*))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNLKMHLAPHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNLKMHLAPHC*))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNLKMHLAPHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
