#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJJKHFPLLIF;
class LJEMPEHADKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJJKHFPLLIF_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E668130)
#define IJJKHFPLLIF_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E668140)
#define IJJKHFPLLIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E668550)
#define IJJKHFPLLIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E668A20)
#define IJJKHFPLLIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6680E0)
#define IJJKHFPLLIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E667FD0)
#define IJJKHFPLLIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E667F60)
#define IJJKHFPLLIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6681D0)
#define IJJKHFPLLIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E668170)
#define IJJKHFPLLIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E668320)
#define IJJKHFPLLIF_IPOFIOMAEHH_OFFSET UNITYSDK_OFFSET(0x1E668150)
#define IJJKHFPLLIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E667EF0)
#define IJJKHFPLLIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E668790)
#define IJJKHFPLLIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E668690)
#define IJJKHFPLLIF_MNBHEHGAPNO_OFFSET UNITYSDK_OFFSET(0x1E668160)
#define IJJKHFPLLIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E667F50)
#define IJJKHFPLLIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6683B0)
#define IJJKHFPLLIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E668410)

inline static constexpr unsigned int IJJKHFPLLIF_TypeDefinitionIndex = 25692;

	class IJJKHFPLLIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LJEMPEHADKJ*>* PBJFBJKAHOB; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LJEMPEHADKJ*>* OFBGIMPLLHB; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::LJEMPEHADKJ*>** StaticGet_CKOEDAEFOCH()
		{
			return (::Google::Protobuf::FieldCodec_1<::LJEMPEHADKJ*>**)UnitySDK::FromName("", "IJJKHFPLLIF")->GetStaticField(0x4F690);
		}

		static ::Google::Protobuf::FieldCodec_1<::LJEMPEHADKJ*>** StaticGet_JFCMFMFEGOO()
		{
			return (::Google::Protobuf::FieldCodec_1<::LJEMPEHADKJ*>**)UnitySDK::FromName("", "IJJKHFPLLIF")->GetStaticField(0x4F698);
		}

		static ::Google::Protobuf::MessageParser_1<::IJJKHFPLLIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJJKHFPLLIF*>**)UnitySDK::FromName("", "IJJKHFPLLIF")->GetStaticField(0x4F6A0);
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

		static ::Google::Protobuf::MessageParser_1<::IJJKHFPLLIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJJKHFPLLIF*>*(*)())((::PBYTE)hIl2Cpp + IJJKHFPLLIF_JJGHOBBFNJD_OFFSET))();
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
