#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCJIPKABEF;
class JOFHMCJPBCE;
class PJFIMFJPMCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFCJIPKABEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E461160)
#define GFCJIPKABEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E461600)
#define GFCJIPKABEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E460AF0)
#define GFCJIPKABEF_COPOGGKCLHE_OFFSET UNITYSDK_OFFSET(0x1E460B70)
#define GFCJIPKABEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4609B0)
#define GFCJIPKABEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E460930)
#define GFCJIPKABEF_DPKFIAFCMIK_OFFSET UNITYSDK_OFFSET(0x1E460B20)
#define GFCJIPKABEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E460BD0)
#define GFCJIPKABEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E460BA0)
#define GFCJIPKABEF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E460B90)
#define GFCJIPKABEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E460D40)
#define GFCJIPKABEF_HBLPGFEOHGP_OFFSET UNITYSDK_OFFSET(0x1E460B50)
#define GFCJIPKABEF_IFLGHFNFOIM_OFFSET UNITYSDK_OFFSET(0x1E460B30)
#define GFCJIPKABEF_IKGGGGKMGLN_OFFSET UNITYSDK_OFFSET(0x1E460B40)
#define GFCJIPKABEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4608F0)
#define GFCJIPKABEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E461490)
#define GFCJIPKABEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E461360)
#define GFCJIPKABEF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E460B80)
#define GFCJIPKABEF_OCFNHFHJLDK_OFFSET UNITYSDK_OFFSET(0x1E460B60)
#define GFCJIPKABEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E460920)
#define GFCJIPKABEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E460EE0)
#define GFCJIPKABEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E460F40)

	class GFCJIPKABEF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PJFIMFJPMCN*>* JPLMPKBINDB; // 0x10
		::JOFHMCJPBCE* OFALGJGEJNG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BJLPKIPDAAF; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 HAHOPPLLGCE; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x34
		static ::Google::Protobuf::FieldCodec** StaticGet_KMDFLFMFHLL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GFCJIPKABEF")->GetStaticField(0x12F30);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JIFNFHHELJJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GFCJIPKABEF")->GetStaticField(0x12F38);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFCJIPKABEF")->GetStaticField(0x12F40);
		}

		// static const ::System::Object HGGGPJMBHAH; // 0x0
		// static const ::System::Object MJDEFIKLIIE; // 0x0
		// static const ::System::Object ILGNMODEDHE; // 0x0
		// static const ::System::Object AKIDCEJNJOP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFCJIPKABEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCJIPKABEF*))((::PBYTE)hIl2Cpp + GFCJIPKABEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCJIPKABEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFCJIPKABEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFCJIPKABEF* Clone()
		{
			return ((::GFCJIPKABEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_CLONE_OFFSET))(this);
		}

		::JOFHMCJPBCE* DPKFIAFCMIK()
		{
			return ((::JOFHMCJPBCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_DPKFIAFCMIK_OFFSET))(this);
		}

		::System::Void IFLGHFNFOIM(::JOFHMCJPBCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOFHMCJPBCE*))((::PBYTE)hIl2Cpp + GFCJIPKABEF_IFLGHFNFOIM_OFFSET))(this, a1);
		}

		::System::UInt32 IKGGGGKMGLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_IKGGGGKMGLN_OFFSET))(this);
		}

		::System::Void HBLPGFEOHGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFCJIPKABEF_HBLPGFEOHGP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PJFIMFJPMCN*>* OCFNHFHJLDK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PJFIMFJPMCN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_OCFNHFHJLDK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* COPOGGKCLHE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_COPOGGKCLHE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFCJIPKABEF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFCJIPKABEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFCJIPKABEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFCJIPKABEF*))((::PBYTE)hIl2Cpp + GFCJIPKABEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFCJIPKABEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFCJIPKABEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCJIPKABEF*))((::PBYTE)hIl2Cpp + GFCJIPKABEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFCJIPKABEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
