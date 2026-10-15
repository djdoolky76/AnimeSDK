#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCNGIAAHKP;
class HKCILGGEEFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKCILGGEEFM_AKNIIPGCPNF_OFFSET UNITYSDK_OFFSET(0x1E580B80)
#define HKCILGGEEFM_BNJAOBOAKKJ_OFFSET UNITYSDK_OFFSET(0x1E580BB0)
#define HKCILGGEEFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5810F0)
#define HKCILGGEEFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E581520)
#define HKCILGGEEFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E580B40)
#define HKCILGGEEFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E580A40)
#define HKCILGGEEFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5809C0)
#define HKCILGGEEFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E580C00)
#define HKCILGGEEFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E580BD0)
#define HKCILGGEEFM_GDLOOENPKNL_OFFSET UNITYSDK_OFFSET(0x1E580BC0)
#define HKCILGGEEFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E580D60)
#define HKCILGGEEFM_ILPPGMDHHPI_OFFSET UNITYSDK_OFFSET(0x1E580B90)
#define HKCILGGEEFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E580980)
#define HKCILGGEEFM_LAIJONECJHE_OFFSET UNITYSDK_OFFSET(0x1E580BA0)
#define HKCILGGEEFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5813E0)
#define HKCILGGEEFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E581310)
#define HKCILGGEEFM_MHEMOKDHCIK_OFFSET UNITYSDK_OFFSET(0x1E580B70)
#define HKCILGGEEFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5809B0)
#define HKCILGGEEFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E580ED0)
#define HKCILGGEEFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E580F30)

inline static constexpr unsigned int HKCILGGEEFM_TypeDefinitionIndex = 28200;

	class HKCILGGEEFM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IONILEADFMC; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>* FDJNENCJIIH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Int64 JNBFEPBPFBP; // 0x28
		::System::UInt32 LOGLILAIDHI; // 0x30
		static ::Google::Protobuf::MessageParser_1<::HKCILGGEEFM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKCILGGEEFM*>**)UnitySDK::FromName("", "HKCILGGEEFM")->GetStaticField(0x367C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::ANCNGIAAHKP*>** StaticGet_AEEBONINHPA()
		{
			return (::Google::Protobuf::FieldCodec_1<::ANCNGIAAHKP*>**)UnitySDK::FromName("", "HKCILGGEEFM")->GetStaticField(0x367C8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MDODEAGKAJC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HKCILGGEEFM")->GetStaticField(0x367D0);
		}

		// static const ::System::Object HJNEIAJJEFA; // 0x0
		// static const ::System::Object PPEKKOJJNGA; // 0x0
		// static const ::System::Object PEBHOADGIJJ; // 0x0
		// static const ::System::Object LHPFJJBFNGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKCILGGEEFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKCILGGEEFM*))((::PBYTE)hIl2Cpp + HKCILGGEEFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKCILGGEEFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKCILGGEEFM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKCILGGEEFM*>*(*)())((::PBYTE)hIl2Cpp + HKCILGGEEFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKCILGGEEFM* Clone()
		{
			return ((::HKCILGGEEFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHEMOKDHCIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_MHEMOKDHCIK_OFFSET))(this);
		}

		::System::Void AKNIIPGCPNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKCILGGEEFM_AKNIIPGCPNF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>* ILPPGMDHHPI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_ILPPGMDHHPI_OFFSET))(this);
		}

		::System::Int64 LAIJONECJHE()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_LAIJONECJHE_OFFSET))(this);
		}

		::System::Void BNJAOBOAKKJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HKCILGGEEFM_BNJAOBOAKKJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GDLOOENPKNL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_GDLOOENPKNL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKCILGGEEFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKCILGGEEFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKCILGGEEFM*))((::PBYTE)hIl2Cpp + HKCILGGEEFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKCILGGEEFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKCILGGEEFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKCILGGEEFM*))((::PBYTE)hIl2Cpp + HKCILGGEEFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKCILGGEEFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
