#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class JDEOFEHDNNO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDEOFEHDNNO_AOHMPMGEMCO_OFFSET UNITYSDK_OFFSET(0x20423B10)
#define JDEOFEHDNNO_BJOLHAGNCBO_OFFSET UNITYSDK_OFFSET(0x20423B20)
#define JDEOFEHDNNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20424070)
#define JDEOFEHDNNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x204245B0)
#define JDEOFEHDNNO_CLONE_OFFSET UNITYSDK_OFFSET(0x20423A80)
#define JDEOFEHDNNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20423980)
#define JDEOFEHDNNO_CTOR_OFFSET UNITYSDK_OFFSET(0x20423900)
#define JDEOFEHDNNO_DAKNBHCAMCJ_OFFSET UNITYSDK_OFFSET(0x20423B00)
#define JDEOFEHDNNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20423B80)
#define JDEOFEHDNNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x20423B50)
#define JDEOFEHDNNO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20423AD0)
#define JDEOFEHDNNO_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x20423AF0)
#define JDEOFEHDNNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20423C50)
#define JDEOFEHDNNO_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x20423AE0)
#define JDEOFEHDNNO_JEGKBGIAGHE_OFFSET UNITYSDK_OFFSET(0x20423B40)
#define JDEOFEHDNNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204238C0)
#define JDEOFEHDNNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20424430)
#define JDEOFEHDNNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20424340)
#define JDEOFEHDNNO_MFEOGNJHKFF_OFFSET UNITYSDK_OFFSET(0x20423AB0)
#define JDEOFEHDNNO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20423AC0)
#define JDEOFEHDNNO_OKECLDJMCGM_OFFSET UNITYSDK_OFFSET(0x20423B30)
#define JDEOFEHDNNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204238F0)
#define JDEOFEHDNNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20423DC0)
#define JDEOFEHDNNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x20423E20)

inline static constexpr unsigned int JDEOFEHDNNO_TypeDefinitionIndex = 28464;

	class JDEOFEHDNNO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FGILDMDHGCC; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* DLJHIJMGCPA; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 FOCHCNLAJMO; // 0x2C
		::System::UInt32 ONBLECANLGG; // 0x30
		::System::UInt32 AENFHPAGFOI; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_OJBKKDEKBEA()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "JDEOFEHDNNO")->GetStaticField(0x5C9D0);
		}

		static ::Google::Protobuf::MessageParser_1<::JDEOFEHDNNO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDEOFEHDNNO*>**)UnitySDK::FromName("", "JDEOFEHDNNO")->GetStaticField(0x5C9D8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HOIAKFMIFAP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JDEOFEHDNNO")->GetStaticField(0x5C9E0);
		}

		// static const ::System::Object NBHKOMHDALG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HLGEDBNIHII; // 0x0
		// static const ::System::Object GDALMOIAKFJ; // 0x0
		// static const ::System::Object GLFOANODDGK; // 0x0
		// static const ::System::Object BMLOKIBOIHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDEOFEHDNNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDEOFEHDNNO*))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDEOFEHDNNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDEOFEHDNNO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDEOFEHDNNO*>*(*)())((::PBYTE)hIl2Cpp + JDEOFEHDNNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDEOFEHDNNO* Clone()
		{
			return ((::JDEOFEHDNNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* MFEOGNJHKFF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_MFEOGNJHKFF_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::UInt32 DAKNBHCAMCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_DAKNBHCAMCJ_OFFSET))(this);
		}

		::System::Void AOHMPMGEMCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_AOHMPMGEMCO_OFFSET))(this, a1);
		}

		::System::UInt32 BJOLHAGNCBO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_BJOLHAGNCBO_OFFSET))(this);
		}

		::System::Void OKECLDJMCGM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_OKECLDJMCGM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JEGKBGIAGHE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_JEGKBGIAGHE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDEOFEHDNNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDEOFEHDNNO*))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDEOFEHDNNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDEOFEHDNNO*))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDEOFEHDNNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
