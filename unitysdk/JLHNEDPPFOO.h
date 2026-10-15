#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBNFMNHGIPN;
class EPBMGIOIHEI;
class JLHNEDPPFOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLHNEDPPFOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E74D600)
#define JLHNEDPPFOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74DA60)
#define JLHNEDPPFOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E74D1E0)
#define JLHNEDPPFOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E74D0D0)
#define JLHNEDPPFOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74D060)
#define JLHNEDPPFOO_EEFHFCKLDFM_OFFSET UNITYSDK_OFFSET(0x1E74D240)
#define JLHNEDPPFOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E74D280)
#define JLHNEDPPFOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E74D250)
#define JLHNEDPPFOO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E74D220)
#define JLHNEDPPFOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E74D3D0)
#define JLHNEDPPFOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E74D020)
#define JLHNEDPPFOO_KJJFGIBOIHJ_OFFSET UNITYSDK_OFFSET(0x1E74D230)
#define JLHNEDPPFOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E74D840)
#define JLHNEDPPFOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E74D740)
#define JLHNEDPPFOO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E74D210)
#define JLHNEDPPFOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E74D050)
#define JLHNEDPPFOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E74D460)
#define JLHNEDPPFOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E74D4C0)

inline static constexpr unsigned int JLHNEDPPFOO_TypeDefinitionIndex = 28945;

	class JLHNEDPPFOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EPBMGIOIHEI*>* AKGEBKGKNJM; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::BBNFMNHGIPN*>* HLJMBNMOKDE; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::EPBMGIOIHEI*>** StaticGet_PKBDEKENOII()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPBMGIOIHEI*>**)UnitySDK::FromName("", "JLHNEDPPFOO")->GetStaticField(0x64520);
		}

		static ::Google::Protobuf::MessageParser_1<::JLHNEDPPFOO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLHNEDPPFOO*>**)UnitySDK::FromName("", "JLHNEDPPFOO")->GetStaticField(0x64528);
		}

		static ::Google::Protobuf::FieldCodec_1<::BBNFMNHGIPN*>** StaticGet_EOFDCHOGIPA()
		{
			return (::Google::Protobuf::FieldCodec_1<::BBNFMNHGIPN*>**)UnitySDK::FromName("", "JLHNEDPPFOO")->GetStaticField(0x64530);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAIJKLGJIKD; // 0x0
		// static const ::System::Object KOCLDECMNDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLHNEDPPFOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHNEDPPFOO*))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLHNEDPPFOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLHNEDPPFOO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLHNEDPPFOO*>*(*)())((::PBYTE)hIl2Cpp + JLHNEDPPFOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLHNEDPPFOO* Clone()
		{
			return ((::JLHNEDPPFOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BBNFMNHGIPN*>* KJJFGIBOIHJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BBNFMNHGIPN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_KJJFGIBOIHJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPBMGIOIHEI*>* EEFHFCKLDFM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPBMGIOIHEI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_EEFHFCKLDFM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLHNEDPPFOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLHNEDPPFOO*))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLHNEDPPFOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHNEDPPFOO*))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLHNEDPPFOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
