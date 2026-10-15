#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEMOIGDNPNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEMOIGDNPNP_AGFANMDJCBJ_OFFSET UNITYSDK_OFFSET(0x1DE021B0)
#define OEMOIGDNPNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE02940)
#define OEMOIGDNPNP_CBPLFKKHMDB_OFFSET UNITYSDK_OFFSET(0x1DE021F0)
#define OEMOIGDNPNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE02BE0)
#define OEMOIGDNPNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE02150)
#define OEMOIGDNPNP_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1DE021C0)
#define OEMOIGDNPNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE02050)
#define OEMOIGDNPNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE01FB0)
#define OEMOIGDNPNP_ENIJDMAJKCO_OFFSET UNITYSDK_OFFSET(0x1DE021A0)
#define OEMOIGDNPNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE02270)
#define OEMOIGDNPNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE02210)
#define OEMOIGDNPNP_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1DE021D0)
#define OEMOIGDNPNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE02490)
#define OEMOIGDNPNP_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1DE02200)
#define OEMOIGDNPNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE01F40)
#define OEMOIGDNPNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE02AD0)
#define OEMOIGDNPNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE02A60)
#define OEMOIGDNPNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE01FA0)
#define OEMOIGDNPNP_PFCKLEMPAAD_OFFSET UNITYSDK_OFFSET(0x1DE021E0)
#define OEMOIGDNPNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE026E0)
#define OEMOIGDNPNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE02740)

inline static constexpr unsigned int OEMOIGDNPNP_TypeDefinitionIndex = 25487;

	class OEMOIGDNPNP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::Double>* AFNHANNCAMC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Double NMABHKCOLCM; // 0x20
		::System::Boolean EIPIJPDLIHO; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 KBIKDALMALD; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::Double>** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Double>**)UnitySDK::FromName("", "OEMOIGDNPNP")->GetStaticField(0x14610);
		}

		static ::Google::Protobuf::MessageParser_1<::OEMOIGDNPNP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEMOIGDNPNP*>**)UnitySDK::FromName("", "OEMOIGDNPNP")->GetStaticField(0x14618);
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

		static ::Google::Protobuf::MessageParser_1<::OEMOIGDNPNP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEMOIGDNPNP*>*(*)())((::PBYTE)hIl2Cpp + OEMOIGDNPNP_JJGHOBBFNJD_OFFSET))();
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
