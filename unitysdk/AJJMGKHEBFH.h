#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJJMGKHEBFH;
class COMJKPOMILA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJJMGKHEBFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C35F0)
#define AJJMGKHEBFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C3A20)
#define AJJMGKHEBFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C2F70)
#define AJJMGKHEBFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C2E30)
#define AJJMGKHEBFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C2DE0)
#define AJJMGKHEBFH_EJAJNNKCJEI_OFFSET UNITYSDK_OFFSET(0x1E3C2FC0)
#define AJJMGKHEBFH_EKFOBGFBHGP_OFFSET UNITYSDK_OFFSET(0x1E3C2FE0)
#define AJJMGKHEBFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C31D0)
#define AJJMGKHEBFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C2FF0)
#define AJJMGKHEBFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C3370)
#define AJJMGKHEBFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C2D70)
#define AJJMGKHEBFH_JJPCHFDFGBJ_OFFSET UNITYSDK_OFFSET(0x1E3C2FD0)
#define AJJMGKHEBFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C37E0)
#define AJJMGKHEBFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C36D0)
#define AJJMGKHEBFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C2DD0)
#define AJJMGKHEBFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C3480)
#define AJJMGKHEBFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C34E0)

inline static constexpr unsigned int AJJMGKHEBFH_TypeDefinitionIndex = 28508;

	class AJJMGKHEBFH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::COMJKPOMILA* ELAMKJFAIML; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDDPICFEDDB; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HAIKNOLDMMF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AJJMGKHEBFH")->GetStaticField(0x35870);
		}

		static ::Google::Protobuf::MessageParser_1<::AJJMGKHEBFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJJMGKHEBFH*>**)UnitySDK::FromName("", "AJJMGKHEBFH")->GetStaticField(0x35878);
		}

		// static const ::System::Object AICIMIDEGJE; // 0x0
		// static const ::System::Object CJCIBNGNGNC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJJMGKHEBFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJJMGKHEBFH*))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJMGKHEBFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJJMGKHEBFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJJMGKHEBFH*>*(*)())((::PBYTE)hIl2Cpp + AJJMGKHEBFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJJMGKHEBFH* Clone()
		{
			return ((::AJJMGKHEBFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_CLONE_OFFSET))(this);
		}

		::COMJKPOMILA* EJAJNNKCJEI()
		{
			return ((::COMJKPOMILA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_EJAJNNKCJEI_OFFSET))(this);
		}

		::System::Void JJPCHFDFGBJ(::COMJKPOMILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COMJKPOMILA*))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_JJPCHFDFGBJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EKFOBGFBHGP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_EKFOBGFBHGP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJJMGKHEBFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJJMGKHEBFH*))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJJMGKHEBFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJJMGKHEBFH*))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJJMGKHEBFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
