#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBNKDHCIJPH;
class IGGFCPNDMPN;
class NILCAHCBKAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NILCAHCBKAI_BAIKLBAKKAA_OFFSET UNITYSDK_OFFSET(0x1EB07F90)
#define NILCAHCBKAI_BHAIJEPEKCC_OFFSET UNITYSDK_OFFSET(0x1EB07F80)
#define NILCAHCBKAI_BHICBDDJEOK_OFFSET UNITYSDK_OFFSET(0x1EB07F70)
#define NILCAHCBKAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB083D0)
#define NILCAHCBKAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB08810)
#define NILCAHCBKAI_CJAEFFDMFLE_OFFSET UNITYSDK_OFFSET(0x1EB07FA0)
#define NILCAHCBKAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB07F20)
#define NILCAHCBKAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB07E10)
#define NILCAHCBKAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB07DA0)
#define NILCAHCBKAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB07FE0)
#define NILCAHCBKAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB07FB0)
#define NILCAHCBKAI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB07F60)
#define NILCAHCBKAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB08140)
#define NILCAHCBKAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB07D60)
#define NILCAHCBKAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB086C0)
#define NILCAHCBKAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB085B0)
#define NILCAHCBKAI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB07F50)
#define NILCAHCBKAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB07D90)
#define NILCAHCBKAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB081D0)
#define NILCAHCBKAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB08230)

inline static constexpr unsigned int NILCAHCBKAI_TypeDefinitionIndex = 30072;

	class NILCAHCBKAI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EBNKDHCIJPH*>* CIBKHIKKINF; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IGGFCPNDMPN*>* GHANEPMJGHE; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 FHFCAEIANDB; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::IGGFCPNDMPN*>** StaticGet_BCAOBNFHPLG()
		{
			return (::Google::Protobuf::FieldCodec_1<::IGGFCPNDMPN*>**)UnitySDK::FromName("", "NILCAHCBKAI")->GetStaticField(0x68290);
		}

		static ::Google::Protobuf::MessageParser_1<::NILCAHCBKAI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NILCAHCBKAI*>**)UnitySDK::FromName("", "NILCAHCBKAI")->GetStaticField(0x68298);
		}

		static ::Google::Protobuf::FieldCodec_1<::EBNKDHCIJPH*>** StaticGet_LJDPEGFBMMP()
		{
			return (::Google::Protobuf::FieldCodec_1<::EBNKDHCIJPH*>**)UnitySDK::FromName("", "NILCAHCBKAI")->GetStaticField(0x682A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KIJCKCJKDEB; // 0x0
		// static const ::System::Object PDANNONFHNI; // 0x0
		// static const ::System::Object EHLHPFCLFII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NILCAHCBKAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILCAHCBKAI*))((::PBYTE)hIl2Cpp + NILCAHCBKAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILCAHCBKAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NILCAHCBKAI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NILCAHCBKAI*>*(*)())((::PBYTE)hIl2Cpp + NILCAHCBKAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NILCAHCBKAI* Clone()
		{
			return ((::NILCAHCBKAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NILCAHCBKAI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IGGFCPNDMPN*>* BHICBDDJEOK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IGGFCPNDMPN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_BHICBDDJEOK_OFFSET))(this);
		}

		::System::UInt32 BHAIJEPEKCC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_BHAIJEPEKCC_OFFSET))(this);
		}

		::System::Void BAIKLBAKKAA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NILCAHCBKAI_BAIKLBAKKAA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EBNKDHCIJPH*>* CJAEFFDMFLE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EBNKDHCIJPH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_CJAEFFDMFLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NILCAHCBKAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NILCAHCBKAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NILCAHCBKAI*))((::PBYTE)hIl2Cpp + NILCAHCBKAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NILCAHCBKAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NILCAHCBKAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILCAHCBKAI*))((::PBYTE)hIl2Cpp + NILCAHCBKAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NILCAHCBKAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
