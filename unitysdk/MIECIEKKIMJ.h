#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEAPCHBBOFN;
class MIECIEKKIMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIECIEKKIMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA0CE70)
#define MIECIEKKIMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0D1F0)
#define MIECIEKKIMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA0C9C0)
#define MIECIEKKIMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA0C900)
#define MIECIEKKIMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0C8B0)
#define MIECIEKKIMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA0CB70)
#define MIECIEKKIMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA0CA20)
#define MIECIEKKIMJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA0CA00)
#define MIECIEKKIMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA0CCA0)
#define MIECIEKKIMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA0C870)
#define MIECIEKKIMJ_KJJFGIBOIHJ_OFFSET UNITYSDK_OFFSET(0x1EA0CA10)
#define MIECIEKKIMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA0D020)
#define MIECIEKKIMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA0CF80)
#define MIECIEKKIMJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA0C9F0)
#define MIECIEKKIMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA0C8A0)
#define MIECIEKKIMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA0CD10)
#define MIECIEKKIMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA0CD70)

inline static constexpr unsigned int MIECIEKKIMJ_TypeDefinitionIndex = 26686;

	class MIECIEKKIMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CEAPCHBBOFN*>* HLJMBNMOKDE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::CEAPCHBBOFN*>** StaticGet_EOFDCHOGIPA()
		{
			return (::Google::Protobuf::FieldCodec_1<::CEAPCHBBOFN*>**)UnitySDK::FromName("", "MIECIEKKIMJ")->GetStaticField(0x52970);
		}

		static ::Google::Protobuf::MessageParser_1<::MIECIEKKIMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MIECIEKKIMJ*>**)UnitySDK::FromName("", "MIECIEKKIMJ")->GetStaticField(0x52978);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAIJKLGJIKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MIECIEKKIMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIECIEKKIMJ*))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIECIEKKIMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MIECIEKKIMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MIECIEKKIMJ*>*(*)())((::PBYTE)hIl2Cpp + MIECIEKKIMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MIECIEKKIMJ* Clone()
		{
			return ((::MIECIEKKIMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CEAPCHBBOFN*>* KJJFGIBOIHJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CEAPCHBBOFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_KJJFGIBOIHJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MIECIEKKIMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MIECIEKKIMJ*))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MIECIEKKIMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIECIEKKIMJ*))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIECIEKKIMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
