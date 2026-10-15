#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJJKHFPLLIF;
class LJEMPEHADKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJJKHFPLLIF_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E695780)
#define IJJKHFPLLIF_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E695790)
#define IJJKHFPLLIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E695BA0)
#define IJJKHFPLLIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E696070)
#define IJJKHFPLLIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E695730)
#define IJJKHFPLLIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E695620)
#define IJJKHFPLLIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6955B0)
#define IJJKHFPLLIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E695820)
#define IJJKHFPLLIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6957C0)
#define IJJKHFPLLIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E695970)
#define IJJKHFPLLIF_IPOFIOMAEHH_OFFSET UNITYSDK_OFFSET(0x1E6957A0)
#define IJJKHFPLLIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E695540)
#define IJJKHFPLLIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E695DE0)
#define IJJKHFPLLIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E695CE0)
#define IJJKHFPLLIF_MNBHEHGAPNO_OFFSET UNITYSDK_OFFSET(0x1E6957B0)
#define IJJKHFPLLIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6955A0)
#define IJJKHFPLLIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E695A00)
#define IJJKHFPLLIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E695A60)

	class IJJKHFPLLIF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LJEMPEHADKJ*>* OFBGIMPLLHB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LJEMPEHADKJ*>* PBJFBJKAHOB; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_JFCMFMFEGOO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IJJKHFPLLIF")->GetStaticField(0x526B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CKOEDAEFOCH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IJJKHFPLLIF")->GetStaticField(0x526B8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IJJKHFPLLIF")->GetStaticField(0x526C0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object ECPMCHPGHED; // 0x0
		// static const ::System::Object FIKBICKONPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJJKHFPLLIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJJKHFPLLIF*))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJJKHFPLLIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IJJKHFPLLIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJJKHFPLLIF* Clone()
		{
			return ((::IJJKHFPLLIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LJEMPEHADKJ*>* IPOFIOMAEHH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LJEMPEHADKJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_IPOFIOMAEHH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LJEMPEHADKJ*>* MNBHEHGAPNO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LJEMPEHADKJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_MNBHEHGAPNO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJJKHFPLLIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJJKHFPLLIF*))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJJKHFPLLIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJJKHFPLLIF*))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJJKHFPLLIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
