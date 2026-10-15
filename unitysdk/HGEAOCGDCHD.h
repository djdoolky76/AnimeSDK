#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEPAFBJBGBH;
class HGEAOCGDCHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGEAOCGDCHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5778F0)
#define HGEAOCGDCHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E577C90)
#define HGEAOCGDCHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E577270)
#define HGEAOCGDCHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E577170)
#define HGEAOCGDCHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E577120)
#define HGEAOCGDCHD_DJGDBLNGHPJ_OFFSET UNITYSDK_OFFSET(0x1E5772E0)
#define HGEAOCGDCHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5774D0)
#define HGEAOCGDCHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5772F0)
#define HGEAOCGDCHD_FEPGNGDIACL_OFFSET UNITYSDK_OFFSET(0x1E5772C0)
#define HGEAOCGDCHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E577670)
#define HGEAOCGDCHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5770B0)
#define HGEAOCGDCHD_LALCJKIIEBL_OFFSET UNITYSDK_OFFSET(0x1E5772D0)
#define HGEAOCGDCHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E577AA0)
#define HGEAOCGDCHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5779D0)
#define HGEAOCGDCHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E577110)
#define HGEAOCGDCHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E577790)
#define HGEAOCGDCHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5777F0)

inline static constexpr unsigned int HGEAOCGDCHD_TypeDefinitionIndex = 29129;

	class HGEAOCGDCHD : public ::System::Object
	{
	public:
		::GEPAFBJBGBH* CEKBBJKMBNH; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DGGAPDHMFCO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HGEAOCGDCHD")->GetStaticField(0x36BF0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GIDFDIIEBPP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HGEAOCGDCHD")->GetStaticField(0x36BF8);
		}

		// static const ::System::Object PJOHMKOPAPB; // 0x0
		// static const ::System::Object JAAGHIBFCPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGEAOCGDCHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGEAOCGDCHD*))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGEAOCGDCHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HGEAOCGDCHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGEAOCGDCHD* Clone()
		{
			return ((::HGEAOCGDCHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_CLONE_OFFSET))(this);
		}

		::GEPAFBJBGBH* FEPGNGDIACL()
		{
			return ((::GEPAFBJBGBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_FEPGNGDIACL_OFFSET))(this);
		}

		::System::Void LALCJKIIEBL(::GEPAFBJBGBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEPAFBJBGBH*))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_LALCJKIIEBL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DJGDBLNGHPJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_DJGDBLNGHPJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGEAOCGDCHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGEAOCGDCHD*))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGEAOCGDCHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGEAOCGDCHD*))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGEAOCGDCHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
