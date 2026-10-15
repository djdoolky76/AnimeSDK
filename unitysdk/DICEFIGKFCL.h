#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DICEFIGKFCL;
class JBMDMFOCOAK;
class KJMHIDMOBMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DICEFIGKFCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BB560)
#define DICEFIGKFCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BBA90)
#define DICEFIGKFCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BAF80)
#define DICEFIGKFCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BAE80)
#define DICEFIGKFCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BAE30)
#define DICEFIGKFCL_DFNCFBPKFLC_OFFSET UNITYSDK_OFFSET(0x1E1BB060)
#define DICEFIGKFCL_DLMFGKEABFF_OFFSET UNITYSDK_OFFSET(0x1E1BB040)
#define DICEFIGKFCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BB0E0)
#define DICEFIGKFCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BB080)
#define DICEFIGKFCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BB190)
#define DICEFIGKFCL_HHDNOHIJHKD_OFFSET UNITYSDK_OFFSET(0x1E1BB070)
#define DICEFIGKFCL_HKEHLCIHMLI_OFFSET UNITYSDK_OFFSET(0x1E1BB030)
#define DICEFIGKFCL_IJHGHFCOLCK_OFFSET UNITYSDK_OFFSET(0x1E1BB050)
#define DICEFIGKFCL_ILBCDKGKAEL_OFFSET UNITYSDK_OFFSET(0x1E1BAFF0)
#define DICEFIGKFCL_JAMPGFGFPOM_OFFSET UNITYSDK_OFFSET(0x1E1BB020)
#define DICEFIGKFCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BADC0)
#define DICEFIGKFCL_KCOKIEMHPCB_OFFSET UNITYSDK_OFFSET(0x1E1BB000)
#define DICEFIGKFCL_LFIOPIBCLLO_OFFSET UNITYSDK_OFFSET(0x1E1BB010)
#define DICEFIGKFCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BB930)
#define DICEFIGKFCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BB820)
#define DICEFIGKFCL_OBGINNFABAJ_OFFSET UNITYSDK_OFFSET(0x1E1BAFD0)
#define DICEFIGKFCL_OMJJFPIGFKA_OFFSET UNITYSDK_OFFSET(0x1E1BAFE0)
#define DICEFIGKFCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BAE20)
#define DICEFIGKFCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BB280)
#define DICEFIGKFCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BB2E0)

inline static constexpr unsigned int DICEFIGKFCL_TypeDefinitionIndex = 29914;

	class DICEFIGKFCL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JBMDMFOCOAK* ONFFPANCOAD; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KJMHIDMOBMB*>* ABOBPEGNLHG; // 0x20
		::System::UInt32 BJGPJKOFEAP; // 0x28
		::System::UInt32 FPMBHDEMPEB; // 0x2C
		::System::UInt32 EGHFJMMPIIA; // 0x30
		::System::UInt32 CHMPCDAPBIL; // 0x34
		static ::Google::Protobuf::FieldCodec** StaticGet_HKOHDKIJKAP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DICEFIGKFCL")->GetStaticField(0x35CE0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DICEFIGKFCL")->GetStaticField(0x35CE8);
		}

		// static const ::System::Object HHDLODKAFHM; // 0x0
		// static const ::System::Object PENKBOPKBDL; // 0x0
		// static const ::System::Object DEOGKHJLNMG; // 0x0
		// static const ::System::Object FHCOALOLKLG; // 0x0
		// static const ::System::Object GCANAFLKDAA; // 0x0
		// static const ::System::Object NDKEFIAMAFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DICEFIGKFCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DICEFIGKFCL*))((::PBYTE)hIl2Cpp + DICEFIGKFCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DICEFIGKFCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DICEFIGKFCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DICEFIGKFCL* Clone()
		{
			return ((::DICEFIGKFCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OBGINNFABAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_OBGINNFABAJ_OFFSET))(this);
		}

		::System::Void OMJJFPIGFKA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DICEFIGKFCL_OMJJFPIGFKA_OFFSET))(this, a1);
		}

		::System::UInt32 ILBCDKGKAEL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_ILBCDKGKAEL_OFFSET))(this);
		}

		::System::Void KCOKIEMHPCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DICEFIGKFCL_KCOKIEMHPCB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KJMHIDMOBMB*>* LFIOPIBCLLO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KJMHIDMOBMB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_LFIOPIBCLLO_OFFSET))(this);
		}

		::System::UInt32 JAMPGFGFPOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_JAMPGFGFPOM_OFFSET))(this);
		}

		::System::Void HKEHLCIHMLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DICEFIGKFCL_HKEHLCIHMLI_OFFSET))(this, a1);
		}

		::System::UInt32 DLMFGKEABFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_DLMFGKEABFF_OFFSET))(this);
		}

		::System::Void IJHGHFCOLCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DICEFIGKFCL_IJHGHFCOLCK_OFFSET))(this, a1);
		}

		::JBMDMFOCOAK* DFNCFBPKFLC()
		{
			return ((::JBMDMFOCOAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_DFNCFBPKFLC_OFFSET))(this);
		}

		::System::Void HHDNOHIJHKD(::JBMDMFOCOAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBMDMFOCOAK*))((::PBYTE)hIl2Cpp + DICEFIGKFCL_HHDNOHIJHKD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DICEFIGKFCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DICEFIGKFCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DICEFIGKFCL*))((::PBYTE)hIl2Cpp + DICEFIGKFCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DICEFIGKFCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DICEFIGKFCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DICEFIGKFCL*))((::PBYTE)hIl2Cpp + DICEFIGKFCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DICEFIGKFCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
