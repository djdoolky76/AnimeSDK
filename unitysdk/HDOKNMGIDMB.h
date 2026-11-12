#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLOHGFCFEEL.h"
#include "unitysdk/System/Object.h"
class HBJLNKAFNAD;
class HDOKNMGIDMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDOKNMGIDMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F84BB90)
#define HDOKNMGIDMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F84C000)
#define HDOKNMGIDMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F84B630)
#define HDOKNMGIDMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F84B570)
#define HDOKNMGIDMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F84B520)
#define HDOKNMGIDMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F84B7F0)
#define HDOKNMGIDMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F84B6B0)
#define HDOKNMGIDMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F84B920)
#define HDOKNMGIDMB_GFAIILIAFDB_OFFSET UNITYSDK_OFFSET(0x1F84B680)
#define HDOKNMGIDMB_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1F84B670)
#define HDOKNMGIDMB_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1F84B660)
#define HDOKNMGIDMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F84B4E0)
#define HDOKNMGIDMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F84BDA0)
#define HDOKNMGIDMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F84BCF0)
#define HDOKNMGIDMB_MFMHGKFILMF_OFFSET UNITYSDK_OFFSET(0x1F84B6A0)
#define HDOKNMGIDMB_MIFHFJNGLHL_OFFSET UNITYSDK_OFFSET(0x1F84B690)
#define HDOKNMGIDMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F84B510)
#define HDOKNMGIDMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F84B990)
#define HDOKNMGIDMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F84B9F0)

inline static constexpr unsigned int HDOKNMGIDMB_TypeDefinitionIndex = 25799;

	class HDOKNMGIDMB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HBJLNKAFNAD*>* JJAPMELHHJB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::BLOHGFCFEEL GMPNCOBOFDM; // 0x20
		::System::Boolean BDOIOIJACNM; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::HBJLNKAFNAD*>** StaticGet_HEDGHJLNPNP()
		{
			return (::Google::Protobuf::FieldCodec_1<::HBJLNKAFNAD*>**)UnitySDK::FromName("", "HDOKNMGIDMB")->GetStaticField(0x27B20);
		}

		static ::Google::Protobuf::MessageParser_1<::HDOKNMGIDMB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HDOKNMGIDMB*>**)UnitySDK::FromName("", "HDOKNMGIDMB")->GetStaticField(0x27B28);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object LBGCKHEGBKB; // 0x0
		// static const ::System::Object NHGAOHDKPIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDOKNMGIDMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDOKNMGIDMB*))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDOKNMGIDMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HDOKNMGIDMB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HDOKNMGIDMB*>*(*)())((::PBYTE)hIl2Cpp + HDOKNMGIDMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDOKNMGIDMB* Clone()
		{
			return ((::HDOKNMGIDMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_CLONE_OFFSET))(this);
		}

		::BLOHGFCFEEL JBIOGKPHKKC()
		{
			return ((::BLOHGFCFEEL(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::BLOHGFCFEEL a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLOHGFCFEEL))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HBJLNKAFNAD*>* GFAIILIAFDB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HBJLNKAFNAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_GFAIILIAFDB_OFFSET))(this);
		}

		::System::Boolean MIFHFJNGLHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_MIFHFJNGLHL_OFFSET))(this);
		}

		::System::Void MFMHGKFILMF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_MFMHGKFILMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDOKNMGIDMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDOKNMGIDMB*))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDOKNMGIDMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDOKNMGIDMB*))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDOKNMGIDMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
