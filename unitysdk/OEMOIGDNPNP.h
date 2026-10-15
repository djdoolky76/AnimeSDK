#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEMOIGDNPNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEMOIGDNPNP_AGFANMDJCBJ_OFFSET UNITYSDK_OFFSET(0x1DE2F8E0)
#define OEMOIGDNPNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE30070)
#define OEMOIGDNPNP_CBPLFKKHMDB_OFFSET UNITYSDK_OFFSET(0x1DE2F920)
#define OEMOIGDNPNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE30310)
#define OEMOIGDNPNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE2F880)
#define OEMOIGDNPNP_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1DE2F8F0)
#define OEMOIGDNPNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE2F780)
#define OEMOIGDNPNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2F6E0)
#define OEMOIGDNPNP_ENIJDMAJKCO_OFFSET UNITYSDK_OFFSET(0x1DE2F8D0)
#define OEMOIGDNPNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE2F9A0)
#define OEMOIGDNPNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE2F940)
#define OEMOIGDNPNP_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1DE2F900)
#define OEMOIGDNPNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE2FBC0)
#define OEMOIGDNPNP_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1DE2F930)
#define OEMOIGDNPNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE2F670)
#define OEMOIGDNPNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE30200)
#define OEMOIGDNPNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE30190)
#define OEMOIGDNPNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE2F6D0)
#define OEMOIGDNPNP_PFCKLEMPAAD_OFFSET UNITYSDK_OFFSET(0x1DE2F910)
#define OEMOIGDNPNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE2FE10)
#define OEMOIGDNPNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE2FE70)

	class OEMOIGDNPNP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::Double>* AFNHANNCAMC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean EIPIJPDLIHO; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 KBIKDALMALD; // 0x24
		::System::Double NMABHKCOLCM; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OEMOIGDNPNP")->GetStaticField(0x159A0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OEMOIGDNPNP")->GetStaticField(0x159A8);
		}

		// static const ::System::Object BCMOOHPKBDG; // 0x0
		// static const ::System::Object IADILMFABOH; // 0x0
		// static const ::System::Object JBEIEHCLLNH; // 0x0
		// static const ::System::Object GEJEJNNMGGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEMOIGDNPNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEMOIGDNPNP*))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEMOIGDNPNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OEMOIGDNPNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEMOIGDNPNP* Clone()
		{
			return ((::OEMOIGDNPNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENIJDMAJKCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_ENIJDMAJKCO_OFFSET))(this);
		}

		::System::Void AGFANMDJCBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_AGFANMDJCBJ_OFFSET))(this, a1);
		}

		::System::Double CPEEIHDCIFD()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::System::Boolean PFCKLEMPAAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_PFCKLEMPAAD_OFFSET))(this);
		}

		::System::Void CBPLFKKHMDB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_CBPLFKKHMDB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::Double>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_HONGLJECAAC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEMOIGDNPNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEMOIGDNPNP*))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEMOIGDNPNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEMOIGDNPNP*))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEMOIGDNPNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
