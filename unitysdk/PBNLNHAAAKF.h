#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBEPMABCBGF;
class PBNLNHAAAKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBNLNHAAAKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEFB530)
#define PBNLNHAAAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEFB9D0)
#define PBNLNHAAAKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEFB020)
#define PBNLNHAAAKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEFAEF0)
#define PBNLNHAAAKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFAEA0)
#define PBNLNHAAAKF_DFMFECOINOI_OFFSET UNITYSDK_OFFSET(0x1DEFB090)
#define PBNLNHAAAKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEFB0D0)
#define PBNLNHAAAKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEFB0A0)
#define PBNLNHAAAKF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEFB070)
#define PBNLNHAAAKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEFB2B0)
#define PBNLNHAAAKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEFAE60)
#define PBNLNHAAAKF_LIMFMEKJBPF_OFFSET UNITYSDK_OFFSET(0x1DEFB050)
#define PBNLNHAAAKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEFB7D0)
#define PBNLNHAAAKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEFB690)
#define PBNLNHAAAKF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEFB060)
#define PBNLNHAAAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEFAE90)
#define PBNLNHAAAKF_PFPPLLJFBAM_OFFSET UNITYSDK_OFFSET(0x1DEFB080)
#define PBNLNHAAAKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEFB360)
#define PBNLNHAAAKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEFB3C0)

	class PBNLNHAAAKF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BBEPMABCBGF*>* PBKIDNIPABK; // 0x10
		::BBEPMABCBGF* KFDOLCMLJGP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_BOEJOIEFDNI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PBNLNHAAAKF")->GetStaticField(0x33E30);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PBNLNHAAAKF")->GetStaticField(0x33E38);
		}

		// static const ::System::Object HHOCPOACAJL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MDBNPFKPBCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBNLNHAAAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBNLNHAAAKF*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PBNLNHAAAKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBNLNHAAAKF* Clone()
		{
			return ((::PBNLNHAAAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BBEPMABCBGF*>* LIMFMEKJBPF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BBEPMABCBGF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_LIMFMEKJBPF_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BBEPMABCBGF* PFPPLLJFBAM()
		{
			return ((::BBEPMABCBGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_PFPPLLJFBAM_OFFSET))(this);
		}

		::System::Void DFMFECOINOI(::BBEPMABCBGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBEPMABCBGF*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_DFMFECOINOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBNLNHAAAKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBNLNHAAAKF*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBNLNHAAAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBNLNHAAAKF*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBNLNHAAAKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
