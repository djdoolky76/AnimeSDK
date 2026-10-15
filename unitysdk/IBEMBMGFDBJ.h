#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBEMBMGFDBJ;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBEMBMGFDBJ_AJKGCJAFDFJ_OFFSET UNITYSDK_OFFSET(0x1E6124D0)
#define IBEMBMGFDBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E612D00)
#define IBEMBMGFDBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E613190)
#define IBEMBMGFDBJ_CEONBHAEFEK_OFFSET UNITYSDK_OFFSET(0x1E612540)
#define IBEMBMGFDBJ_CJJDDCCAKAO_OFFSET UNITYSDK_OFFSET(0x1E612420)
#define IBEMBMGFDBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6123C0)
#define IBEMBMGFDBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E612310)
#define IBEMBMGFDBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6122A0)
#define IBEMBMGFDBJ_DDGJGCKHLNO_OFFSET UNITYSDK_OFFSET(0x1E612410)
#define IBEMBMGFDBJ_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1E612400)
#define IBEMBMGFDBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6125E0)
#define IBEMBMGFDBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6125B0)
#define IBEMBMGFDBJ_FANEFJHFOJC_OFFSET UNITYSDK_OFFSET(0x1E612530)
#define IBEMBMGFDBJ_GANCDPJKEMM_OFFSET UNITYSDK_OFFSET(0x1E6124E0)
#define IBEMBMGFDBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6126F0)
#define IBEMBMGFDBJ_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1E6123F0)
#define IBEMBMGFDBJ_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1E612480)
#define IBEMBMGFDBJ_IAAEMJBLGLB_OFFSET UNITYSDK_OFFSET(0x1E612590)
#define IBEMBMGFDBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E612260)
#define IBEMBMGFDBJ_KPHPJLOBINH_OFFSET UNITYSDK_OFFSET(0x1E6125A0)
#define IBEMBMGFDBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E612FD0)
#define IBEMBMGFDBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E612F30)
#define IBEMBMGFDBJ_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1E612470)
#define IBEMBMGFDBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E612290)
#define IBEMBMGFDBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6129B0)
#define IBEMBMGFDBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E612A10)

	class IBEMBMGFDBJ : public ::System::Object
	{
	public:
		::System::String* OAJGABFBJGD; // 0x10
		::System::String* IOGCODPGEEA; // 0x18
		::System::String* NMFBFEHFMNG; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::Google::Protobuf::ByteString* AJAENCOMBNL; // 0x30
		::System::UInt32 AEKECGJLGEF; // 0x38
		::System::Boolean OAFOFEMLGHI; // 0x3C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IBEMBMGFDBJ")->GetStaticField(0x40E70);
		}

		// static const ::System::Object AINHNOCEBJG; // 0x0
		// static const ::System::Object MFPBLMHBJDB; // 0x0
		// static const ::System::Object OLMIFJKILJG; // 0x0
		// static const ::System::Object DKLMHECNOEM; // 0x0
		// static const ::System::Object OFFFGAFMBED; // 0x0
		// static const ::System::Object GJMDBBDBAKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBEMBMGFDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBEMBMGFDBJ*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBEMBMGFDBJ* Clone()
		{
			return ((::IBEMBMGFDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::System::String* DDGJGCKHLNO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_DDGJGCKHLNO_OFFSET))(this);
		}

		::System::Void CJJDDCCAKAO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_CJJDDCCAKAO_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_HABCMACJEIN_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* AJKGCJAFDFJ()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_AJKGCJAFDFJ_OFFSET))(this);
		}

		::System::Void GANCDPJKEMM(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_GANCDPJKEMM_OFFSET))(this, a1);
		}

		::System::String* FANEFJHFOJC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_FANEFJHFOJC_OFFSET))(this);
		}

		::System::Void CEONBHAEFEK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_CEONBHAEFEK_OFFSET))(this, a1);
		}

		::System::Boolean IAAEMJBLGLB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_IAAEMJBLGLB_OFFSET))(this);
		}

		::System::Void KPHPJLOBINH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_KPHPJLOBINH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBEMBMGFDBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBEMBMGFDBJ*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBEMBMGFDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBEMBMGFDBJ*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
