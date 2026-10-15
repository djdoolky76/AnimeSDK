#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCNGIAAHKP;
class HKCILGGEEFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKCILGGEEFM_AKNIIPGCPNF_OFFSET UNITYSDK_OFFSET(0x1E5AE150)
#define HKCILGGEEFM_BNJAOBOAKKJ_OFFSET UNITYSDK_OFFSET(0x1E5AE180)
#define HKCILGGEEFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5AE6C0)
#define HKCILGGEEFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AEAF0)
#define HKCILGGEEFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5AE110)
#define HKCILGGEEFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5AE010)
#define HKCILGGEEFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5ADF90)
#define HKCILGGEEFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5AE1D0)
#define HKCILGGEEFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5AE1A0)
#define HKCILGGEEFM_GDLOOENPKNL_OFFSET UNITYSDK_OFFSET(0x1E5AE190)
#define HKCILGGEEFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5AE330)
#define HKCILGGEEFM_ILPPGMDHHPI_OFFSET UNITYSDK_OFFSET(0x1E5AE160)
#define HKCILGGEEFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5ADF50)
#define HKCILGGEEFM_LAIJONECJHE_OFFSET UNITYSDK_OFFSET(0x1E5AE170)
#define HKCILGGEEFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5AE9B0)
#define HKCILGGEEFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5AE8E0)
#define HKCILGGEEFM_MHEMOKDHCIK_OFFSET UNITYSDK_OFFSET(0x1E5AE140)
#define HKCILGGEEFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5ADF80)
#define HKCILGGEEFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5AE4A0)
#define HKCILGGEEFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5AE500)

inline static constexpr unsigned int HKCILGGEEFM_TypeDefinitionIndex = 28200;

	class HKCILGGEEFM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IONILEADFMC; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ANCNGIAAHKP*>* FDJNENCJIIH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 LOGLILAIDHI; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 JNBFEPBPFBP; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_MDODEAGKAJC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HKCILGGEEFM")->GetStaticField(0x44600);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HKCILGGEEFM")->GetStaticField(0x44608);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AEEBONINHPA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HKCILGGEEFM")->GetStaticField(0x44610);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HKCILGGEEFM_JJGHOBBFNJD_OFFSET))();
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
