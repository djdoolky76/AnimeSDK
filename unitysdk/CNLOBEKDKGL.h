#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCNGIAAHKP;
class CNLOBEKDKGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNLOBEKDKGL_AKNIIPGCPNF_OFFSET UNITYSDK_OFFSET(0x1E10ABA0)
#define CNLOBEKDKGL_BNJAOBOAKKJ_OFFSET UNITYSDK_OFFSET(0x1E10AB60)
#define CNLOBEKDKGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E10B080)
#define CNLOBEKDKGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10B550)
#define CNLOBEKDKGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E10AB20)
#define CNLOBEKDKGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E10AA20)
#define CNLOBEKDKGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10A9A0)
#define CNLOBEKDKGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E10AC00)
#define CNLOBEKDKGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E10ABD0)
#define CNLOBEKDKGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E10ABC0)
#define CNLOBEKDKGL_GDLOOENPKNL_OFFSET UNITYSDK_OFFSET(0x1E10AB80)
#define CNLOBEKDKGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E10ACC0)
#define CNLOBEKDKGL_ILPPGMDHHPI_OFFSET UNITYSDK_OFFSET(0x1E10AB70)
#define CNLOBEKDKGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E10A960)
#define CNLOBEKDKGL_LAIJONECJHE_OFFSET UNITYSDK_OFFSET(0x1E10AB50)
#define CNLOBEKDKGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E10B3F0)
#define CNLOBEKDKGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E10B310)
#define CNLOBEKDKGL_MHEMOKDHCIK_OFFSET UNITYSDK_OFFSET(0x1E10AB90)
#define CNLOBEKDKGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E10ABB0)
#define CNLOBEKDKGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E10A990)
#define CNLOBEKDKGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E10AE30)
#define CNLOBEKDKGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E10AE90)

	class CNLOBEKDKGL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IONILEADFMC; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>* FDJNENCJIIH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 LOGLILAIDHI; // 0x2C
		::System::Int64 JNBFEPBPFBP; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_AEEBONINHPA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CNLOBEKDKGL")->GetStaticField(0x1FE00);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MDODEAGKAJC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CNLOBEKDKGL")->GetStaticField(0x1FE08);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CNLOBEKDKGL")->GetStaticField(0x1FE10);
		}

		// static const ::System::Object PEBHOADGIJJ; // 0x0
		// static const ::System::Object PPEKKOJJNGA; // 0x0
		// static const ::System::Object LHPFJJBFNGK; // 0x0
		// static const ::System::Object HJNEIAJJEFA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNLOBEKDKGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNLOBEKDKGL*))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNLOBEKDKGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CNLOBEKDKGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNLOBEKDKGL* Clone()
		{
			return ((::CNLOBEKDKGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_CLONE_OFFSET))(this);
		}

		::System::Int64 LAIJONECJHE()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_LAIJONECJHE_OFFSET))(this);
		}

		::System::Void BNJAOBOAKKJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_BNJAOBOAKKJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>* ILPPGMDHHPI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_ILPPGMDHHPI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GDLOOENPKNL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_GDLOOENPKNL_OFFSET))(this);
		}

		::System::UInt32 MHEMOKDHCIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_MHEMOKDHCIK_OFFSET))(this);
		}

		::System::Void AKNIIPGCPNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_AKNIIPGCPNF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNLOBEKDKGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNLOBEKDKGL*))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNLOBEKDKGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNLOBEKDKGL*))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNLOBEKDKGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
