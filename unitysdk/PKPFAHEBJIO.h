#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBJLHBAGCJ;
class NIFPICHIDLJ;
class PKPFAHEBJIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKPFAHEBJIO_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1DF96180)
#define PKPFAHEBJIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF965B0)
#define PKPFAHEBJIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF96A80)
#define PKPFAHEBJIO_CKCIAKDNACK_OFFSET UNITYSDK_OFFSET(0x1DF96150)
#define PKPFAHEBJIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF96110)
#define PKPFAHEBJIO_COAMIMELEAK_OFFSET UNITYSDK_OFFSET(0x1DF96160)
#define PKPFAHEBJIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF96050)
#define PKPFAHEBJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF95FC0)
#define PKPFAHEBJIO_ECAABINLDDB_OFFSET UNITYSDK_OFFSET(0x1DF961A0)
#define PKPFAHEBJIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF961E0)
#define PKPFAHEBJIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF961B0)
#define PKPFAHEBJIO_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1DF96170)
#define PKPFAHEBJIO_GCMLDLLJGDJ_OFFSET UNITYSDK_OFFSET(0x1DF96190)
#define PKPFAHEBJIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF962D0)
#define PKPFAHEBJIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF95F80)
#define PKPFAHEBJIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF968E0)
#define PKPFAHEBJIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF967B0)
#define PKPFAHEBJIO_NMDHPAJPKOB_OFFSET UNITYSDK_OFFSET(0x1DF96140)
#define PKPFAHEBJIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF95FB0)
#define PKPFAHEBJIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF96380)
#define PKPFAHEBJIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF963E0)

inline static constexpr unsigned int PKPFAHEBJIO_TypeDefinitionIndex = 25586;

	class PKPFAHEBJIO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EBBJLHBAGCJ*>* OFHNENHIPDI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* CAKCGKGBDIJ; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::NIFPICHIDLJ*>* HLGOGOCKLNI; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 MLCHFINKHHM; // 0x30
		::System::UInt32 FKAIMIIAGPK; // 0x34
		static ::System::Object** StaticGet_OGFIDCNFAFJ()
		{
			return (::System::Object**)UnitySDK::FromName("", "PKPFAHEBJIO")->GetStaticField(0x4A8D0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PKPFAHEBJIO")->GetStaticField(0x4A8D8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MECOBANOLJG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PKPFAHEBJIO")->GetStaticField(0x4A8E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KGEBDCIACDJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PKPFAHEBJIO")->GetStaticField(0x4A8E8);
		}

		// static const ::System::Object JBDHCEMPLGC; // 0x0
		// static const ::System::Object DPABIFHMLMF; // 0x0
		// static const ::System::Object ACJCJMKKFMP; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object OJOGFBJAPMA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKPFAHEBJIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPFAHEBJIO*))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKPFAHEBJIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PKPFAHEBJIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKPFAHEBJIO* Clone()
		{
			return ((::PKPFAHEBJIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NIFPICHIDLJ*>* NMDHPAJPKOB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NIFPICHIDLJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_NMDHPAJPKOB_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* CKCIAKDNACK()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_CKCIAKDNACK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EBBJLHBAGCJ*>* COAMIMELEAK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EBBJLHBAGCJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_COAMIMELEAK_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::UInt32 GCMLDLLJGDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_GCMLDLLJGDJ_OFFSET))(this);
		}

		::System::Void ECAABINLDDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_ECAABINLDDB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKPFAHEBJIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKPFAHEBJIO*))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKPFAHEBJIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPFAHEBJIO*))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKPFAHEBJIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
