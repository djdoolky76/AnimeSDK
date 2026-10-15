#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEFIDLICEMH;
class OFANJNFJCGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFANJNFJCGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE35EA0)
#define OFANJNFJCGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE36270)
#define OFANJNFJCGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE359F0)
#define OFANJNFJCGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE35930)
#define OFANJNFJCGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE358E0)
#define OFANJNFJCGL_DCCGNCLAHBA_OFFSET UNITYSDK_OFFSET(0x1DE35A70)
#define OFANJNFJCGL_EJIPHIKGPDG_OFFSET UNITYSDK_OFFSET(0x1DE35A30)
#define OFANJNFJCGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE35AC0)
#define OFANJNFJCGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE35A90)
#define OFANJNFJCGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE35A60)
#define OFANJNFJCGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE35C00)
#define OFANJNFJCGL_ILALBNPKHHM_OFFSET UNITYSDK_OFFSET(0x1DE35A20)
#define OFANJNFJCGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE358A0)
#define OFANJNFJCGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE36170)
#define OFANJNFJCGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE360B0)
#define OFANJNFJCGL_NIGKDMKGAIO_OFFSET UNITYSDK_OFFSET(0x1DE35A40)
#define OFANJNFJCGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE35A50)
#define OFANJNFJCGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE358D0)
#define OFANJNFJCGL_PHHMJFOFEPA_OFFSET UNITYSDK_OFFSET(0x1DE35A80)
#define OFANJNFJCGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE35C80)
#define OFANJNFJCGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE35CE0)

	class OFANJNFJCGL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LEFIDLICEMH*>* OEMKANFIKOB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LCKODLIBPKO; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 AOMPJLMLKCC; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_NDKIAOAELPN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OFANJNFJCGL")->GetStaticField(0x15FD0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFANJNFJCGL")->GetStaticField(0x15FD8);
		}

		// static const ::System::Object POMEKEHIBOH; // 0x0
		// static const ::System::Object EKGCOJPHFCH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LDCHHPMKPHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFANJNFJCGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFANJNFJCGL*))((::PBYTE)hIl2Cpp + OFANJNFJCGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFANJNFJCGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFANJNFJCGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFANJNFJCGL* Clone()
		{
			return ((::OFANJNFJCGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 ILALBNPKHHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_ILALBNPKHHM_OFFSET))(this);
		}

		::System::Void EJIPHIKGPDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFANJNFJCGL_EJIPHIKGPDG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LEFIDLICEMH*>* NIGKDMKGAIO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LEFIDLICEMH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_NIGKDMKGAIO_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFANJNFJCGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 DCCGNCLAHBA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_DCCGNCLAHBA_OFFSET))(this);
		}

		::System::Void PHHMJFOFEPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFANJNFJCGL_PHHMJFOFEPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFANJNFJCGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFANJNFJCGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFANJNFJCGL*))((::PBYTE)hIl2Cpp + OFANJNFJCGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFANJNFJCGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFANJNFJCGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFANJNFJCGL*))((::PBYTE)hIl2Cpp + OFANJNFJCGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFANJNFJCGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
