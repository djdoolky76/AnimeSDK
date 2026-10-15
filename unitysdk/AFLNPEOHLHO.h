#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFLNPEOHLHO;
class ENHOPAHGCMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFLNPEOHLHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E11AF00)
#define AFLNPEOHLHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11B2C0)
#define AFLNPEOHLHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11AA50)
#define AFLNPEOHLHO_COAGFOEMIEN_OFFSET UNITYSDK_OFFSET(0x1E11AAC0)
#define AFLNPEOHLHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11A9B0)
#define AFLNPEOHLHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11A970)
#define AFLNPEOHLHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11AB20)
#define AFLNPEOHLHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11AAF0)
#define AFLNPEOHLHO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E11AA90)
#define AFLNPEOHLHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11AC60)
#define AFLNPEOHLHO_HFJFACBLDBA_OFFSET UNITYSDK_OFFSET(0x1E11AAE0)
#define AFLNPEOHLHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E11A930)
#define AFLNPEOHLHO_LILPAEPPLLM_OFFSET UNITYSDK_OFFSET(0x1E11AAA0)
#define AFLNPEOHLHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E11B1D0)
#define AFLNPEOHLHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E11B110)
#define AFLNPEOHLHO_NPEHKCINAKB_OFFSET UNITYSDK_OFFSET(0x1E11AAD0)
#define AFLNPEOHLHO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E11AA80)
#define AFLNPEOHLHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11A960)
#define AFLNPEOHLHO_PLCKNFONJME_OFFSET UNITYSDK_OFFSET(0x1E11AAB0)
#define AFLNPEOHLHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E11ACE0)
#define AFLNPEOHLHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E11AD40)

inline static constexpr unsigned int AFLNPEOHLHO_TypeDefinitionIndex = 34333;

	class AFLNPEOHLHO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ENHOPAHGCMA*>* FNGCFMKPAIE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 PKNLCELCAEN; // 0x20
		::System::UInt32 ELLIDGEKFHN; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AFLNPEOHLHO")->GetStaticField(0x2ED00);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AEGJKIMLDHD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AFLNPEOHLHO")->GetStaticField(0x2ED08);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HJNJPODDMEG; // 0x0
		// static const ::System::Object JMACJHNFKJB; // 0x0
		// static const ::System::Object HINMOKFLLHM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFLNPEOHLHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFLNPEOHLHO*))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFLNPEOHLHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AFLNPEOHLHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFLNPEOHLHO* Clone()
		{
			return ((::AFLNPEOHLHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 LILPAEPPLLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_LILPAEPPLLM_OFFSET))(this);
		}

		::System::Void PLCKNFONJME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_PLCKNFONJME_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ENHOPAHGCMA*>* COAGFOEMIEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ENHOPAHGCMA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_COAGFOEMIEN_OFFSET))(this);
		}

		::System::UInt32 NPEHKCINAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_NPEHKCINAKB_OFFSET))(this);
		}

		::System::Void HFJFACBLDBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_HFJFACBLDBA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFLNPEOHLHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFLNPEOHLHO*))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFLNPEOHLHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFLNPEOHLHO*))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFLNPEOHLHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
