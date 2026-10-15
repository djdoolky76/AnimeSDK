#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOAOBPGFHLA;
class HJNPOBAMKKF;
class JAONELJJAFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJNPOBAMKKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5ABAA0)
#define HJNPOBAMKKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5ABFA0)
#define HJNPOBAMKKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5AB630)
#define HJNPOBAMKKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5AB520)
#define HJNPOBAMKKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AB4B0)
#define HJNPOBAMKKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5AB720)
#define HJNPOBAMKKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5AB6C0)
#define HJNPOBAMKKF_FHDGAFPJAFB_OFFSET UNITYSDK_OFFSET(0x1E5AB690)
#define HJNPOBAMKKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5AB870)
#define HJNPOBAMKKF_HOJMIDMPGEJ_OFFSET UNITYSDK_OFFSET(0x1E5AB6A0)
#define HJNPOBAMKKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5AB440)
#define HJNPOBAMKKF_KJCAOLLFKCE_OFFSET UNITYSDK_OFFSET(0x1E5AB680)
#define HJNPOBAMKKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5ABD10)
#define HJNPOBAMKKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5ABC00)
#define HJNPOBAMKKF_MJBPNFKDBMF_OFFSET UNITYSDK_OFFSET(0x1E5AB6B0)
#define HJNPOBAMKKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5AB4A0)
#define HJNPOBAMKKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5AB900)
#define HJNPOBAMKKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5AB960)

inline static constexpr unsigned int HJNPOBAMKKF_TypeDefinitionIndex = 25247;

	class HJNPOBAMKKF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JAONELJJAFK*>* BAOELGLJGJC; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AOAOBPGFHLA*>* HEJONOPAAAD; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 IIKBFBEOMLN; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_OBBKKNGABOE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HJNPOBAMKKF")->GetStaticField(0x440B0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HJNPOBAMKKF")->GetStaticField(0x440B8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OHDLDFAAJAP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HJNPOBAMKKF")->GetStaticField(0x440C0);
		}

		// static const ::System::Object IBHNONOGJNP; // 0x0
		// static const ::System::Object OAJAHLJMBLB; // 0x0
		// static const ::System::Object MGBDGGHMGBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJNPOBAMKKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJNPOBAMKKF*))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJNPOBAMKKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HJNPOBAMKKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJNPOBAMKKF* Clone()
		{
			return ((::HJNPOBAMKKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AOAOBPGFHLA*>* KJCAOLLFKCE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AOAOBPGFHLA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_KJCAOLLFKCE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JAONELJJAFK*>* FHDGAFPJAFB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JAONELJJAFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_FHDGAFPJAFB_OFFSET))(this);
		}

		::System::UInt32 HOJMIDMPGEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_HOJMIDMPGEJ_OFFSET))(this);
		}

		::System::Void MJBPNFKDBMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_MJBPNFKDBMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJNPOBAMKKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJNPOBAMKKF*))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJNPOBAMKKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJNPOBAMKKF*))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJNPOBAMKKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
